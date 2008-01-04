/*****************************************************************************
*
* Copyright (c) 2000 - 2008, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-400142
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

#ifndef PLOT_H
#define PLOT_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>

// ****************************************************************************
// Class: Plot
//
// Purpose:
//    This class is a plot element in a plot list.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 20 09:40:40 PDT 2007
//
// Modifications:
//   
// ****************************************************************************

class STATE_API Plot : public AttributeSubject
{
public:
    enum StateType
    {
        NewlyCreated,
        Pending,
        Completed,
        Error
    };

    Plot();
    Plot(const Plot &obj);
    virtual ~Plot();

    virtual Plot& operator = (const Plot &obj);
    virtual bool operator == (const Plot &obj) const;
    virtual bool operator != (const Plot &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectPlotName();
    void SelectPlotVar();
    void SelectDatabaseName();
    void SelectOperators();
    void SelectKeyframes();
    void SelectDatabaseKeyframes();

    // Property setting methods
    void SetStateType(StateType stateType_);
    void SetPlotType(int plotType_);
    void SetPlotName(const std::string &plotName_);
    void SetActiveFlag(bool activeFlag_);
    void SetHiddenFlag(bool hiddenFlag_);
    void SetExpandedFlag(bool expandedFlag_);
    void SetPlotVar(const std::string &plotVar_);
    void SetDatabaseName(const std::string &databaseName_);
    void SetOperators(const intVector &operators_);
    void SetActiveOperator(int activeOperator_);
    void SetId(int id_);
    void SetBeginFrame(int beginFrame_);
    void SetEndFrame(int endFrame_);
    void SetKeyframes(const intVector &keyframes_);
    void SetDatabaseKeyframes(const intVector &databaseKeyframes_);
    void SetIsFromSimulation(bool isFromSimulation_);

    // Property getting methods
    StateType         GetStateType() const;
    int               GetPlotType() const;
    const std::string &GetPlotName() const;
          std::string &GetPlotName();
    bool              GetActiveFlag() const;
    bool              GetHiddenFlag() const;
    bool              GetExpandedFlag() const;
    const std::string &GetPlotVar() const;
          std::string &GetPlotVar();
    const std::string &GetDatabaseName() const;
          std::string &GetDatabaseName();
    const intVector   &GetOperators() const;
          intVector   &GetOperators();
    int               GetActiveOperator() const;
    int               GetId() const;
    int               GetBeginFrame() const;
    int               GetEndFrame() const;
    const intVector   &GetKeyframes() const;
          intVector   &GetKeyframes();
    const intVector   &GetDatabaseKeyframes() const;
          intVector   &GetDatabaseKeyframes();
    bool              GetIsFromSimulation() const;

    // Enum conversion functions
    static std::string StateType_ToString(StateType);
    static bool StateType_FromString(const std::string &, StateType &);
protected:
    static std::string StateType_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    void AddOperator(int op);
    void ClearAllOperators();
    int  GetNumOperators() const;
    int  GetOperator(int i) const;
    void RemoveLastOperator();

    // IDs that can be used to identify fields in case statements
    enum {
        ID_stateType = 0,
        ID_plotType,
        ID_plotName,
        ID_activeFlag,
        ID_hiddenFlag,
        ID_expandedFlag,
        ID_plotVar,
        ID_databaseName,
        ID_operators,
        ID_activeOperator,
        ID_id,
        ID_beginFrame,
        ID_endFrame,
        ID_keyframes,
        ID_databaseKeyframes,
        ID_isFromSimulation
    };

private:
    int         stateType;
    int         plotType;
    std::string plotName;
    bool        activeFlag;
    bool        hiddenFlag;
    bool        expandedFlag;
    std::string plotVar;
    std::string databaseName;
    intVector   operators;
    int         activeOperator;
    int         id;
    int         beginFrame;
    int         endFrame;
    intVector   keyframes;
    intVector   databaseKeyframes;
    bool        isFromSimulation;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
};

#endif
