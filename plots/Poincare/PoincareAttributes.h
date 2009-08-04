/*****************************************************************************
*
* Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-400124
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

#ifndef POINCAREATTRIBUTES_H
#define POINCAREATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>
#include <ColorAttribute.h>

// ****************************************************************************
// Class: PoincareAttributes
//
// Purpose:
//    Attributes for the Poincare plot
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class PoincareAttributes : public AttributeSubject
{
public:
    enum SourceType
    {
        SpecifiedPoint,
        SpecifiedLine,
        SpecifiedPlane
    };
    enum TerminationType
    {
        Distance,
        Time,
        Step
    };
    enum ColorBy
    {
        OriginalValue,
        InputOrder,
        PointIndex,
        Plane,
        ToroidalWindingOrder,
        ToroidalWindingPointOrder,
        ToroidalWindings,
        PoloidalWindings,
        SafetyFactor
    };
    enum ShowMeshType
    {
        Curves,
        Surfaces
    };
    enum OverlapType
    {
        Raw,
        Remove,
        Merge,
        Smooth
    };
    enum IntegrationType
    {
        DormandPrince,
        AdamsBashforth
    };
    enum ColoringMethod
    {
        ColorBySingleColor,
        ColorByColorTable
    };

    PoincareAttributes();
    PoincareAttributes(const PoincareAttributes &obj);
    virtual ~PoincareAttributes();

    virtual PoincareAttributes& operator = (const PoincareAttributes &obj);
    virtual bool operator == (const PoincareAttributes &obj) const;
    virtual bool operator != (const PoincareAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectPointSource();
    void SelectLineStart();
    void SelectLineEnd();
    void SelectPlaneOrigin();
    void SelectPlaneNormal();
    void SelectPlaneUpAxis();
    void SelectColorTableName();
    void SelectSingleColor();

    // Property setting methods
    void SetSourceType(SourceType sourceType_);
    void SetMaxStepLength(double maxStepLength_);
    void SetTermination(double termination_);
    void SetPointSource(const double *pointSource_);
    void SetLineStart(const double *lineStart_);
    void SetLineEnd(const double *lineEnd_);
    void SetPlaneOrigin(const double *planeOrigin_);
    void SetPlaneNormal(const double *planeNormal_);
    void SetPlaneUpAxis(const double *planeUpAxis_);
    void SetPlaneRadius(double planeRadius_);
    void SetPointDensity(int pointDensity_);
    void SetColorTableName(const std::string &colorTableName_);
    void SetSingleColor(const ColorAttribute &singleColor_);
    void SetLegendFlag(bool legendFlag_);
    void SetLightingFlag(bool lightingFlag_);
    void SetRelTol(double relTol_);
    void SetAbsTol(double absTol_);
    void SetTerminationType(TerminationType terminationType_);
    void SetIntegrationType(IntegrationType integrationType_);
    void SetShowStreamlines(bool showStreamlines_);
    void SetShowPoints(bool showPoints_);
    void SetNumberPlanes(int numberPlanes_);
    void SetColorBy(ColorBy colorBy_);
    void SetMaxToroidalWinding(int maxToroidalWinding_);
    void SetOverrideToroidalWinding(int overrideToroidalWinding_);
    void SetHitRate(double hitRate_);
    void SetShowCurves(ShowMeshType showCurves_);
    void SetAdjustPlane(int adjustPlane_);
    void SetShowIslands(bool showIslands_);
    void SetOverlaps(OverlapType overlaps_);
    void SetMin(double min_);
    void SetMax(double max_);
    void SetMinFlag(bool minFlag_);
    void SetMaxFlag(bool maxFlag_);
    void SetColorType(ColoringMethod colorType_);

    // Property getting methods
    SourceType           GetSourceType() const;
    double               GetMaxStepLength() const;
    double               GetTermination() const;
    const double         *GetPointSource() const;
          double         *GetPointSource();
    const double         *GetLineStart() const;
          double         *GetLineStart();
    const double         *GetLineEnd() const;
          double         *GetLineEnd();
    const double         *GetPlaneOrigin() const;
          double         *GetPlaneOrigin();
    const double         *GetPlaneNormal() const;
          double         *GetPlaneNormal();
    const double         *GetPlaneUpAxis() const;
          double         *GetPlaneUpAxis();
    double               GetPlaneRadius() const;
    int                  GetPointDensity() const;
    const std::string    &GetColorTableName() const;
          std::string    &GetColorTableName();
    const ColorAttribute &GetSingleColor() const;
          ColorAttribute &GetSingleColor();
    bool                 GetLegendFlag() const;
    bool                 GetLightingFlag() const;
    double               GetRelTol() const;
    double               GetAbsTol() const;
    TerminationType      GetTerminationType() const;
    IntegrationType      GetIntegrationType() const;
    bool                 GetShowStreamlines() const;
    bool                 GetShowPoints() const;
    int                  GetNumberPlanes() const;
    ColorBy              GetColorBy() const;
    int                  GetMaxToroidalWinding() const;
    int                  GetOverrideToroidalWinding() const;
    double               GetHitRate() const;
    ShowMeshType         GetShowCurves() const;
    int                  GetAdjustPlane() const;
    bool                 GetShowIslands() const;
    OverlapType          GetOverlaps() const;
    double               GetMin() const;
    double               GetMax() const;
    bool                 GetMinFlag() const;
    bool                 GetMaxFlag() const;
    ColoringMethod       GetColorType() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string SourceType_ToString(SourceType);
    static bool SourceType_FromString(const std::string &, SourceType &);
protected:
    static std::string SourceType_ToString(int);
public:
    static std::string TerminationType_ToString(TerminationType);
    static bool TerminationType_FromString(const std::string &, TerminationType &);
protected:
    static std::string TerminationType_ToString(int);
public:
    static std::string ColorBy_ToString(ColorBy);
    static bool ColorBy_FromString(const std::string &, ColorBy &);
protected:
    static std::string ColorBy_ToString(int);
public:
    static std::string ShowMeshType_ToString(ShowMeshType);
    static bool ShowMeshType_FromString(const std::string &, ShowMeshType &);
protected:
    static std::string ShowMeshType_ToString(int);
public:
    static std::string OverlapType_ToString(OverlapType);
    static bool OverlapType_FromString(const std::string &, OverlapType &);
protected:
    static std::string OverlapType_ToString(int);
public:
    static std::string IntegrationType_ToString(IntegrationType);
    static bool IntegrationType_FromString(const std::string &, IntegrationType &);
protected:
    static std::string IntegrationType_ToString(int);
public:
    static std::string ColoringMethod_ToString(ColoringMethod);
    static bool ColoringMethod_FromString(const std::string &, ColoringMethod &);
protected:
    static std::string ColoringMethod_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    bool ChangesRequireRecalculation(const PoincareAttributes &obj) const;
    bool StreamlineAttsRequireRecalculation(const PoincareAttributes &obj) const;
    bool PoincareAttsRequireRecalculation(const PoincareAttributes &obj) const;

    // IDs that can be used to identify fields in case statements
    enum {
        ID_sourceType = 0,
        ID_maxStepLength,
        ID_termination,
        ID_pointSource,
        ID_lineStart,
        ID_lineEnd,
        ID_planeOrigin,
        ID_planeNormal,
        ID_planeUpAxis,
        ID_planeRadius,
        ID_pointDensity,
        ID_colorTableName,
        ID_singleColor,
        ID_legendFlag,
        ID_lightingFlag,
        ID_relTol,
        ID_absTol,
        ID_terminationType,
        ID_integrationType,
        ID_showStreamlines,
        ID_showPoints,
        ID_numberPlanes,
        ID_colorBy,
        ID_maxToroidalWinding,
        ID_overrideToroidalWinding,
        ID_hitRate,
        ID_showCurves,
        ID_adjustPlane,
        ID_showIslands,
        ID_overlaps,
        ID_min,
        ID_max,
        ID_minFlag,
        ID_maxFlag,
        ID_colorType
    };

private:
    int            sourceType;
    double         maxStepLength;
    double         termination;
    double         pointSource[3];
    double         lineStart[3];
    double         lineEnd[3];
    double         planeOrigin[3];
    double         planeNormal[3];
    double         planeUpAxis[3];
    double         planeRadius;
    int            pointDensity;
    std::string    colorTableName;
    ColorAttribute singleColor;
    bool           legendFlag;
    bool           lightingFlag;
    double         relTol;
    double         absTol;
    int            terminationType;
    int            integrationType;
    bool           showStreamlines;
    bool           showPoints;
    int            numberPlanes;
    int            colorBy;
    int            maxToroidalWinding;
    int            overrideToroidalWinding;
    double         hitRate;
    int            showCurves;
    int            adjustPlane;
    bool           showIslands;
    int            overlaps;
    double         min;
    double         max;
    bool           minFlag;
    bool           maxFlag;
    int            colorType;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
};

#endif
