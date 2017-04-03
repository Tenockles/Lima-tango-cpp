//=============================================================================
//
// file :        ImXpad.h
//
// description : Include for the ImXpad class.
//
// project :	Device specific for ImXpad detector
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
// copyleft :    Synchrotron SOLEIL 
//               L'Orme des merisiers - Saint Aubin
//		 BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _MAXIPIX_H
#define _MAXIPIX_H

#include <tango.h>
//using namespace Tango;

/**
 * @author	$Author:  $
 * @version	$Revision:  $
 */

 //	Add your own constant definitions here.
 //-----------------------------------------------

#include "Factory.h"

#include "lima/HwInterface.h"
#include "lima/CtControl.h"
#include "lima/CtAcquisition.h"
#include "lima/CtImage.h"

#include <yat4tango/PropertyHelper.h>
#include <imXpadInterface.h>
#include <imXpadCamera.h>

#define MAX_ATTRIBUTE_STRING_LENGTH     256
#define SOCKET_SERVER_VERSION  "3.1.5"


using namespace lima;
using namespace std;
using namespace yat4tango;

namespace ImXpad_ns
{

/**
 * Class Description:
 * 
 */

/*
 *	Device States Description:
*  Tango::FAULT :
*  Tango::INIT :
*  Tango::RUNNING :
*  Tango::STANDBY :
 */


class ImXpad: public Tango::Device_4Impl
{
public :
	//	Add your own data members here
	//-----------------------------------------


	//	Here is the Start of the automatic code generation part
	//-------------------------------------------------------------	
/**
 *	@name attributes
 *	Attribute member data.
 */
//@{
		Tango::DevString	*attr_serverVersion_read;
		Tango::DevBoolean	*attr_geometricalCorrectionFlag_read;
		Tango::DevBoolean	attr_geometricalCorrectionFlag_write;
		Tango::DevBoolean	*attr_flatFieldCorrectionFlag_read;
		Tango::DevBoolean	attr_flatFieldCorrectionFlag_write;
		Tango::DevString	*attr_calibrationFileName_read;
		Tango::DevString	*attr_acquisitionMode_read;
		Tango::DevString	attr_acquisitionMode_write;
		Tango::DevString	*attr_outputSignal_read;
		Tango::DevString	attr_outputSignal_write;
		Tango::DevString	attr_calibrationMode_write;
		Tango::DevULong	attr_time_write;
		Tango::DevULong	attr_iTHL_write;
		Tango::DevString	attr_mode_write;
//@}

/**
 * @name Device properties
 * Device properties member data.
 */
//@{
/**
 *	Host name /Adress IP of the XPAD SERVER
 */
	string	hostName;
/**
 *	Host port of the XPAD SERVER
 */
	Tango::DevLong	port;
/**
 *	
 */
	string	calibrationPath;
/**
 *	
 */
	Tango::DevBoolean	memorizedGeometricalCorrectionFlag;
/**
 *	
 */
	Tango::DevBoolean	memorizedFlatFieldCorrectionFlag;
/**
 *	
 */
	string	memorizedAcquisitionMode;
/**
 *	
 */
	string	memorizedOutputSignal;
/**
 *	
 */
	string	memorizedCalibrationMode;
/**
 *	
 */
	string	memorizedMode;
/**
 *	
 */
	Tango::DevULong	memorizedTime;
/**
 *	
 */
	Tango::DevULong	memorizedITHL;
//@}

/**
 *	@name Device properties
 *	Device property member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	ImXpad(Tango::DeviceClass *cl,string &s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	ImXpad(Tango::DeviceClass *cl,const char *s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device name
 *	@param d	Device description.
 */
	ImXpad(Tango::DeviceClass *cl,const char *s,const char *d);
//@}

/**@name Destructor
 * Only one destructor is defined for this class */
//@{
/**
 * The object destructor.
 */	
	~ImXpad() {delete_device();};
/**
 *	will be called at device destruction or at init command.
 */
	void delete_device();
//@}

	
/**@name Miscellaneous methods */
//@{
/**
 *	Initialize the device
 */
	virtual void init_device();
/**
 *	Always executed method before execution command method.
 */
	virtual void always_executed_hook();

//@}

/**
 * @name ImXpad methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for serverVersion acquisition result.
 */
	virtual void read_serverVersion(Tango::Attribute &attr);
/**
 *	Extract real attribute values for geometricalCorrectionFlag acquisition result.
 */
	virtual void read_geometricalCorrectionFlag(Tango::Attribute &attr);
/**
 *	Write geometricalCorrectionFlag attribute values to hardware.
 */
	virtual void write_geometricalCorrectionFlag(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for flatFieldCorrectionFlag acquisition result.
 */
	virtual void read_flatFieldCorrectionFlag(Tango::Attribute &attr);
/**
 *	Write flatFieldCorrectionFlag attribute values to hardware.
 */
	virtual void write_flatFieldCorrectionFlag(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for calibrationFileName acquisition result.
 */
	virtual void read_calibrationFileName(Tango::Attribute &attr);
/**
 *	Extract real attribute values for acquisitionMode acquisition result.
 */
	virtual void read_acquisitionMode(Tango::Attribute &attr);
/**
 *	Write acquisitionMode attribute values to hardware.
 */
	virtual void write_acquisitionMode(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for outputSignal acquisition result.
 */
	virtual void read_outputSignal(Tango::Attribute &attr);
/**
 *	Write outputSignal attribute values to hardware.
 */
	virtual void write_outputSignal(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for calibrationMode acquisition result.
 */
	virtual void read_calibrationMode(Tango::Attribute &attr);
/**
 *	Write calibrationMode attribute values to hardware.
 */
	virtual void write_calibrationMode(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for time acquisition result.
 */
	virtual void read_time(Tango::Attribute &attr);
/**
 *	Write time attribute values to hardware.
 */
	virtual void write_time(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for iTHL acquisition result.
 */
	virtual void read_iTHL(Tango::Attribute &attr);
/**
 *	Write iTHL attribute values to hardware.
 */
	virtual void write_iTHL(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for mode acquisition result.
 */
	virtual void read_mode(Tango::Attribute &attr);
/**
 *	Write mode attribute values to hardware.
 */
	virtual void write_mode(Tango::WAttribute &attr);
/**
 *	Read/Write allowed for serverVersion attribute.
 */
	virtual bool is_serverVersion_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for geometricalCorrectionFlag attribute.
 */
	virtual bool is_geometricalCorrectionFlag_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for flatFieldCorrectionFlag attribute.
 */
	virtual bool is_flatFieldCorrectionFlag_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for calibrationFileName attribute.
 */
	virtual bool is_calibrationFileName_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for acquisitionMode attribute.
 */
	virtual bool is_acquisitionMode_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for outputSignal attribute.
 */
	virtual bool is_outputSignal_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for calibrationMode attribute.
 */
	virtual bool is_calibrationMode_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for time attribute.
 */
	virtual bool is_time_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for iTHL attribute.
 */
	virtual bool is_iTHL_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for mode attribute.
 */
	virtual bool is_mode_allowed(Tango::AttReqType type);
/**
 *	Execution allowed for StartCalibration command.
 */
	virtual bool is_StartCalibration_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for SaveCalibrationFile command.
 */
	virtual bool is_SaveCalibrationFile_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for LoadCalibrationFile command.
 */
	virtual bool is_LoadCalibrationFile_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for CreateWhiteImage command.
 */
	virtual bool is_CreateWhiteImage_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for ChooseWhiteImage command.
 */
	virtual bool is_ChooseWhiteImage_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for GetWhiteImagesList command.
 */
	virtual bool is_GetWhiteImagesList_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for DeleteWhiteImage command.
 */
	virtual bool is_DeleteWhiteImage_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Abort command.
 */
	virtual bool is_Abort_allowed(const CORBA::Any &any);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();
/**
 * Start the calibration of detector <br>
 *	@exception DevFailed
 */
	void	start_calibration();
/**
 * Save the calibration already done through the StartCalibartion in a file
 *	@param	argin	Target calibration file name
 *	@exception DevFailed
 */
	void	save_calibration_file(Tango::DevString);
/**
 * Load a calibration file<br>
 *	@param	argin	The calibration File Name 
 *	@exception DevFailed
 */
	void	load_calibration_file(Tango::DevString);
/**
 * Create the White image
 *	@param	argin	White image name
 *	@exception DevFailed
 */
	void	create_white_image(Tango::DevString);
/**
 * Select the white image
 *	@param	argin	White image name
 *	@exception DevFailed
 */
	void	choose_white_image(Tango::DevString);
/**
 * Display the list of available White images
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*get_white_images_list();
/**
 * Delete the white image
 *	@param	argin	White image name
 *	@exception DevFailed
 */
	void	delete_white_image(Tango::DevString);
/**
 * Abort current process ...
 *	@exception DevFailed
 */
	void	abort();

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

	//	Here is the end of the automatic code generation part
	//-------------------------------------------------------------	

	// return true if the device is correctly initialized in init_device
	bool is_device_initialized(){return m_is_device_initialized;};

protected :	
	//	Add your own data members here
	//-----------------------------------------
    //state & status stuff
    bool                        m_is_device_initialized ;
    stringstream                m_status_message;
    //lima OBJECTS
    imXpad::Interface* m_hw;
    CtControl*          m_ct;
    imXpad::Camera*    m_camera;	
	std::string 		m_calibration_mode;
    std::string 		m_acquisition_mode;
    imXpad::Camera::XpadAcquisitionMode::AcquisitionMode m_acquisition_mode_enum;
	std::string 		m_mode;	
    std::string 		m_output_signal;
    imXpad::Camera::XpadOutputSignal::OutputSignal m_output_signal_enum;
	
};

}	// namespace_ns

#endif	// _MAXIPIX_H
