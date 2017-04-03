static const char *ClassId    = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL: $";
static const char *HttpServer = "http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/";
//+=============================================================================
//
// file :        ImXpadClass.cpp
//
// description : C++ source for the ImXpadClass. A singleton
//               class derived from DeviceClass. It implements the
//               command list and all properties and methods required
//               by the ImXpad once per process.
//
// project :     TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
//
// $Log:  $
//
// copyleft :   European Synchrotron Radiation Facility
//              BP 220, Grenoble 38043
//              FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================


#include <tango.h>

#include <ImXpad.h>
#include <ImXpadClass.h>


//+----------------------------------------------------------------------------
/**
 *	Create ImXpadClass singleton and return it in a C function for Python usage
 */
//+----------------------------------------------------------------------------
extern "C" {
#ifdef WIN32

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_ImXpad_class(const char *name) {
		return ImXpad_ns::ImXpadClass::init(name);
	}
}


namespace ImXpad_ns
{
//+----------------------------------------------------------------------------
//
// method : 		LoadCalibrationFileCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *LoadCalibrationFileCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "LoadCalibrationFileCmd::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	((static_cast<ImXpad *>(device))->load_calibration_file(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		SaveCalibrationFileCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *SaveCalibrationFileCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "SaveCalibrationFileCmd::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	((static_cast<ImXpad *>(device))->save_calibration_file(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		StartCalibrationCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *StartCalibrationCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "StartCalibrationCmd::execute(): arrived" << endl;

	((static_cast<ImXpad *>(device))->start_calibration());
	return new CORBA::Any();
}


//+----------------------------------------------------------------------------
//
// method : 		AbortClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *AbortClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "AbortClass::execute(): arrived" << endl;

	((static_cast<ImXpad *>(device))->abort());
	return new CORBA::Any();
}


//+----------------------------------------------------------------------------
//
// method : 		DeleteWhiteImageCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *DeleteWhiteImageCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "DeleteWhiteImageCmd::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	((static_cast<ImXpad *>(device))->delete_white_image(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		GetWhiteImagesListCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetWhiteImagesListCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetWhiteImagesListCmd::execute(): arrived" << endl;

	return insert((static_cast<ImXpad *>(device))->get_white_images_list());
}

//+----------------------------------------------------------------------------
//
// method : 		ChooseWhiteImageCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *ChooseWhiteImageCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "ChooseWhiteImageCmd::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	((static_cast<ImXpad *>(device))->choose_white_image(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		CreateWhiteImageCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *CreateWhiteImageCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "CreateWhiteImageCmd::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	((static_cast<ImXpad *>(device))->create_white_image(argin));
	return new CORBA::Any();
}






//
//----------------------------------------------------------------
//	Initialize pointer for singleton pattern
//----------------------------------------------------------------
//
ImXpadClass *ImXpadClass::_instance = NULL;

//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::ImXpadClass(string &s)
// 
// description : 	constructor for the ImXpadClass
//
// in : - s : The class name
//
//-----------------------------------------------------------------------------
ImXpadClass::ImXpadClass(string &s):DeviceClass(s)
{

	cout2 << "Entering ImXpadClass constructor" << endl;
	set_default_property();
	get_class_property();
	write_class_property();
	
	cout2 << "Leaving ImXpadClass constructor" << endl;

}
//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::~ImXpadClass()
// 
// description : 	destructor for the ImXpadClass
//
//-----------------------------------------------------------------------------
ImXpadClass::~ImXpadClass()
{
	_instance = NULL;
}

//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::instance
// 
// description : 	Create the object if not already done. Otherwise, just
//			return a pointer to the object
//
// in : - name : The class name
//
//-----------------------------------------------------------------------------
ImXpadClass *ImXpadClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new ImXpadClass(s);
		}
		catch (bad_alloc)
		{
			throw;
		}		
	}		
	return _instance;
}

ImXpadClass *ImXpadClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}

//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::command_factory
// 
// description : 	Create the command object(s) and store them in the 
//			command list
//
//-----------------------------------------------------------------------------
void ImXpadClass::command_factory()
{
	command_list.push_back(new StartCalibrationCmd("StartCalibration",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new SaveCalibrationFileCmd("SaveCalibrationFile",
		Tango::DEV_STRING, Tango::DEV_VOID,
		"Target calibration file name",
		"",
		Tango::OPERATOR));
	command_list.push_back(new LoadCalibrationFileCmd("LoadCalibrationFile",
		Tango::DEV_STRING, Tango::DEV_VOID,
		"The calibration File Name ",
		"",
		Tango::OPERATOR));
	command_list.push_back(new CreateWhiteImageCmd("CreateWhiteImage",
		Tango::DEV_STRING, Tango::DEV_VOID,
		"White image name",
		"",
		Tango::OPERATOR));
	command_list.push_back(new ChooseWhiteImageCmd("ChooseWhiteImage",
		Tango::DEV_STRING, Tango::DEV_VOID,
		"White image name",
		"",
		Tango::OPERATOR));
	command_list.push_back(new GetWhiteImagesListCmd("GetWhiteImagesList",
		Tango::DEV_VOID, Tango::DEVVAR_STRINGARRAY,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new DeleteWhiteImageCmd("DeleteWhiteImage",
		Tango::DEV_STRING, Tango::DEV_VOID,
		"White image name",
		"",
		Tango::OPERATOR));
	command_list.push_back(new AbortClass("Abort",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));

	//	add polling if any
	for (unsigned int i=0 ; i<command_list.size(); i++)
	{
	}
}

//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::get_class_property
// 
// description : 	Get the class property for specified name.
//
// in :		string	name : The property name
//
//+----------------------------------------------------------------------------
Tango::DbDatum ImXpadClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::get_default_device_property()
// 
// description : 	Return the default value for device property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum ImXpadClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::get_default_class_property()
// 
// description : 	Return the default value for class property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum ImXpadClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::device_factory
// 
// description : 	Create the device object(s) and store them in the 
//			device list
//
// in :		Tango::DevVarStringArray *devlist_ptr : The device name list
//
//-----------------------------------------------------------------------------
void ImXpadClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{

	//	Create all devices.(Automatic code generation)
	//-------------------------------------------------------------
	for (unsigned long i=0 ; i < devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
						
		// Create devices and add it into the device list
		//----------------------------------------------------
		device_list.push_back(new ImXpad(this, (*devlist_ptr)[i]));							 

		// Export device to the outside world
		// Check before if database used.
		//---------------------------------------------
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(device_list.back());
		else
			export_device(device_list.back(), (*devlist_ptr)[i]);
	}
	//	End of Automatic code generation
	//-------------------------------------------------------------

}
//+----------------------------------------------------------------------------
//	Method: ImXpadClass::attribute_factory(vector<Tango::Attr *> &att_list)
//-----------------------------------------------------------------------------
void ImXpadClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	//	Attribute : serverVersion
	serverVersionAttrib	*server_version = new serverVersionAttrib();
	Tango::UserDefaultAttrProp	server_version_prop;
	server_version_prop.set_unit(" ");
	server_version_prop.set_standard_unit(" ");
	server_version_prop.set_display_unit(" ");
	server_version_prop.set_description("ImXpad Socket Server Version.");
	server_version->set_default_properties(server_version_prop);
	server_version->set_disp_level(Tango::EXPERT);
	att_list.push_back(server_version);

	//	Attribute : geometricalCorrectionFlag
	geometricalCorrectionFlagAttrib	*geometrical_correction_flag = new geometricalCorrectionFlagAttrib();
	Tango::UserDefaultAttrProp	geometrical_correction_flag_prop;
	geometrical_correction_flag_prop.set_unit(" ");
	geometrical_correction_flag_prop.set_standard_unit(" ");
	geometrical_correction_flag_prop.set_display_unit(" ");
	geometrical_correction_flag->set_default_properties(geometrical_correction_flag_prop);
	geometrical_correction_flag->set_memorized();
	geometrical_correction_flag->set_memorized_init(false);
	att_list.push_back(geometrical_correction_flag);

	//	Attribute : flatFieldCorrectionFlag
	flatFieldCorrectionFlagAttrib	*flat_field_correction_flag = new flatFieldCorrectionFlagAttrib();
	Tango::UserDefaultAttrProp	flat_field_correction_flag_prop;
	flat_field_correction_flag_prop.set_unit(" ");
	flat_field_correction_flag_prop.set_standard_unit(" ");
	flat_field_correction_flag_prop.set_display_unit(" ");
	flat_field_correction_flag->set_default_properties(flat_field_correction_flag_prop);
	flat_field_correction_flag->set_memorized();
	flat_field_correction_flag->set_memorized_init(false);
	att_list.push_back(flat_field_correction_flag);

	//	Attribute : calibrationFileName
	calibrationFileNameAttrib	*calibration_file_name = new calibrationFileNameAttrib();
	Tango::UserDefaultAttrProp	calibration_file_name_prop;
	calibration_file_name_prop.set_unit(" ");
	calibration_file_name->set_default_properties(calibration_file_name_prop);
	att_list.push_back(calibration_file_name);

	//	Attribute : acquisitionMode
	acquisitionModeAttrib	*acquisition_mode = new acquisitionModeAttrib();
	Tango::UserDefaultAttrProp	acquisition_mode_prop;
	acquisition_mode_prop.set_unit(" ");
	acquisition_mode_prop.set_standard_unit(" ");
	acquisition_mode_prop.set_display_unit(" ");
	acquisition_mode_prop.set_description("Acquisition mode type are :<BR>\nSTANDARD<BR>\nCOMPUTER_BURST<BR>\nDETECTOR_BURST<BR>\nSINGLE_BUNCH_16<BR>\nSINGLE_BUNCH_32<BR>\nSTACKING_16<BR>\nSTACKING_32<BR>");
	acquisition_mode->set_default_properties(acquisition_mode_prop);
	acquisition_mode->set_memorized();
	acquisition_mode->set_memorized_init(false);
	att_list.push_back(acquisition_mode);

	//	Attribute : outputSignal
	outputSignalAttrib	*output_signal = new outputSignalAttrib();
	Tango::UserDefaultAttrProp	output_signal_prop;
	output_signal_prop.set_unit(" ");
	output_signal_prop.set_standard_unit(" ");
	output_signal_prop.set_display_unit(" ");
	output_signal_prop.set_description("Avalaible output signals are :<br>\nEXPOSURE_BUSY<br>\nEXPOSURE_READ_DONE<br>\nSHUTTER_BUSY<br>\nUPDATE_OVERFLOW_BUSY<br>\nPIXEL_COUNTER_ENABLED<br>\nEXTERNAL_GATE<br>\nDATA_TRANSFER<br>\nRAM_READY_IMAGE_BUSY<br>\nXPAD_TO_LOCAL_DDR<br>\nLOCAL_DDR_TO_PC<br>");
	output_signal->set_default_properties(output_signal_prop);
	output_signal->set_memorized();
	output_signal->set_memorized_init(false);
	att_list.push_back(output_signal);

	//	Attribute : calibrationMode
	calibrationModeAttrib	*calibration_mode = new calibrationModeAttrib();
	Tango::UserDefaultAttrProp	calibration_mode_prop;
	calibration_mode_prop.set_unit(" ");
	calibration_mode_prop.set_standard_unit(" ");
	calibration_mode_prop.set_display_unit(" ");
	calibration_mode_prop.set_description("Calibration modes are :<BR>\nOTN<BR>\nOTN_PULSE<BR>\nBEAM<BR>\n\n");
	calibration_mode->set_default_properties(calibration_mode_prop);
	calibration_mode->set_memorized();
	calibration_mode->set_memorized_init(false);
	att_list.push_back(calibration_mode);

	//	Attribute : time
	timeAttrib	*time = new timeAttrib();
	Tango::UserDefaultAttrProp	time_prop;
	time_prop.set_unit("ms");
	time_prop.set_standard_unit("ms");
	time_prop.set_display_unit("%6.2f");
	time->set_default_properties(time_prop);
	time->set_memorized();
	time->set_memorized_init(false);
	att_list.push_back(time);

	//	Attribute : iTHL
	iTHLAttrib	*i_thl = new iTHLAttrib();
	Tango::UserDefaultAttrProp	i_thl_prop;
	i_thl_prop.set_unit(" ");
	i_thl_prop.set_standard_unit(" ");
	i_thl_prop.set_display_unit(" ");
	i_thl->set_default_properties(i_thl_prop);
	i_thl->set_memorized();
	i_thl->set_memorized_init(false);
	att_list.push_back(i_thl);

	//	Attribute : mode
	modeAttrib	*mode = new modeAttrib();
	Tango::UserDefaultAttrProp	mode_prop;
	mode_prop.set_unit(" ");
	mode_prop.set_standard_unit(" ");
	mode_prop.set_display_unit(" ");
	mode_prop.set_description("Available config modes for a calibration are :<BR>\nSLOW<BR>\nMEDIUM<BR>\nFAST<BR>");
	mode->set_default_properties(mode_prop);
	mode->set_memorized();
	mode->set_memorized_init(false);
	att_list.push_back(mode);

	//	End of Automatic code generation
	//-------------------------------------------------------------
}



//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::get_class_property()
// 
// description : 	Read the class properties from database.
//
//-----------------------------------------------------------------------------
void ImXpadClass::get_class_property()
{
	//	Initialize your default values here (if not done with  POGO).
	//------------------------------------------------------------------

	//	Read class properties from database.(Automatic code generation)
	//------------------------------------------------------------------

	//	Call database and extract values
	//--------------------------------------------
	if (Tango::Util::instance()->_UseDb==true)
		get_db_class()->get_property(cl_prop);
	Tango::DbDatum	def_prop;
	int	i = -1;


	//	End of Automatic code generation
	//------------------------------------------------------------------

}

//+----------------------------------------------------------------------------
//
// method : 	ImXpadClass::set_default_property
// 
// description: Set default property (class and device) for wizard.
//              For each property, add to wizard property name and description
//              If default value has been set, add it to wizard property and
//              store it in a DbDatum.
//
//-----------------------------------------------------------------------------
void ImXpadClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;

	vector<string>	vect_data;
	//	Set Default Class Properties
	//	Set Default Device Properties
	prop_name = "HostName";
	prop_desc = "Host name /Adress IP of the XPAD SERVER";
	prop_def  = "127.0.0.1";
	vect_data.clear();
	vect_data.push_back("127.0.0.1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "Port";
	prop_desc = "Host port of the XPAD SERVER";
	prop_def  = "3456";
	vect_data.clear();
	vect_data.push_back("3456");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "CalibrationPath";
	prop_desc = "";
	prop_def  = "MUST_BE_DEFINED";
	vect_data.clear();
	vect_data.push_back("MUST_BE_DEFINED");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedGeometricalCorrectionFlag";
	prop_desc = "";
	prop_def  = "false";
	vect_data.clear();
	vect_data.push_back("false");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedFlatFieldCorrectionFlag";
	prop_desc = "";
	prop_def  = "false";
	vect_data.clear();
	vect_data.push_back("false");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedAcquisitionMode";
	prop_desc = "";
	prop_def  = "STANDARD";
	vect_data.clear();
	vect_data.push_back("STANDARD");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedOutputSignal";
	prop_desc = "";
	prop_def  = "EXPOSURE_BUSY";
	vect_data.clear();
	vect_data.push_back("EXPOSURE_BUSY");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedCalibrationMode";
	prop_desc = "";
	prop_def  = "OTN_PULSE";
	vect_data.clear();
	vect_data.push_back("OTN_PULSE");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedMode";
	prop_desc = "";
	prop_def  = "SLOW";
	vect_data.clear();
	vect_data.push_back("SLOW");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedTime";
	prop_desc = "";
	prop_def  = "0";
	vect_data.clear();
	vect_data.push_back("0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedITHL";
	prop_desc = "";
	prop_def  = "0";
	vect_data.clear();
	vect_data.push_back("0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

}
//+----------------------------------------------------------------------------
//
// method : 		ImXpadClass::write_class_property
// 
// description : 	Set class description as property in database
//
//-----------------------------------------------------------------------------
void ImXpadClass::write_class_property()
{
	//	First time, check if database used
	//--------------------------------------------
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("Device specific for ImXpad detector");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("  ");
	description << str_desc;
	data.push_back(description);
		
	//	put cvs or svn location
	string	filename(classname);
	filename += "Class.cpp";
	
	// Create a string with the class ID to
	// get the string into the binary
	string	class_id(ClassId);
	
	// check for cvs information
	string	src_path(CvsPath);
	start = src_path.find("/");
	if (start!=string::npos)
	{
		end   = src_path.find(filename);
		if (end>start)
		{
			string	strloc = src_path.substr(start, end-start);
			//	Check if specific repository
			start = strloc.find("/cvsroot/");
			if (start!=string::npos && start>0)
			{
				string	repository = strloc.substr(0, start);
				if (repository.find("/segfs/")!=string::npos)
					strloc = "ESRF:" + strloc.substr(start, strloc.length()-start);
			}
			Tango::DbDatum	cvs_loc("cvs_location");
			cvs_loc << strloc;
			data.push_back(cvs_loc);
		}
	}
	// check for svn information
	else
	{
		string	src_path(SvnPath);
		start = src_path.find("://");
		if (start!=string::npos)
		{
			end = src_path.find(filename);
			if (end>start)
			{
				header = "$HeadURL: ";
				start = header.length();
				string	strloc = src_path.substr(start, (end-start));
				
				Tango::DbDatum	svn_loc("svn_location");
				svn_loc << strloc;
				data.push_back(svn_loc);
			}
		}
	}

	//	Get CVS or SVN revision tag
	
	// CVS tag
	string	tagname(TagName);
	header = "$Name: ";
	start = header.length();
	string	endstr(" $");
	
	end   = tagname.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strtag = tagname.substr(start, end-start);
		Tango::DbDatum	cvs_tag("cvs_tag");
		cvs_tag << strtag;
		data.push_back(cvs_tag);
	}
	
	// SVN tag
	string	svnpath(SvnPath);
	header = "$HeadURL: ";
	start = header.length();
	
	end   = svnpath.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strloc = svnpath.substr(start, end-start);
		
		string tagstr ("/tags/");
		start = strloc.find(tagstr);
		if ( start!=string::npos )
		{
			start = start + tagstr.length();
			end   = strloc.find(filename);
			string	strtag = strloc.substr(start, end-start-1);
			
			Tango::DbDatum	svn_tag("svn_tag");
			svn_tag << strtag;
			data.push_back(svn_tag);
		}
	}

	//	Get URL location
	string	httpServ(HttpServer);
	if (httpServ.length()>0)
	{
		Tango::DbDatum	db_doc_url("doc_url");
		db_doc_url << httpServ;
		data.push_back(db_doc_url);
	}

	//  Put inheritance
	Tango::DbDatum	inher_datum("InheritedFrom");
	vector<string> inheritance;
	inheritance.push_back("Device_4Impl");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	//--------------------------------------------
	get_db_class()->put_property(data);
}

}	// namespace
