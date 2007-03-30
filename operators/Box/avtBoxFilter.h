// ************************************************************************* //
//  File: avtBoxFilter.h
// ************************************************************************* //

#ifndef AVT_Box_FILTER_H
#define AVT_Box_FILTER_H

#include <avtPluginStreamer.h>
#include <BoxAttributes.h>

class     vtkDataSet;


// ****************************************************************************
//  Class: avtBoxFilter
//
//  Purpose:
//      A plugin operator for Box.
//
//  Programmer: childs -- generated by xml2info
//  Creation:   Mon Nov 12 16:57:31 PST 2001
//
// ****************************************************************************

class avtBoxFilter : public avtPluginStreamer
{
  public:
                         avtBoxFilter();
    virtual             ~avtBoxFilter();

    static avtFilter    *Create();

    virtual const char  *GetType(void)  { return "avtBoxFilter"; };
    virtual const char  *GetDescription(void)
                             { return "Finding cells within a box"; };

    virtual void         SetAtts(const AttributeGroup*);
    virtual bool         Equivalent(const AttributeGroup*);

  protected:
    BoxAttributes   atts;

    virtual vtkDataSet   *ExecuteData(vtkDataSet *, int, std::string);
    virtual void          RefashionDataObjectInfo(void);
};


#endif
