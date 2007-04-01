// ****************************************************************************
//                               CMATPluginInfo.h
// ****************************************************************************

#ifndef CMAT_PLUGIN_INFO_H
#define CMAT_PLUGIN_INFO_H
#include <DatabasePluginInfo.h>
#include <database_plugin_exports.h>

class avtDatabase;
class avtDatabaseWriter;

// ****************************************************************************
//  Class: CMATDatabasePluginInfo
//
//  Purpose:
//    Classes that provide all the information about the CMAT plugin.
//    Portions are separated into pieces relevant to the appropriate
//    components of VisIt.
//
//  Programmer: meredith -- generated by xml2info
//  Creation:   Tue Feb 22 14:35:02 PST 2005
//
//  Modifications:
//
// ****************************************************************************

class CMATGeneralPluginInfo : public virtual GeneralDatabasePluginInfo
{
  public:
    virtual char *GetName() const;
    virtual char *GetVersion() const;
    virtual char *GetID() const;
    virtual bool  EnabledByDefault() const;
    virtual bool  HasWriter() const;
};

class CMATCommonPluginInfo : public virtual CommonDatabasePluginInfo, public virtual CMATGeneralPluginInfo
{
  public:
    virtual DatabaseType              GetDatabaseType();
    virtual std::vector<std::string>  GetDefaultExtensions();
    virtual avtDatabase              *SetupDatabase(const char * const *list,
                                                    int nList, int nBlock);
};

class CMATMDServerPluginInfo : public virtual MDServerDatabasePluginInfo, public virtual CMATCommonPluginInfo
{
  public:
    // this makes compilers happy... remove if we ever have functions here
    virtual void dummy();
};

class CMATEnginePluginInfo : public virtual EngineDatabasePluginInfo, public virtual CMATCommonPluginInfo
{
  public:
    virtual avtDatabaseWriter        *GetWriter(void);
};

#endif
