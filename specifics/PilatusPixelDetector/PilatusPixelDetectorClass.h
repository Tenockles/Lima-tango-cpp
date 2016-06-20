//=============================================================================
//
// file :         PilatusPixelDetectorClass.h
//
// description :  Include for the PilatusPixelDetectorClass root class.
//                This class is the singleton class for
//                the Pilatus device class.
//                It contains all properties and methods which the 
//                Pilatus requires only once e.g. the commands.
//			
// project :      TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source:  $
// $Log:  $
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================

#ifndef _PILATUSPIXELDETECTORCLASS_H
#define _PILATUSPIXELDETECTORCLASS_H

#ifdef WIN32
#include "tango.h"
#endif

#include <PilatusPixelDetector.h>

#ifndef WIN32
#include "tango.h"
#endif


namespace PilatusPixelDetector_ns
{//=====================================
//	Define classes for attributes
//=====================================
class fileNameAttrib: public Tango::Attr
{
public:
	fileNameAttrib():Attr("fileName", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~fileNameAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->read_fileName(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->write_fileName(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_fileName_allowed(ty);}
};

class imagePathAttrib: public Tango::Attr
{
public:
	imagePathAttrib():Attr("imagePath", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~imagePathAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->read_imagePath(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->write_imagePath(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_imagePath_allowed(ty);}
};

class gainAttrib: public Tango::Attr
{
public:
	gainAttrib():Attr("gain", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~gainAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->read_gain(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->write_gain(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_gain_allowed(ty);}
};

class thresholdAttrib: public Tango::Attr
{
public:
	thresholdAttrib():Attr("threshold", Tango::DEV_LONG, Tango::READ_WRITE) {};
	~thresholdAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->read_threshold(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->write_threshold(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_threshold_allowed(ty);}
};

class energyAttrib: public Tango::Attr
{
public:
	energyAttrib():Attr("energy", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~energyAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->read_energy(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<PilatusPixelDetector *>(dev))->write_energy(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_energy_allowed(ty);}
};

//=========================================
//	Define classes for commands
//=========================================
class GetHumidityCmd : public Tango::Command
{
public:
	GetHumidityCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetHumidityCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetHumidityCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_GetHumidity_allowed(any);}
};



class GetTemperatureCmd : public Tango::Command
{
public:
	GetTemperatureCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetTemperatureCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetTemperatureCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_GetTemperature_allowed(any);}
};



class SendAnyCommandCmd : public Tango::Command
{
public:
	SendAnyCommandCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SendAnyCommandCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SendAnyCommandCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_SendAnyCommand_allowed(any);}
};



class SetMxSettingsCmd : public Tango::Command
{
public:
	SetMxSettingsCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetMxSettingsCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetMxSettingsCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_SetMxSettings_allowed(any);}
};



class SetThresholdAndGainCmd : public Tango::Command
{
public:
	SetThresholdAndGainCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetThresholdAndGainCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetThresholdAndGainCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_SetThresholdAndGain_allowed(any);}
};



class SetEnergyCmd : public Tango::Command
{
public:
	SetEnergyCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetEnergyCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetEnergyCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PilatusPixelDetector *>(dev))->is_SetEnergy_allowed(any);}
};



//
// The PilatusPixelDetectorClass singleton definition
//

class
#ifdef WIN32
	__declspec(dllexport)
#endif
	PilatusPixelDetectorClass : public Tango::DeviceClass
{
public:
//	properties member data

//	add your own data members here
//------------------------------------

public:
	Tango::DbData	cl_prop;
	Tango::DbData	cl_def_prop;
	Tango::DbData	dev_def_prop;

//	Method prototypes
	static PilatusPixelDetectorClass *init(const char *);
	static PilatusPixelDetectorClass *instance();
	~PilatusPixelDetectorClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	PilatusPixelDetectorClass(string &);
	static PilatusPixelDetectorClass *_instance;
	void command_factory();
	void get_class_property();
	void attribute_factory(vector<Tango::Attr *> &);
	void write_class_property();
	void set_default_property();
	string get_cvstag();
	string get_cvsroot();

private:
	void device_factory(const Tango::DevVarStringArray *);
};


}	//	namespace PilatusPixelDetector_ns

#endif // _PILATUSPIXELDETECTORCLASS_H
