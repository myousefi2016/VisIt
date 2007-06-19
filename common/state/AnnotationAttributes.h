/*****************************************************************************
*
* Copyright (c) 2000 - 2007, The Regents of the University of California
* Produced at the Lawrence Livermore National Laboratory
* All rights reserved.
*
* This file is part of VisIt. For details, see http://www.llnl.gov/visit/. The
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
*    documentation and/or materials provided with the distribution.
*  - Neither the name of the UC/LLNL nor  the names of its contributors may be
*    used to  endorse or  promote products derived from  this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED.  IN  NO  EVENT  SHALL  THE  REGENTS  OF  THE  UNIVERSITY OF
* CALIFORNIA, THE U.S.  DEPARTMENT  OF  ENERGY OR CONTRIBUTORS BE  LIABLE  FOR
* ANY  DIRECT,  INDIRECT,  INCIDENTAL,  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#ifndef ANNOTATIONATTRIBUTES_H
#define ANNOTATIONATTRIBUTES_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>
#include <ColorAttribute.h>

// ****************************************************************************
// Class: AnnotationAttributes
//
// Purpose:
//    This class contains the attributes controlling annotations.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Mon Jun 18 08:50:26 PDT 2007
//
// Modifications:
//   
// ****************************************************************************

class STATE_API AnnotationAttributes : public AttributeSubject
{
public:
    enum Ticks
    {
        Off,
        Bottom,
        Left,
        BottomLeft,
        All
    };
    enum Location
    {
        Inside,
        Outside,
        Both
    };
    enum Axes
    {
        ClosestTriad,
        FurthestTriad,
        OutsideEdges,
        StaticTriad,
        StaticEdges
    };
    enum GradientStyle
    {
        TopToBottom,
        BottomToTop,
        LeftToRight,
        RightToLeft,
        Radial
    };
    enum BackgroundMode
    {
        Solid,
        Gradient
    };
    enum PathExpansionMode
    {
        None,
        Smart,
        Full
    };

    AnnotationAttributes();
    AnnotationAttributes(const AnnotationAttributes &obj);
    virtual ~AnnotationAttributes();

    virtual AnnotationAttributes& operator = (const AnnotationAttributes &obj);
    virtual bool operator == (const AnnotationAttributes &obj) const;
    virtual bool operator != (const AnnotationAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectXAxisUserTitle2D();
    void SelectYAxisUserTitle2D();
    void SelectXAxisUserUnits2D();
    void SelectYAxisUserUnits2D();
    void SelectXAxisUserTitle();
    void SelectYAxisUserTitle();
    void SelectZAxisUserTitle();
    void SelectXAxisUserUnits();
    void SelectYAxisUserUnits();
    void SelectZAxisUserUnits();
    void SelectBackgroundColor();
    void SelectForegroundColor();
    void SelectGradientColor1();
    void SelectGradientColor2();

    // Property setting methods
    void SetAxesFlag2D(bool axesFlag2D_);
    void SetAxesAutoSetTicks2D(bool axesAutoSetTicks2D_);
    void SetLabelAutoSetScaling2D(bool labelAutoSetScaling2D_);
    void SetXAxisLabels2D(bool xAxisLabels2D_);
    void SetYAxisLabels2D(bool yAxisLabels2D_);
    void SetXAxisTitle2D(bool xAxisTitle2D_);
    void SetYAxisTitle2D(bool yAxisTitle2D_);
    void SetXGridLines2D(bool xGridLines2D_);
    void SetYGridLines2D(bool yGridLines2D_);
    void SetXMajorTickMinimum2D(double xMajorTickMinimum2D_);
    void SetYMajorTickMinimum2D(double yMajorTickMinimum2D_);
    void SetXMajorTickMaximum2D(double xMajorTickMaximum2D_);
    void SetYMajorTickMaximum2D(double yMajorTickMaximum2D_);
    void SetXMajorTickSpacing2D(double xMajorTickSpacing2D_);
    void SetYMajorTickSpacing2D(double yMajorTickSpacing2D_);
    void SetXMinorTickSpacing2D(double xMinorTickSpacing2D_);
    void SetYMinorTickSpacing2D(double yMinorTickSpacing2D_);
    void SetXLabelFontHeight2D(double xLabelFontHeight2D_);
    void SetYLabelFontHeight2D(double yLabelFontHeight2D_);
    void SetXTitleFontHeight2D(double xTitleFontHeight2D_);
    void SetYTitleFontHeight2D(double yTitleFontHeight2D_);
    void SetXLabelScaling2D(int xLabelScaling2D_);
    void SetYLabelScaling2D(int yLabelScaling2D_);
    void SetAxesLineWidth2D(int axesLineWidth2D_);
    void SetAxesTickLocation2D(Location axesTickLocation2D_);
    void SetAxesTicks2D(Ticks axesTicks2D_);
    void SetXAxisUserTitle2D(const std::string &xAxisUserTitle2D_);
    void SetYAxisUserTitle2D(const std::string &yAxisUserTitle2D_);
    void SetXAxisUserTitleFlag2D(bool xAxisUserTitleFlag2D_);
    void SetYAxisUserTitleFlag2D(bool yAxisUserTitleFlag2D_);
    void SetXAxisUserUnits2D(const std::string &xAxisUserUnits2D_);
    void SetYAxisUserUnits2D(const std::string &yAxisUserUnits2D_);
    void SetXAxisUserUnitsFlag2D(bool xAxisUserUnitsFlag2D_);
    void SetYAxisUserUnitsFlag2D(bool yAxisUserUnitsFlag2D_);
    void SetAxesFlag(bool axesFlag_);
    void SetAxesAutoSetTicks(bool axesAutoSetTicks_);
    void SetLabelAutoSetScaling(bool labelAutoSetScaling_);
    void SetXAxisLabels(bool xAxisLabels_);
    void SetYAxisLabels(bool yAxisLabels_);
    void SetZAxisLabels(bool zAxisLabels_);
    void SetXAxisTitle(bool xAxisTitle_);
    void SetYAxisTitle(bool yAxisTitle_);
    void SetZAxisTitle(bool zAxisTitle_);
    void SetXGridLines(bool xGridLines_);
    void SetYGridLines(bool yGridLines_);
    void SetZGridLines(bool zGridLines_);
    void SetXAxisTicks(bool xAxisTicks_);
    void SetYAxisTicks(bool yAxisTicks_);
    void SetZAxisTicks(bool zAxisTicks_);
    void SetXMajorTickMinimum(double xMajorTickMinimum_);
    void SetYMajorTickMinimum(double yMajorTickMinimum_);
    void SetZMajorTickMinimum(double zMajorTickMinimum_);
    void SetXMajorTickMaximum(double xMajorTickMaximum_);
    void SetYMajorTickMaximum(double yMajorTickMaximum_);
    void SetZMajorTickMaximum(double zMajorTickMaximum_);
    void SetXMajorTickSpacing(double xMajorTickSpacing_);
    void SetYMajorTickSpacing(double yMajorTickSpacing_);
    void SetZMajorTickSpacing(double zMajorTickSpacing_);
    void SetXMinorTickSpacing(double xMinorTickSpacing_);
    void SetYMinorTickSpacing(double yMinorTickSpacing_);
    void SetZMinorTickSpacing(double zMinorTickSpacing_);
    void SetXLabelFontHeight(double xLabelFontHeight_);
    void SetYLabelFontHeight(double yLabelFontHeight_);
    void SetZLabelFontHeight(double zLabelFontHeight_);
    void SetXTitleFontHeight(double xTitleFontHeight_);
    void SetYTitleFontHeight(double yTitleFontHeight_);
    void SetZTitleFontHeight(double zTitleFontHeight_);
    void SetXLabelScaling(int xLabelScaling_);
    void SetYLabelScaling(int yLabelScaling_);
    void SetZLabelScaling(int zLabelScaling_);
    void SetXAxisUserTitle(const std::string &xAxisUserTitle_);
    void SetYAxisUserTitle(const std::string &yAxisUserTitle_);
    void SetZAxisUserTitle(const std::string &zAxisUserTitle_);
    void SetXAxisUserTitleFlag(bool xAxisUserTitleFlag_);
    void SetYAxisUserTitleFlag(bool yAxisUserTitleFlag_);
    void SetZAxisUserTitleFlag(bool zAxisUserTitleFlag_);
    void SetXAxisUserUnits(const std::string &xAxisUserUnits_);
    void SetYAxisUserUnits(const std::string &yAxisUserUnits_);
    void SetZAxisUserUnits(const std::string &zAxisUserUnits_);
    void SetXAxisUserUnitsFlag(bool xAxisUserUnitsFlag_);
    void SetYAxisUserUnitsFlag(bool yAxisUserUnitsFlag_);
    void SetZAxisUserUnitsFlag(bool zAxisUserUnitsFlag_);
    void SetAxesTickLocation(Location axesTickLocation_);
    void SetAxesType(Axes axesType_);
    void SetTriadFlag(bool triadFlag_);
    void SetBboxFlag(bool bboxFlag_);
    void SetBackgroundColor(const ColorAttribute &backgroundColor_);
    void SetForegroundColor(const ColorAttribute &foregroundColor_);
    void SetGradientBackgroundStyle(GradientStyle gradientBackgroundStyle_);
    void SetGradientColor1(const ColorAttribute &gradientColor1_);
    void SetGradientColor2(const ColorAttribute &gradientColor2_);
    void SetBackgroundMode(BackgroundMode backgroundMode_);
    void SetUserInfoFlag(bool userInfoFlag_);
    void SetDatabaseInfoFlag(bool databaseInfoFlag_);
    void SetDatabaseInfoExpansionMode(PathExpansionMode databaseInfoExpansionMode_);
    void SetLegendInfoFlag(bool legendInfoFlag_);

    // Property getting methods
    bool                 GetAxesFlag2D() const;
    bool                 GetAxesAutoSetTicks2D() const;
    bool                 GetLabelAutoSetScaling2D() const;
    bool                 GetXAxisLabels2D() const;
    bool                 GetYAxisLabels2D() const;
    bool                 GetXAxisTitle2D() const;
    bool                 GetYAxisTitle2D() const;
    bool                 GetXGridLines2D() const;
    bool                 GetYGridLines2D() const;
    double               GetXMajorTickMinimum2D() const;
    double               GetYMajorTickMinimum2D() const;
    double               GetXMajorTickMaximum2D() const;
    double               GetYMajorTickMaximum2D() const;
    double               GetXMajorTickSpacing2D() const;
    double               GetYMajorTickSpacing2D() const;
    double               GetXMinorTickSpacing2D() const;
    double               GetYMinorTickSpacing2D() const;
    double               GetXLabelFontHeight2D() const;
    double               GetYLabelFontHeight2D() const;
    double               GetXTitleFontHeight2D() const;
    double               GetYTitleFontHeight2D() const;
    int                  GetXLabelScaling2D() const;
    int                  GetYLabelScaling2D() const;
    int                  GetAxesLineWidth2D() const;
    Location             GetAxesTickLocation2D() const;
    Ticks                GetAxesTicks2D() const;
    const std::string    &GetXAxisUserTitle2D() const;
          std::string    &GetXAxisUserTitle2D();
    const std::string    &GetYAxisUserTitle2D() const;
          std::string    &GetYAxisUserTitle2D();
    bool                 GetXAxisUserTitleFlag2D() const;
    bool                 GetYAxisUserTitleFlag2D() const;
    const std::string    &GetXAxisUserUnits2D() const;
          std::string    &GetXAxisUserUnits2D();
    const std::string    &GetYAxisUserUnits2D() const;
          std::string    &GetYAxisUserUnits2D();
    bool                 GetXAxisUserUnitsFlag2D() const;
    bool                 GetYAxisUserUnitsFlag2D() const;
    bool                 GetAxesFlag() const;
    bool                 GetAxesAutoSetTicks() const;
    bool                 GetLabelAutoSetScaling() const;
    bool                 GetXAxisLabels() const;
    bool                 GetYAxisLabels() const;
    bool                 GetZAxisLabels() const;
    bool                 GetXAxisTitle() const;
    bool                 GetYAxisTitle() const;
    bool                 GetZAxisTitle() const;
    bool                 GetXGridLines() const;
    bool                 GetYGridLines() const;
    bool                 GetZGridLines() const;
    bool                 GetXAxisTicks() const;
    bool                 GetYAxisTicks() const;
    bool                 GetZAxisTicks() const;
    double               GetXMajorTickMinimum() const;
    double               GetYMajorTickMinimum() const;
    double               GetZMajorTickMinimum() const;
    double               GetXMajorTickMaximum() const;
    double               GetYMajorTickMaximum() const;
    double               GetZMajorTickMaximum() const;
    double               GetXMajorTickSpacing() const;
    double               GetYMajorTickSpacing() const;
    double               GetZMajorTickSpacing() const;
    double               GetXMinorTickSpacing() const;
    double               GetYMinorTickSpacing() const;
    double               GetZMinorTickSpacing() const;
    double               GetXLabelFontHeight() const;
    double               GetYLabelFontHeight() const;
    double               GetZLabelFontHeight() const;
    double               GetXTitleFontHeight() const;
    double               GetYTitleFontHeight() const;
    double               GetZTitleFontHeight() const;
    int                  GetXLabelScaling() const;
    int                  GetYLabelScaling() const;
    int                  GetZLabelScaling() const;
    const std::string    &GetXAxisUserTitle() const;
          std::string    &GetXAxisUserTitle();
    const std::string    &GetYAxisUserTitle() const;
          std::string    &GetYAxisUserTitle();
    const std::string    &GetZAxisUserTitle() const;
          std::string    &GetZAxisUserTitle();
    bool                 GetXAxisUserTitleFlag() const;
    bool                 GetYAxisUserTitleFlag() const;
    bool                 GetZAxisUserTitleFlag() const;
    const std::string    &GetXAxisUserUnits() const;
          std::string    &GetXAxisUserUnits();
    const std::string    &GetYAxisUserUnits() const;
          std::string    &GetYAxisUserUnits();
    const std::string    &GetZAxisUserUnits() const;
          std::string    &GetZAxisUserUnits();
    bool                 GetXAxisUserUnitsFlag() const;
    bool                 GetYAxisUserUnitsFlag() const;
    bool                 GetZAxisUserUnitsFlag() const;
    Location             GetAxesTickLocation() const;
    Axes                 GetAxesType() const;
    bool                 GetTriadFlag() const;
    bool                 GetBboxFlag() const;
    const ColorAttribute &GetBackgroundColor() const;
          ColorAttribute &GetBackgroundColor();
    const ColorAttribute &GetForegroundColor() const;
          ColorAttribute &GetForegroundColor();
    GradientStyle        GetGradientBackgroundStyle() const;
    const ColorAttribute &GetGradientColor1() const;
          ColorAttribute &GetGradientColor1();
    const ColorAttribute &GetGradientColor2() const;
          ColorAttribute &GetGradientColor2();
    BackgroundMode       GetBackgroundMode() const;
    bool                 GetUserInfoFlag() const;
    bool                 GetDatabaseInfoFlag() const;
    PathExpansionMode    GetDatabaseInfoExpansionMode() const;
    bool                 GetLegendInfoFlag() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string Ticks_ToString(Ticks);
    static bool Ticks_FromString(const std::string &, Ticks &);
protected:
    static std::string Ticks_ToString(int);
public:
    static std::string Location_ToString(Location);
    static bool Location_FromString(const std::string &, Location &);
protected:
    static std::string Location_ToString(int);
public:
    static std::string Axes_ToString(Axes);
    static bool Axes_FromString(const std::string &, Axes &);
protected:
    static std::string Axes_ToString(int);
public:
    static std::string GradientStyle_ToString(GradientStyle);
    static bool GradientStyle_FromString(const std::string &, GradientStyle &);
protected:
    static std::string GradientStyle_ToString(int);
public:
    static std::string BackgroundMode_ToString(BackgroundMode);
    static bool BackgroundMode_FromString(const std::string &, BackgroundMode &);
protected:
    static std::string BackgroundMode_ToString(int);
public:
    static std::string PathExpansionMode_ToString(PathExpansionMode);
    static bool PathExpansionMode_FromString(const std::string &, PathExpansionMode &);
protected:
    static std::string PathExpansionMode_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    const ColorAttribute GetDiscernibleBackgroundColor() const;
private:
    bool           axesFlag2D;
    bool           axesAutoSetTicks2D;
    bool           labelAutoSetScaling2D;
    bool           xAxisLabels2D;
    bool           yAxisLabels2D;
    bool           xAxisTitle2D;
    bool           yAxisTitle2D;
    bool           xGridLines2D;
    bool           yGridLines2D;
    double         xMajorTickMinimum2D;
    double         yMajorTickMinimum2D;
    double         xMajorTickMaximum2D;
    double         yMajorTickMaximum2D;
    double         xMajorTickSpacing2D;
    double         yMajorTickSpacing2D;
    double         xMinorTickSpacing2D;
    double         yMinorTickSpacing2D;
    double         xLabelFontHeight2D;
    double         yLabelFontHeight2D;
    double         xTitleFontHeight2D;
    double         yTitleFontHeight2D;
    int            xLabelScaling2D;
    int            yLabelScaling2D;
    int            axesLineWidth2D;
    int            axesTickLocation2D;
    int            axesTicks2D;
    std::string    xAxisUserTitle2D;
    std::string    yAxisUserTitle2D;
    bool           xAxisUserTitleFlag2D;
    bool           yAxisUserTitleFlag2D;
    std::string    xAxisUserUnits2D;
    std::string    yAxisUserUnits2D;
    bool           xAxisUserUnitsFlag2D;
    bool           yAxisUserUnitsFlag2D;
    bool           axesFlag;
    bool           axesAutoSetTicks;
    bool           labelAutoSetScaling;
    bool           xAxisLabels;
    bool           yAxisLabels;
    bool           zAxisLabels;
    bool           xAxisTitle;
    bool           yAxisTitle;
    bool           zAxisTitle;
    bool           xGridLines;
    bool           yGridLines;
    bool           zGridLines;
    bool           xAxisTicks;
    bool           yAxisTicks;
    bool           zAxisTicks;
    double         xMajorTickMinimum;
    double         yMajorTickMinimum;
    double         zMajorTickMinimum;
    double         xMajorTickMaximum;
    double         yMajorTickMaximum;
    double         zMajorTickMaximum;
    double         xMajorTickSpacing;
    double         yMajorTickSpacing;
    double         zMajorTickSpacing;
    double         xMinorTickSpacing;
    double         yMinorTickSpacing;
    double         zMinorTickSpacing;
    double         xLabelFontHeight;
    double         yLabelFontHeight;
    double         zLabelFontHeight;
    double         xTitleFontHeight;
    double         yTitleFontHeight;
    double         zTitleFontHeight;
    int            xLabelScaling;
    int            yLabelScaling;
    int            zLabelScaling;
    std::string    xAxisUserTitle;
    std::string    yAxisUserTitle;
    std::string    zAxisUserTitle;
    bool           xAxisUserTitleFlag;
    bool           yAxisUserTitleFlag;
    bool           zAxisUserTitleFlag;
    std::string    xAxisUserUnits;
    std::string    yAxisUserUnits;
    std::string    zAxisUserUnits;
    bool           xAxisUserUnitsFlag;
    bool           yAxisUserUnitsFlag;
    bool           zAxisUserUnitsFlag;
    int            axesTickLocation;
    int            axesType;
    bool           triadFlag;
    bool           bboxFlag;
    ColorAttribute backgroundColor;
    ColorAttribute foregroundColor;
    int            gradientBackgroundStyle;
    ColorAttribute gradientColor1;
    ColorAttribute gradientColor2;
    int            backgroundMode;
    bool           userInfoFlag;
    bool           databaseInfoFlag;
    int            databaseInfoExpansionMode;
    bool           legendInfoFlag;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
};

#endif
