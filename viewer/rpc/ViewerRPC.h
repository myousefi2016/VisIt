#ifndef VIEWERRPC_H
#define VIEWERRPC_H
#include <viewerrpc_exports.h>
#include <string>
#include <AttributeSubject.h>

// ****************************************************************************
// Class: ViewerRPC
//
// Purpose:
//    This class contains the attributes for controlling the viewer.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Wed Dec 17 15:35:27 PST 2003
//
// Modifications:
//   
// ****************************************************************************

class VIEWER_RPC_API ViewerRPC : public AttributeSubject
{
public:
    enum ViewerRPCType
    {
        CloseRPC,
        AddWindowRPC,
        DeleteWindowRPC,
        SetWindowLayoutRPC,
        SetActiveWindowRPC,
        ClearWindowRPC,
        ClearAllWindowsRPC,
        OpenDatabaseRPC,
        ReOpenDatabaseRPC,
        ReplaceDatabaseRPC,
        OverlayDatabaseRPC,
        OpenComputeEngineRPC,
        CloseComputeEngineRPC,
        AnimationSetNFramesRPC,
        AnimationPlayRPC,
        AnimationReversePlayRPC,
        AnimationStopRPC,
        AnimationNextFrameRPC,
        AnimationPreviousFrameRPC,
        AnimationSetFrameRPC,
        AddPlotRPC,
        SetPlotFrameRangeRPC,
        DeletePlotKeyframeRPC,
        MovePlotKeyframeRPC,
        DeleteActivePlotsRPC,
        HideActivePlotsRPC,
        DrawPlotsRPC,
        DisableRedrawRPC,
        RedrawRPC,
        SetActivePlotsRPC,
        ChangeActivePlotsVarRPC,
        AddOperatorRPC,
        PromoteOperatorRPC,
        DemoteOperatorRPC,
        RemoveOperatorRPC,
        RemoveLastOperatorRPC,
        RemoveAllOperatorsRPC,
        SaveWindowRPC,
        SetDefaultPlotOptionsRPC,
        SetPlotOptionsRPC,
        SetDefaultOperatorOptionsRPC,
        SetOperatorOptionsRPC,
        WriteConfigFileRPC,
        ConnectToMetaDataServerRPC,
        IconifyAllWindowsRPC,
        DeIconifyAllWindowsRPC,
        ShowAllWindowsRPC,
        HideAllWindowsRPC,
        UpdateColorTableRPC,
        SetAnnotationAttributesRPC,
        SetDefaultAnnotationAttributesRPC,
        ResetAnnotationAttributesRPC,
        SetKeyframeAttributesRPC,
        SetPlotSILRestrictionRPC,
        SetViewCurveRPC,
        SetView2DRPC,
        SetView3DRPC,
        ResetPlotOptionsRPC,
        ResetOperatorOptionsRPC,
        SetAppearanceRPC,
        ProcessExpressionsRPC,
        SetLightListRPC,
        SetDefaultLightListRPC,
        ResetLightListRPC,
        SetAnimationAttributesRPC,
        SetWindowAreaRPC,
        PrintWindowRPC,
        ResetViewRPC,
        RecenterViewRPC,
        ToggleMaintainViewModeRPC,
        ToggleBoundingBoxModeRPC,
        ToggleCameraViewModeRPC,
        TogglePerspectiveViewRPC,
        ToggleSpinModeRPC,
        ToggleLockTimeRPC,
        ToggleLockToolsRPC,
        ToggleLockViewModeRPC,
        ToggleFullFrameRPC,
        UndoViewRPC,
        InvertBackgroundRPC,
        ClearPickPointsRPC,
        SetWindowModeRPC,
        EnableToolRPC,
        CopyViewToWindowRPC,
        CopyLightingToWindowRPC,
        CopyAnnotationsToWindowRPC,
        CopyPlotsToWindowRPC,
        ClearCacheRPC,
        SetViewExtentsTypeRPC,
        ClearRefLinesRPC,
        SetRenderingAttributesRPC,
        DatabaseQueryRPC,
        PointQueryRPC,
        LineQueryRPC,
        CloneWindowRPC,
        SetMaterialAttributesRPC,
        SetDefaultMaterialAttributesRPC,
        ResetMaterialAttributesRPC,
        SetPlotDatabaseStateRPC,
        DeletePlotDatabaseKeyframeRPC,
        MovePlotDatabaseKeyframeRPC,
        ClearViewKeyframesRPC,
        DeleteViewKeyframeRPC,
        MoveViewKeyframeRPC,
        SetViewKeyframeRPC,
        OpenMDServerRPC,
        EnableToolbarRPC,
        HideToolbarsRPC,
        HideToolbarsForAllWindowsRPC,
        ShowToolbarsRPC,
        ShowToolbarsForAllWindowsRPC,
        SaveViewRPC,
        SetGlobalLineoutAttributesRPC,
        SetPickAttributesRPC,
        ExportColorTableRPC,
        ExportEntireStateRPC,
        ImportEntireStateRPC,
        ResetPickAttributesRPC,
        AddAnnotationObjectRPC,
        HideActiveAnnotationObjectsRPC,
        DeleteActiveAnnotationObjectsRPC,
        RaiseActiveAnnotationObjectsRPC,
        LowerActiveAnnotationObjectsRPC,
        SetAnnotationObjectOptionsRPC,
        SetDefaultAnnotationObjectListRPC,
        ResetAnnotationObjectListRPC,
        ResetPickLetterRPC,
        SetDefaultPickAttributesRPC,
        MaxRPC
    };

    ViewerRPC();
    ViewerRPC(const ViewerRPC &obj);
    virtual ~ViewerRPC();

    virtual void operator = (const ViewerRPC &obj);
    virtual bool operator == (const ViewerRPC &obj) const;
    virtual bool operator != (const ViewerRPC &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectWindowArea();
    void SelectDatabase();
    void SelectProgramHost();
    void SelectProgramOptions();
    void SelectFrameRange();
    void SelectVariable();
    void SelectActivePlotIds();
    void SelectActiveOperatorIds();
    void SelectExpandedPlotIds();
    void SelectColorTableName();
    void SelectQueryName();
    void SelectQueryPoint1();
    void SelectQueryPoint2();
    void SelectQueryVariables();

    // Property setting methods
    void SetRPCType(ViewerRPCType RPCType_);
    void SetWindowLayout(int windowLayout_);
    void SetWindowId(int windowId_);
    void SetWindowMode(int windowMode_);
    void SetWindowArea(const std::string &windowArea_);
    void SetDatabase(const std::string &database_);
    void SetProgramHost(const std::string &programHost_);
    void SetProgramOptions(const stringVector &programOptions_);
    void SetNFrames(int nFrames_);
    void SetFrameNumber(int frameNumber_);
    void SetFrameRange(const int *frameRange_);
    void SetFrame(int frame_);
    void SetPlotType(int plotType_);
    void SetOperatorType(int operatorType_);
    void SetVariable(const std::string &variable_);
    void SetActivePlotIds(const intVector &activePlotIds_);
    void SetActiveOperatorIds(const intVector &activeOperatorIds_);
    void SetExpandedPlotIds(const intVector &expandedPlotIds_);
    void SetColorTableName(const std::string &colorTableName_);
    void SetQueryName(const std::string &queryName_);
    void SetQueryPoint1(const double *queryPoint1_);
    void SetQueryPoint2(const double *queryPoint2_);
    void SetQueryVariables(const stringVector &queryVariables_);
    void SetToolId(int toolId_);
    void SetBoolFlag(bool boolFlag_);
    void SetIntArg1(int intArg1_);
    void SetIntArg2(int intArg2_);
    void SetIntArg3(int intArg3_);

    // Property getting methods
    ViewerRPCType      GetRPCType() const;
    int                GetWindowLayout() const;
    int                GetWindowId() const;
    int                GetWindowMode() const;
    const std::string  &GetWindowArea() const;
          std::string  &GetWindowArea();
    const std::string  &GetDatabase() const;
          std::string  &GetDatabase();
    const std::string  &GetProgramHost() const;
          std::string  &GetProgramHost();
    const stringVector &GetProgramOptions() const;
          stringVector &GetProgramOptions();
    int                GetNFrames() const;
    int                GetFrameNumber() const;
    const int          *GetFrameRange() const;
          int          *GetFrameRange();
    int                GetFrame() const;
    int                GetPlotType() const;
    int                GetOperatorType() const;
    const std::string  &GetVariable() const;
          std::string  &GetVariable();
    const intVector    &GetActivePlotIds() const;
          intVector    &GetActivePlotIds();
    const intVector    &GetActiveOperatorIds() const;
          intVector    &GetActiveOperatorIds();
    const intVector    &GetExpandedPlotIds() const;
          intVector    &GetExpandedPlotIds();
    const std::string  &GetColorTableName() const;
          std::string  &GetColorTableName();
    const std::string  &GetQueryName() const;
          std::string  &GetQueryName();
    const double       *GetQueryPoint1() const;
          double       *GetQueryPoint1();
    const double       *GetQueryPoint2() const;
          double       *GetQueryPoint2();
    const stringVector &GetQueryVariables() const;
          stringVector &GetQueryVariables();
    int                GetToolId() const;
    bool               GetBoolFlag() const;
    int                GetIntArg1() const;
    int                GetIntArg2() const;
    int                GetIntArg3() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string ViewerRPCType_ToString(ViewerRPCType);
    static bool ViewerRPCType_FromString(const std::string &, ViewerRPCType &);
protected:
    static std::string ViewerRPCType_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    void SetWindowArea(int x, int y, int w, int h);
private:
    int          RPCType;
    int          windowLayout;
    int          windowId;
    int          windowMode;
    std::string  windowArea;
    std::string  database;
    std::string  programHost;
    stringVector programOptions;
    int          nFrames;
    int          frameNumber;
    int          frameRange[2];
    int          frame;
    int          plotType;
    int          operatorType;
    std::string  variable;
    intVector    activePlotIds;
    intVector    activeOperatorIds;
    intVector    expandedPlotIds;
    std::string  colorTableName;
    std::string  queryName;
    double       queryPoint1[3];
    double       queryPoint2[3];
    stringVector queryVariables;
    int          toolId;
    bool         boolFlag;
    int          intArg1;
    int          intArg2;
    int          intArg3;
};

#endif
