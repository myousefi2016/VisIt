/*****************************************************************************
*
* Copyright (c) 2000 - 2015, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#include <PyColorAttributeList.h>
#include <ObserverToCallback.h>
#include <stdio.h>
#include <snprintf.h>
#include <PyColorAttribute.h>

// ****************************************************************************
// Module: PyColorAttributeList
//
// Purpose: 
//   This class contains a list of ColorAttributes.
//
// Note:       Autogenerated by xml2python. Do not modify by hand!
//
// Programmer: xml2python
// Creation:   omitted
//
// ****************************************************************************

//
// This struct contains the Python type information and a ColorAttributeList.
//
struct ColorAttributeListObject
{
    PyObject_HEAD
    ColorAttributeList *data;
    bool        owns;
    PyObject   *parent;
};

//
// Internal prototypes
//
static PyObject *NewColorAttributeList(int);

std::string
PyColorAttributeList_ToString(const ColorAttributeList *atts, const char *prefix)
{
    std::string str;
    char tmpStr[1000];

    { // new scope
        int index = 0;
        // Create string representation of colors from atts.
        for(AttributeGroupVector::const_iterator pos = atts->GetColors().begin(); pos != atts->GetColors().end(); ++pos, ++index)
        {
            const ColorAttribute *current = (const ColorAttribute *)(*pos);
            SNPRINTF(tmpStr, 1000, "GetColors(%d).", index);
            std::string objPrefix(prefix + std::string(tmpStr));
            str += PyColorAttribute_ToString(current, objPrefix.c_str());
        }
        if(index == 0)
            str += "#colors does not contain any ColorAttribute objects.\n";
    }
    return str;
}

static PyObject *
ColorAttributeList_Notify(PyObject *self, PyObject *args)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    obj->data->Notify();
    Py_INCREF(Py_None);
    return Py_None;
}

/*static*/ PyObject *
ColorAttributeList_GetColors(PyObject *self, PyObject *args)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    int index;
    if(!PyArg_ParseTuple(args, "i", &index))
        return NULL;
    if(index < 0 || (size_t)index >= obj->data->GetColors().size())
    {
        char msg[400] = {'\0'};
        if(obj->data->GetColors().size() == 0)
            SNPRINTF(msg, 400, "In ColorAttributeList::GetColors : The index %d is invalid because colors is empty.", index);
        else
            SNPRINTF(msg, 400, "In ColorAttributeList::GetColors : The index %d is invalid. Use index values in: [0, %ld).",  index, obj->data->GetColors().size());
        PyErr_SetString(PyExc_IndexError, msg);
        return NULL;
    }

    // Since the new object will point to data owned by the this object,
    // we need to increment the reference count.
    Py_INCREF(self);

    PyObject *retval = PyColorAttribute_Wrap(&obj->data->GetColors(index));
    // Set the object's parent so the reference to the parent can be decref'd
    // when the child goes out of scope.
    PyColorAttribute_SetParent(retval, self);

    return retval;
}

PyObject *
ColorAttributeList_GetNumColors(PyObject *self, PyObject *args)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    return PyInt_FromLong((long)obj->data->GetColors().size());
}

PyObject *
ColorAttributeList_AddColors(PyObject *self, PyObject *args)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    PyObject *element = NULL;
    if(!PyArg_ParseTuple(args, "O", &element))
        return NULL;
    if(!PyColorAttribute_Check(element))
    {
        char msg[400] = {'\0'};
        SNPRINTF(msg, 400, "The ColorAttributeList::AddColors method only accepts ColorAttribute objects.");
        PyErr_SetString(PyExc_TypeError, msg);
        return NULL;
    }
    ColorAttribute *newData = PyColorAttribute_FromPyObject(element);
    obj->data->AddColors(*newData);
    obj->data->SelectColors();
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
ColorAttributeList_Remove_One_Colors(PyObject *self, int index)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    // Remove in the AttributeGroupVector instead of calling RemoveColors() because we don't want to delete the object; just remove it.
    AttributeGroupVector &atts = obj->data->GetColors();
    AttributeGroupVector::iterator pos = atts.begin();
    // Iterate through the vector "index" times. 
    for(int i = 0; i < index; ++i)
        ++pos;

    // If pos is still a valid iterator, remove that element.
    if(pos != atts.end())
    {
        // NOTE: Leak the object since other Python objects may reference it. Ideally,
        // we would put the object into some type of pool to be cleaned up later but
        // this will do for now.
        //
        // delete *pos;
        atts.erase(pos);
    }

    obj->data->SelectColors();
    Py_INCREF(Py_None);
    return Py_None;
}

PyObject *
ColorAttributeList_RemoveColors(PyObject *self, PyObject *args)
{
    int index;
    if(!PyArg_ParseTuple(args, "i", &index))
        return NULL;
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    if(index < 0 || index >= obj->data->GetNumColors())
    {
        char msg[400] = {'\0'};
        SNPRINTF(msg, 400, "In ColorAttributeList::RemoveColors : Index %d is out of range", index);
        PyErr_SetString(PyExc_IndexError, msg);
        return NULL;
    }

    return ColorAttributeList_Remove_One_Colors(self, index);
}

PyObject *
ColorAttributeList_ClearColors(PyObject *self, PyObject *args)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)self;
    int n = obj->data->GetNumColors();
    for(int i = 0; i < n; ++i)
    {
        ColorAttributeList_Remove_One_Colors(self, 0);
        Py_DECREF(Py_None);
    }
    Py_INCREF(Py_None);
    return Py_None;
}



PyMethodDef PyColorAttributeList_methods[COLORATTRIBUTELIST_NMETH] = {
    {"Notify", ColorAttributeList_Notify, METH_VARARGS},
    {"GetColors", ColorAttributeList_GetColors, METH_VARARGS},
    {"GetNumColors", ColorAttributeList_GetNumColors, METH_VARARGS},
    {"AddColors", ColorAttributeList_AddColors, METH_VARARGS},
    {"RemoveColors", ColorAttributeList_RemoveColors, METH_VARARGS},
    {"ClearColors", ColorAttributeList_ClearColors, METH_VARARGS},
    {NULL, NULL}
};

//
// Type functions
//

static void
ColorAttributeList_dealloc(PyObject *v)
{
   ColorAttributeListObject *obj = (ColorAttributeListObject *)v;
   if(obj->parent != 0)
       Py_DECREF(obj->parent);
   if(obj->owns)
       delete obj->data;
}

static int
ColorAttributeList_compare(PyObject *v, PyObject *w)
{
    ColorAttributeList *a = ((ColorAttributeListObject *)v)->data;
    ColorAttributeList *b = ((ColorAttributeListObject *)w)->data;
    return (*a == *b) ? 0 : -1;
}

PyObject *
PyColorAttributeList_getattr(PyObject *self, char *name)
{
    if(strcmp(name, "colors") == 0)
        return ColorAttributeList_GetColors(self, NULL);

    return Py_FindMethod(PyColorAttributeList_methods, self, name);
}

int
PyColorAttributeList_setattr(PyObject *self, char *name, PyObject *args)
{
    // Create a tuple to contain the arguments since all of the Set
    // functions expect a tuple.
    PyObject *tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(tuple, 0, args);
    Py_INCREF(args);
    PyObject *obj = NULL;


    if(obj != NULL)
        Py_DECREF(obj);

    Py_DECREF(tuple);
    if( obj == NULL)
        PyErr_Format(PyExc_RuntimeError, "Unable to set unknown attribute: '%s'", name);
    return (obj != NULL) ? 0 : -1;
}

static int
ColorAttributeList_print(PyObject *v, FILE *fp, int flags)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)v;
    fprintf(fp, "%s", PyColorAttributeList_ToString(obj->data, "").c_str());
    return 0;
}

PyObject *
ColorAttributeList_str(PyObject *v)
{
    ColorAttributeListObject *obj = (ColorAttributeListObject *)v;
    return PyString_FromString(PyColorAttributeList_ToString(obj->data,"").c_str());
}

//
// The doc string for the class.
//
#if PY_MAJOR_VERSION > 2 || (PY_MAJOR_VERSION == 2 && PY_MINOR_VERSION >= 5)
static const char *ColorAttributeList_Purpose = "This class contains a list of ColorAttributes.";
#else
static char *ColorAttributeList_Purpose = "This class contains a list of ColorAttributes.";
#endif

//
// The type description structure
//
static PyTypeObject ColorAttributeListType =
{
    //
    // Type header
    //
    PyObject_HEAD_INIT(&PyType_Type)
    0,                                   // ob_size
    "ColorAttributeList",                    // tp_name
    sizeof(ColorAttributeListObject),        // tp_basicsize
    0,                                   // tp_itemsize
    //
    // Standard methods
    //
    (destructor)ColorAttributeList_dealloc,  // tp_dealloc
    (printfunc)ColorAttributeList_print,     // tp_print
    (getattrfunc)PyColorAttributeList_getattr, // tp_getattr
    (setattrfunc)PyColorAttributeList_setattr, // tp_setattr
    (cmpfunc)ColorAttributeList_compare,     // tp_compare
    (reprfunc)0,                         // tp_repr
    //
    // Type categories
    //
    0,                                   // tp_as_number
    0,                                   // tp_as_sequence
    0,                                   // tp_as_mapping
    //
    // More methods
    //
    0,                                   // tp_hash
    0,                                   // tp_call
    (reprfunc)ColorAttributeList_str,        // tp_str
    0,                                   // tp_getattro
    0,                                   // tp_setattro
    0,                                   // tp_as_buffer
    Py_TPFLAGS_CHECKTYPES,               // tp_flags
    ColorAttributeList_Purpose,              // tp_doc
    0,                                   // tp_traverse
    0,                                   // tp_clear
    0,                                   // tp_richcompare
    0                                    // tp_weaklistoffset
};

//
// Helper functions for object allocation.
//

static ColorAttributeList *defaultAtts = 0;
static ColorAttributeList *currentAtts = 0;

static PyObject *
NewColorAttributeList(int useCurrent)
{
    ColorAttributeListObject *newObject;
    newObject = PyObject_NEW(ColorAttributeListObject, &ColorAttributeListType);
    if(newObject == NULL)
        return NULL;
    if(useCurrent && currentAtts != 0)
        newObject->data = new ColorAttributeList(*currentAtts);
    else if(defaultAtts != 0)
        newObject->data = new ColorAttributeList(*defaultAtts);
    else
        newObject->data = new ColorAttributeList;
    newObject->owns = true;
    newObject->parent = 0;
    return (PyObject *)newObject;
}

static PyObject *
WrapColorAttributeList(const ColorAttributeList *attr)
{
    ColorAttributeListObject *newObject;
    newObject = PyObject_NEW(ColorAttributeListObject, &ColorAttributeListType);
    if(newObject == NULL)
        return NULL;
    newObject->data = (ColorAttributeList *)attr;
    newObject->owns = false;
    newObject->parent = 0;
    return (PyObject *)newObject;
}

///////////////////////////////////////////////////////////////////////////////
//
// Interface that is exposed to the VisIt module.
//
///////////////////////////////////////////////////////////////////////////////

PyObject *
ColorAttributeList_new(PyObject *self, PyObject *args)
{
    int useCurrent = 0;
    if (!PyArg_ParseTuple(args, "i", &useCurrent))
    {
        if (!PyArg_ParseTuple(args, ""))
            return NULL;
        else
            PyErr_Clear();
    }

    return (PyObject *)NewColorAttributeList(useCurrent);
}

//
// Plugin method table. These methods are added to the visitmodule's methods.
//
static PyMethodDef ColorAttributeListMethods[] = {
    {"ColorAttributeList", ColorAttributeList_new, METH_VARARGS},
    {NULL,      NULL}        /* Sentinel */
};

static Observer *ColorAttributeListObserver = 0;

std::string
PyColorAttributeList_GetLogString()
{
    std::string s("ColorAttributeList = ColorAttributeList()\n");
    if(currentAtts != 0)
        s += PyColorAttributeList_ToString(currentAtts, "ColorAttributeList.");
    return s;
}

static void
PyColorAttributeList_CallLogRoutine(Subject *subj, void *data)
{
    typedef void (*logCallback)(const std::string &);
    logCallback cb = (logCallback)data;

    if(cb != 0)
    {
        std::string s("ColorAttributeList = ColorAttributeList()\n");
        s += PyColorAttributeList_ToString(currentAtts, "ColorAttributeList.");
        cb(s);
    }
}

void
PyColorAttributeList_StartUp(ColorAttributeList *subj, void *data)
{
    if(subj == 0)
        return;

    currentAtts = subj;
    PyColorAttributeList_SetDefaults(subj);

    //
    // Create the observer that will be notified when the attributes change.
    //
    if(ColorAttributeListObserver == 0)
    {
        ColorAttributeListObserver = new ObserverToCallback(subj,
            PyColorAttributeList_CallLogRoutine, (void *)data);
    }

}

void
PyColorAttributeList_CloseDown()
{
    delete defaultAtts;
    defaultAtts = 0;
    delete ColorAttributeListObserver;
    ColorAttributeListObserver = 0;
}

PyMethodDef *
PyColorAttributeList_GetMethodTable(int *nMethods)
{
    *nMethods = 1;
    return ColorAttributeListMethods;
}

bool
PyColorAttributeList_Check(PyObject *obj)
{
    return (obj->ob_type == &ColorAttributeListType);
}

ColorAttributeList *
PyColorAttributeList_FromPyObject(PyObject *obj)
{
    ColorAttributeListObject *obj2 = (ColorAttributeListObject *)obj;
    return obj2->data;
}

PyObject *
PyColorAttributeList_New()
{
    return NewColorAttributeList(0);
}

PyObject *
PyColorAttributeList_Wrap(const ColorAttributeList *attr)
{
    return WrapColorAttributeList(attr);
}

void
PyColorAttributeList_SetParent(PyObject *obj, PyObject *parent)
{
    ColorAttributeListObject *obj2 = (ColorAttributeListObject *)obj;
    obj2->parent = parent;
}

void
PyColorAttributeList_SetDefaults(const ColorAttributeList *atts)
{
    if(defaultAtts)
        delete defaultAtts;

    defaultAtts = new ColorAttributeList(*atts);
}

