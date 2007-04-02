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

#ifndef AVTDATABASEMETADATA_H
#define AVTDATABASEMETADATA_H
#include <dbatts_exports.h>
#include <string>
#include <AttributeSubject.h>
class avtMeshMetaData;
class avtScalarMetaData;
class avtVectorMetaData;
class avtTensorMetaData;
class avtSymmetricTensorMetaData;
class avtArrayMetaData;
class avtMaterialMetaData;
class avtSpeciesMetaData;
class avtCurveMetaData;
class avtLabelMetaData;
class avtDefaultPlotMetaData;
class avtSILMetaData;
#include <ExpressionList.h>
#include <avtSimulationInformation.h>
#include <Expression.h>
#include <avtArrayMetaData.h>
#include <avtCurveMetaData.h>
#include <avtDatabaseMetaData.h>
#include <avtDefaultPlotMetaData.h>
#include <avtLabelMetaData.h>
#include <avtMatSpeciesMetaData.h>
#include <avtMaterialMetaData.h>
#include <avtMeshMetaData.h>
#include <avtSILCollectionMetaData.h>
#include <avtSILMetaData.h>
#include <avtScalarMetaData.h>
#include <avtSpeciesMetaData.h>
#include <avtSymmetricTensorMetaData.h>
#include <avtTensorMetaData.h>
#include <avtVectorMetaData.h>

// ****************************************************************************
// Class: avtDatabaseMetaData
//
// Purpose:
//    Contains database metadata attributes
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Fri Mar 9 16:15:06 PST 2007
//
// Modifications:
//   
// ****************************************************************************

class DBATTS_API avtDatabaseMetaData : public AttributeSubject
{
public:
    avtDatabaseMetaData();
    avtDatabaseMetaData(const avtDatabaseMetaData &obj);
    virtual ~avtDatabaseMetaData();

    virtual avtDatabaseMetaData& operator = (const avtDatabaseMetaData &obj);
    virtual bool operator == (const avtDatabaseMetaData &obj) const;
    virtual bool operator != (const avtDatabaseMetaData &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectTimeStepPath();
    void SelectTimeStepNames();
    void SelectCycles();
    void SelectCyclesAreAccurate();
    void SelectTimes();
    void SelectTimesAreAccurate();
    void SelectDatabaseName();
    void SelectFileFormat();
    void SelectDatabaseComment();
    void SelectExprList();
    void SelectMeshes();
    void SelectScalars();
    void SelectVectors();
    void SelectTensors();
    void SelectSymmTensors();
    void SelectArrays();
    void SelectMaterials();
    void SelectSpecies();
    void SelectCurves();
    void SelectLabels();
    void SelectDefaultPlots();
    void SelectSILs();
    void SelectSimInfo();

    // Property setting methods
    void SetHasTemporalExtents(bool hasTemporalExtents_);
    void SetMinTemporalExtents(double minTemporalExtents_);
    void SetMaxTemporalExtents(double maxTemporalExtents_);
    void SetNumStates(int numStates_);
    void SetIsVirtualDatabase(bool isVirtualDatabase_);
    void SetMustRepopulateOnStateChange(bool mustRepopulateOnStateChange_);
    void SetMustAlphabetizeVariables(bool mustAlphabetizeVariables_);
    void SetFormatCanDoDomainDecomposition(bool formatCanDoDomainDecomposition_);
    void SetUseCatchAllMesh(bool useCatchAllMesh_);
    void SetTimeStepPath(const std::string &timeStepPath_);
    void SetTimeStepNames(const stringVector &timeStepNames_);
    void SetCycles(const intVector &cycles_);
    void SetCyclesAreAccurate(const intVector &cyclesAreAccurate_);
    void SetTimes(const doubleVector &times_);
    void SetTimesAreAccurate(const intVector &timesAreAccurate_);
    void SetDatabaseName(const std::string &databaseName_);
    void SetFileFormat(const std::string &fileFormat_);
    void SetDatabaseComment(const std::string &databaseComment_);
    void SetExprList(const ExpressionList &exprList_);
    void SetIsSimulation(bool isSimulation_);
    void SetSimInfo(const avtSimulationInformation &simInfo_);

    // Property getting methods
    bool                           GetHasTemporalExtents() const;
    double                         GetMinTemporalExtents() const;
    double                         GetMaxTemporalExtents() const;
    int                            GetNumStates() const;
    bool                           GetIsVirtualDatabase() const;
    bool                           GetMustRepopulateOnStateChange() const;
    bool                           GetMustAlphabetizeVariables() const;
    bool                           GetFormatCanDoDomainDecomposition() const;
    bool                           GetUseCatchAllMesh() const;
    const std::string              &GetTimeStepPath() const;
          std::string              &GetTimeStepPath();
    const stringVector             &GetTimeStepNames() const;
          stringVector             &GetTimeStepNames();
    const intVector                &GetCycles() const;
          intVector                &GetCycles();
    const intVector                &GetCyclesAreAccurate() const;
          intVector                &GetCyclesAreAccurate();
    const doubleVector             &GetTimes() const;
          doubleVector             &GetTimes();
    const intVector                &GetTimesAreAccurate() const;
          intVector                &GetTimesAreAccurate();
    const std::string              &GetDatabaseName() const;
          std::string              &GetDatabaseName();
    const std::string              &GetFileFormat() const;
          std::string              &GetFileFormat();
    const std::string              &GetDatabaseComment() const;
          std::string              &GetDatabaseComment();
    const ExpressionList           &GetExprList() const;
          ExpressionList           &GetExprList();
    const AttributeGroupVector     &GetMeshes() const;
          AttributeGroupVector     &GetMeshes();
    const AttributeGroupVector     &GetScalars() const;
          AttributeGroupVector     &GetScalars();
    const AttributeGroupVector     &GetVectors() const;
          AttributeGroupVector     &GetVectors();
    const AttributeGroupVector     &GetTensors() const;
          AttributeGroupVector     &GetTensors();
    const AttributeGroupVector     &GetSymmTensors() const;
          AttributeGroupVector     &GetSymmTensors();
    const AttributeGroupVector     &GetArrays() const;
          AttributeGroupVector     &GetArrays();
    const AttributeGroupVector     &GetMaterials() const;
          AttributeGroupVector     &GetMaterials();
    const AttributeGroupVector     &GetSpecies() const;
          AttributeGroupVector     &GetSpecies();
    const AttributeGroupVector     &GetCurves() const;
          AttributeGroupVector     &GetCurves();
    const AttributeGroupVector     &GetLabels() const;
          AttributeGroupVector     &GetLabels();
    const AttributeGroupVector     &GetDefaultPlots() const;
          AttributeGroupVector     &GetDefaultPlots();
    const AttributeGroupVector     &GetSILs() const;
          AttributeGroupVector     &GetSILs();
    bool                           GetIsSimulation() const;
    const avtSimulationInformation &GetSimInfo() const;
          avtSimulationInformation &GetSimInfo();


    // Attributegroup convenience methods
    void AddMeshes(const avtMeshMetaData &);
    void ClearMeshes();
    void RemoveMeshes(int i);
    int  GetNumMeshes() const;
    avtMeshMetaData &GetMeshes(int i);
    const avtMeshMetaData &GetMeshes(int i) const;

    void AddScalars(const avtScalarMetaData &);
    void ClearScalars();
    void RemoveScalars(int i);
    int  GetNumScalars() const;
    avtScalarMetaData &GetScalars(int i);
    const avtScalarMetaData &GetScalars(int i) const;

    void AddVectors(const avtVectorMetaData &);
    void ClearVectors();
    void RemoveVectors(int i);
    int  GetNumVectors() const;
    avtVectorMetaData &GetVectors(int i);
    const avtVectorMetaData &GetVectors(int i) const;

    void AddTensors(const avtTensorMetaData &);
    void ClearTensors();
    void RemoveTensors(int i);
    int  GetNumTensors() const;
    avtTensorMetaData &GetTensors(int i);
    const avtTensorMetaData &GetTensors(int i) const;

    void AddSymmTensors(const avtSymmetricTensorMetaData &);
    void ClearSymmTensors();
    void RemoveSymmTensors(int i);
    int  GetNumSymmTensors() const;
    avtSymmetricTensorMetaData &GetSymmTensors(int i);
    const avtSymmetricTensorMetaData &GetSymmTensors(int i) const;

    void AddArrays(const avtArrayMetaData &);
    void ClearArrays();
    void RemoveArrays(int i);
    int  GetNumArrays() const;
    avtArrayMetaData &GetArrays(int i);
    const avtArrayMetaData &GetArrays(int i) const;

    void AddMaterials(const avtMaterialMetaData &);
    void ClearMaterials();
    void RemoveMaterials(int i);
    int  GetNumMaterials() const;
    avtMaterialMetaData &GetMaterials(int i);
    const avtMaterialMetaData &GetMaterials(int i) const;

    void AddSpecies(const avtSpeciesMetaData &);
    void ClearSpecies();
    void RemoveSpecies(int i);
    int  GetNumSpecies() const;
    avtSpeciesMetaData &GetSpecies(int i);
    const avtSpeciesMetaData &GetSpecies(int i) const;

    void AddCurves(const avtCurveMetaData &);
    void ClearCurves();
    void RemoveCurves(int i);
    int  GetNumCurves() const;
    avtCurveMetaData &GetCurves(int i);
    const avtCurveMetaData &GetCurves(int i) const;

    void AddLabels(const avtLabelMetaData &);
    void ClearLabels();
    void RemoveLabels(int i);
    int  GetNumLabels() const;
    avtLabelMetaData &GetLabels(int i);
    const avtLabelMetaData &GetLabels(int i) const;

    void AddDefaultPlots(const avtDefaultPlotMetaData &);
    void ClearDefaultPlots();
    void RemoveDefaultPlots(int i);
    int  GetNumDefaultPlots() const;
    avtDefaultPlotMetaData &GetDefaultPlots(int i);
    const avtDefaultPlotMetaData &GetDefaultPlots(int i) const;

    void AddSILs(const avtSILMetaData &);
    void ClearSILs();
    void RemoveSILs(int i);
    int  GetNumSILs() const;
    avtSILMetaData &GetSILs(int i);
    const avtSILMetaData &GetSILs(int i) const;

    // User-defined methods
    void         SetTemporalExtents(double, double);
    void         SetCycle(int, int);
    void         SetCycleIsAccurate(bool, int);
    void         SetCyclesAreAccurate(bool);
    bool         IsCycleAccurate(int) const;
    bool         AreAllCyclesAccurateAndValid(int=-1) const;
    void         SetTime(int, double);
    void         SetTimeIsAccurate(bool, int);
    void         SetTimesAreAccurate(bool);
    bool         IsTimeAccurate(int) const;
    bool         AreAllTimesAccurateAndValid(int=-1) const;
    void         ReplaceForbiddenCharacters(std::vector<char> &, stringVector &);
    void         Add(avtMeshMetaData *);
    void         Add(avtScalarMetaData *);
    void         Add(avtVectorMetaData *);
    void         Add(avtTensorMetaData *);
    void         Add(avtSymmetricTensorMetaData *);
    void         Add(avtArrayMetaData *);
    void         Add(avtMaterialMetaData *);
    void         Add(avtSpeciesMetaData *);
    void         Add(avtCurveMetaData *);
    void         Add(avtSILMetaData *);
    void         Add(avtLabelMetaData *);
    void         Add(avtDefaultPlotMetaData *);
    const avtMeshMetaData        *GetMesh(int) const;
    const avtMeshMetaData        *GetMesh(const std::string&) const;
    const avtScalarMetaData      *GetScalar(int) const;
    const avtScalarMetaData      *GetScalar(const std::string&) const;
    const avtVectorMetaData      *GetVector(int) const;
    const avtVectorMetaData      *GetVector(const std::string&) const;
    const avtTensorMetaData      *GetTensor(int) const;
    const avtTensorMetaData      *GetTensor(const std::string&) const;
    const avtSymmetricTensorMetaData *GetSymmTensor(int) const;
    const avtSymmetricTensorMetaData *GetSymmTensor(const std::string&) const;
    const avtArrayMetaData       *GetArray(int) const;
    const avtArrayMetaData       *GetArray(const std::string&) const;
    const avtMaterialMetaData    *GetMaterial(int) const;
    const avtMaterialMetaData    *GetMaterial(const std::string&) const;
    const avtSpeciesMetaData     *GetSpecies(const std::string&) const;
    const avtCurveMetaData       *GetCurve(int) const;
    const avtCurveMetaData       *GetCurve(const std::string&) const;
    const avtSILMetaData         *GetSIL(int) const;
    const avtSILMetaData         *GetSIL(const std::string&) const;
    const avtLabelMetaData       *GetLabel(int) const;
    const avtLabelMetaData       *GetLabel(const std::string&) const;
    const avtDefaultPlotMetaData *GetDefaultPlot(int) const;
    void         SetBlocksForMesh(int index, int nBlocks);
    void         SetContainsGhostZones(std::string name, avtGhostType);
    avtGhostType GetContainsGhostZones(std::string name) const;
    void         SetContainsOriginalCells(std::string name, bool);
    void         SetContainsOriginalNodes(std::string name, bool);
    void         SetContainsGlobalNodeIds(std::string name, bool);
    void         SetContainsGlobalZoneIds(std::string name, bool);
    void         AddGroupInformation(int nGroups, int nBlocks, intVector &blockIds);
    void         SetExtents(std::string, const double *);
    void         UnsetExtents();
    void                AddExpression(Expression *);
    const Expression   *GetExpression(int) const;
    int                 GetNumberOfExpressions(void) const;
    bool         ConvertCSGDomainToBlockAndRegion(const char *const var, int *domain, int *region) const;
    int          GetNDomains(const std::string &) const;
    avtVarType   DetermineVarType(std::string, bool = true) const;
    avtSubsetType   DetermineSubsetType(const std::string &) const;
    std::string  MeshForVar(const std::string &) const;
    std::string  MaterialOnMesh(const std::string &) const;
    std::string  SpeciesOnMesh(const std::string &) const;
    const avtMaterialMetaData *GetMaterialOnMesh(const std::string &) const;
    const avtSpeciesMetaData  *GetSpeciesOnMesh(const std::string &) const;
    const stringVector GetAllVariableNames(const std::string &) const;
    stringVector GetAllMeshNames(void) const;
    void         Print(ostream &, int = 0) const;
    void  RegisterWarningCallback(void (*)(const char *));
    static void (*WarningCallback)(const char *);
    static bool haveWarningCallback;
    void IssueWarning(const char *msg);
    bool VarIsCompound(const std::string &inVar) const;
    void ParseCompoundForVar(const std::string &inVar, std::string &outVar) const;
    void ParseCompoundForMesh(const std::string &inVar, std::string &meshName) const;
    void ParseCompoundForCategory(const std::string &inVar, std::string &meshName) const;
    bool VariableNamesEqual(const std::string &v1, const std::string &v2) const;
protected:
    AttributeGroup *CreateSubAttributeGroup(int index);
private:
    bool                     hasTemporalExtents;
    double                   minTemporalExtents;
    double                   maxTemporalExtents;
    int                      numStates;
    bool                     isVirtualDatabase;
    bool                     mustRepopulateOnStateChange;
    bool                     mustAlphabetizeVariables;
    bool                     formatCanDoDomainDecomposition;
    bool                     useCatchAllMesh;
    std::string              timeStepPath;
    stringVector             timeStepNames;
    intVector                cycles;
    intVector                cyclesAreAccurate;
    doubleVector             times;
    intVector                timesAreAccurate;
    std::string              databaseName;
    std::string              fileFormat;
    std::string              databaseComment;
    ExpressionList           exprList;
    AttributeGroupVector     meshes;
    AttributeGroupVector     scalars;
    AttributeGroupVector     vectors;
    AttributeGroupVector     tensors;
    AttributeGroupVector     symmTensors;
    AttributeGroupVector     arrays;
    AttributeGroupVector     materials;
    AttributeGroupVector     species;
    AttributeGroupVector     curves;
    AttributeGroupVector     labels;
    AttributeGroupVector     defaultPlots;
    AttributeGroupVector     SILs;
    bool                     isSimulation;
    avtSimulationInformation simInfo;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
};

#endif
