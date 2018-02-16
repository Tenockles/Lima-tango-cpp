//=============================================================================
//
// file :        LimaDetector.h
//
// description : Include for the LimaDetector class.
//
// project :	LimaDetector
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
//         BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//          This file is generated by POGO
//    (Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _LimaDetector_H
#define _LimaDetector_H

#include "Factory.h"
//- Tango
#include <tango.h>

//undef some Mx library CONSTANTS, otherwise compilation errors  with Yat/utils/Loging.h enum ELogLevel
#undef LOG_INFO
#undef LOG_EMERG
#undef LOG_ALERT
#undef LOG_CRIT
#undef LOG_ERR
#undef LOG_WARNING
#undef LOG_NOTICE
#undef LOG_INFO
#undef LOG_DEBUG

//- YAT/YAT4TANGO
#include <yat/memory/SharedPtr.h>
#include <yat4tango/PropertyHelper.h>
#include <yat4tango/InnerAppender.h>
#include <yat4tango/YatLogAdapter.h>
#include <yat4tango/DynamicInterfaceManager.h>
#include <yat4tango/DeviceInfo.h>

//- NEXUSCPP
#include <nexuscpp/nexuscpp.h>

//- STL 
#include <algorithm>
#include <string>
#include <iostream>

//- LIMA
#include "lima/Debug.h"
#include "lima/HwInterface.h"
#include "lima/CtControl.h"
#include "lima/CtAcquisition.h"
#include "lima/CtAccumulation.h"
#include "lima/CtSaving.h"
#include "lima/CtBuffer.h"
#include "lima/CtImage.h"
#include "processlib/Data.h"
#include "lima/CtVideo.h"
#include "lima/CtShutter.h"
#include "lima/CtEvent.h"



//- This Device
#include "AcquisitionTask.h"

using namespace lima;
using namespace std;

/**
 * @author    $Author:  $
 * @version    $Revision:  $
 */

//    Add your own constant definitions here.
//-----------------------------------------------

const size_t MAX_ATTRIBUTE_STRING_LENGTH = 256;
const size_t LOG_BUFFER_DEPTH = 1024;

namespace LimaDetector_ns
{


/**
 * Class Description:
 * Generic device intented to manage Detector via Lima Framework
 */

/*
 *	Device States Description:
*  Tango::INIT :     Error occured at the initialization of the device.<br>
 *                    It is mandatory to fix the errors and run the [ Init ] command of the LimaDetector device.<br>
 *                    The [ Snap ] command IS NOT available.<br>
 *                    The [ Start ] command IS NOT available.<br>
 *                    The [ Stop ] command IS NOT available.<br>
 *                    The [ SetRoi ] command IS NOT available.<br>
 *                    The [ SetBinning ] command IS NOT available.<br>
*  Tango::STANDBY :  The Device is Waiting for a user request.<br>
 *                    The [ Snap ] command IS available.<br>
 *                    The [ Start ] command IS available.<br>
 *                    The [ Stop ] command IS available.<br>
 *                    The [ SetRoi ] command IS available.<br>
 *                    The [ SetBinning ] command IS available.<br>
*  Tango::FAULT :    Acquisition/Settings of the detector encounter a problem.<BR>
 *                    The [ Snap ] command IS available.<br>
 *                    The [ Start ] command IS available.<br>
 *                    The [ Stop ] command IS available.<br>
 *                    The [ SetRoi ] command IS available.<br>
 *                    The [ SetBinning ] command IS available.<br>
*  Tango::RUNNING :  The Acquisition is in Progress.<br>
 *                    The [ Snap ] command IS NOT available.<br>
 *                    The [ Start ] command IS NOT available.<br>
 *                    The [ Stop ] command IS available.<br>
 *                    The [ SetRoi ] command IS NOT available.<br>
 *                    The [ SetBinning ] command IS NOT available.<br>
 */


class LimaDetector : public Tango::Device_4Impl
{
public:
    //    Add your own data members here
    //-----------------------------------------

    /* used for dynamic attributes */
    Tango::DevString	*attr_shutterMode_read;
    Tango::DevString	attr_shutterMode_write;
    Tango::DevString    *attr_shutterState_read;
    Tango::DevDouble    *attr_shutterOpenTime_read;
    Tango::DevDouble    attr_shutterOpenTime_write;
    Tango::DevDouble    *attr_shutterCloseTime_read;
    Tango::DevDouble    attr_shutterCloseTime_write;
    Tango::DevDouble    *attr_exposureAccTime_read;
    Tango::DevDouble    attr_exposureAccTime_write;
    Tango::DevULong    *attr_currentAccFrame_read;



    //    Here is the Start of the automatic code generation part
    //-------------------------------------------------------------    
    /**
     *    @name attributes
     *    Attribute member data.
     */
    //@{
		Tango::DevString	*attr_detectorDescription_read;
		Tango::DevString	*attr_detectorType_read;
		Tango::DevString	*attr_detectorModel_read;
		Tango::DevUShort	*attr_detectorWidthMax_read;
		Tango::DevUShort	*attr_detectorHeightMax_read;
		Tango::DevUShort	*attr_detectorPixelDepth_read;
		Tango::DevUShort	*attr_binnedWidthMax_read;
		Tango::DevUShort	*attr_binnedHeightMax_read;
		Tango::DevString	*attr_triggerMode_read;
		Tango::DevString	attr_triggerMode_write;
		Tango::DevString	*attr_acquisitionMode_read;
		Tango::DevString	attr_acquisitionMode_write;
		Tango::DevDouble	*attr_exposureTime_read;
		Tango::DevDouble	attr_exposureTime_write;
		Tango::DevDouble	*attr_latencyTime_read;
		Tango::DevDouble	attr_latencyTime_write;
		Tango::DevDouble	*attr_frameRate_read;
		Tango::DevDouble	attr_frameRate_write;
		Tango::DevUShort	*attr_roiX_read;
		Tango::DevUShort	*attr_roiY_read;
		Tango::DevUShort	*attr_roiWidth_read;
		Tango::DevUShort	*attr_roiHeight_read;
		Tango::DevUShort	*attr_binningH_read;
		Tango::DevUShort	*attr_binningV_read;
		Tango::DevLong	*attr_nbFrames_read;
		Tango::DevLong	attr_nbFrames_write;
		Tango::DevULong	*attr_currentFrame_read;
		Tango::DevBoolean	*attr_fileGeneration_read;
		Tango::DevBoolean	attr_fileGeneration_write;
		Tango::DevString	*attr_fileFormat_read;
		Tango::DevString	attr_fileFormat_write;
		Tango::DevString	*attr_filePrefix_read;
		Tango::DevString	attr_filePrefix_write;
		Tango::DevString	*attr_fileTargetPath_read;
		Tango::DevString	attr_fileTargetPath_write;
		Tango::DevLong	*attr_fileNbFrames_read;
		Tango::DevLong	attr_fileNbFrames_write;
//@}

    /**
     * @name Device properties
     * Device properties member data.
     */
    //@{
/**
 *	Allows calling automatically the "Start" command when:<br>
 *	- The device starts.<br>
 *	- After calling the "Init" command.
 */
	Tango::DevBoolean	autoStartVideo;
/**
 *	Memorize the "full frame" automatically at the call of "ResetRoi" :<br>
 *	[default = false]
 */
	Tango::DevBoolean	autoSaveResetRoi;
/**
 *	Detector user-defined text to identify the engine.
 */
	string	detectorDescription;
/**
 *	Define the type of the connected Detector .<BR>
 *	Availables types :<BR>
 *	- AndorCCD<BR>
 *	- AviexCCD<br>
 *	- BaslerCCD<BR>
 *	- Eiger<br>
 *	- Hamamatsu<br>
 *	- ImXpad<br>
 *	- MarCCD<BR>
 *	- Maxipix <BR>
 *	- Merlin <BR>
 *	- Pco<BR>
 *	- PerkinElmer<BR>
 *	- PilatusPixelDetector<BR>
 *	- ProsilicaCCD<BR>
 *	- PrincetonCCD<BR>
 *	- SimulatorCCD<BR>
 *	- UviewCCD<BR>
 *	- XpadPixelDetector<BR>
 *	
 *	
 */
	string	detectorType;
/**
 *	Define the pixel depth of the detector : <br>
 *	Availables values : <br>
 *	- 8 <br>
 *	- 12<br>
 *	- 16<br>
 *	- 16S<br>
 *	- 24<br>
 *	- 24S<br>
 *	- 32<br>
 *	- 32S<br>
 */
	string	detectorPixelDepth;
/**
 *	Special type of the image attribute for display and saving (NOT_USED, FLOAT, ...)
 */
	string	specialDisplayType;
/**
 *	Define the format of video stream: <br>
 *	Availables values :<br>
 *	- NONE<BR>
 *	- Y8 <BR>
 *	- Y16<BR>
 *	- Y32<BR>
 *	- Y64<BR>
 *	- RGB555<BR>
 *	- RGB565<BR>
 *	- RGB24<BR>
 *	- RGB32<BR>
 *	- BGR24<BR>
 *	- BGR32<BR>
 *	- BAYER_RG8<BR>
 *	- BAYER_RG16<BR>
 *	- I420<BR>
 *	- YUV411<BR>
 *	- YUV422<BR>
 *	- YUV444<BR>
 *	<br>
 *	Nota:<br>
 *	This property is usefull only for detectors having video capabilities.<BR>
 *	Otherwise, use only NONE.
 */
	string	detectorVideoMode;
/**
 *	Choose the source of Data given to the image attribute :<br>
 *	- VIDEO : use ctVideo->LastImage()<br>
 *	- ACQUISITION : use ctControl->ReadImage()
 */
	string	imageSource;
/**
 *	Define ImageOpMode for Roi/Binning/etc...  :<br>
 *	Availables values :<br>
 *	- HardOnly<br>
 *	- SoftOnly<br>
 *	- HardAndSoft<br>
 */
	string	imageOpMode;
/**
 *	Define the format of image files :<BR>
 *	Availables values :<br>
 *	- EDF<BR>
 *	- NXS<BR>
 *	- RAW<BR>
 *	
 */
	string	fileFormat;
/**
 *	Define the prefix used for the image files name.
 */
	string	filePrefix;
/**
 *	Define the pattern of the index used for image files names.<br>
 *	<br>
 *	Nota :<br>
 *	%04d mean that file name index will be end with exactly  4 digits filled by '0' if necessary .<br>
 *	
 */
	string	fileIndexPattern;
/**
 *	Define the Path where Files will be generated, only when savingFile is checked.
 *	
 *	
 */
	string	fileTargetPath;
/**
 *	Define the nombre of frames to push in each saving file.
 */
	Tango::DevLong	fileNbFrames;
/**
 *	Define the File manged Mode :<br>
 *	- HARDWARE : <br>
 *	- SOFTWARE :
 */
	string	fileManagedMode;
/**
 *	Available only for Nexus format : Fix the SetWriteMode(). <br>
 *	Available values :<br>
 *	- IMMEDIATE<br>
 *	- SYNCHRONOUS<br>
 *	- DELAYED
 */
	string	fileWriteMode;
/**
 *	Available only for Nexus format : Fix the SetDataItemMemoryMode().<br>
 *	Available values :<br>
 *	- COPY<br>
 *	- NO_COPY
 */
	string	fileMemoryMode;
/**
 *	Define wether the timestamp is requested in the Nexus file or not<br>
 */
	Tango::DevBoolean	fileTimestampEnabled;
/**
 *	Define modules that we need to have some debug traces.<BR>
 *	Availables values :<BR>
 *	- None<BR>
 *	- Hardware<BR>
 *	- Control<BR>
 *	- Common<BR>
 *	- Camera<BR>
 */
	vector<string>	debugModules;
/**
 *	Define Lima verbose level of traces.<BR>
 *	Availables values :<BR>
 *	- Fatal<BR>
 *	- Error<BR>
 *	- Warning<BR>
 *	- Trace<BR>
 *	- Funct<BR>
 *	- Param<BR>
 *	- Return<BR>
 *	- Always<BR>
 */
	vector<string>	debugLevels;
/**
 *	Define Lima traces format.<BR>
 *	Availables values :<BR>
 *	- DateTime<BR>
 *	- Thread<BR>
 *	- Module<BR>
 *	- Obj<BR>
 *	- Funct<BR>
 *	- FileLine<BR>
 */
	vector<string>	debugFormats;
/**
 *	Define the Percent of Memory reserved to Lima buffer control.<br>
 *	BufferMaxMemoryPercent = 70, allow a Memory of 1.4 Go. (Default)<br>
 *	BufferMaxMemoryPercent = 100, allow a Memory of 2 Go. (Maximum)
 */
	Tango::DevUShort	expertBufferMaxMemoryPercent;
/**
 *	Defines the number of threads dedicated to process images in the PricessLib
 */
	Tango::DevUShort	expertNbPoolThread;
/**
 *	If enabled, a call of 'Prepare' command is necessary before each 'Start' command.
 */
	Tango::DevBoolean	expertUsePrepareCmd;
/**
 *	Memorize/Define the Region of Interest of the Acquisition: <br>
 *	origin X<br>
 *	origin Y<br>
 *	Width<br>
 *	Height<br>
 *	<br>
 *	Nota:<br>
 *	if any roi value is <0, then we consider all detector area as Roi.
 */
	vector<short>	memorizedRoi;
/**
 *	Memorize/Define the Binning Horizontal value of the Acquisition<br>
 *	
 */
	Tango::DevUShort	memorizedBinningH;
/**
 *	Memorize/Define the Binning Vertical value of the Acquisition<br>
 */
	Tango::DevUShort	memorizedBinningV;
/**
 *	Memorize/Define the acquisitionMode attribute at Init device<br>
 *	Availables values :<br>
 *	- SINGLE<br>
 *	- ACCUMULATION<br>
 */
	string	memorizedAcquisitionMode;
/**
 *	Memorize/Define the triggerMode attribute at Init device<br>
 *	Availables values :<br>
 *	- INTERNAL_SINGLE<br>
 *	- EXTERNAL_SINGLE<br>
 *	- EXTERNAL_MULTI<br>
 *	- EXTERNAL_GATE<br>
 *	- INTERNAL_MULTI<br>
 *	- EXTERNAL_START_STOP<br>
 *	- EXTERNAL_READOUT<br>
 */
	string	memorizedTriggerMode;
/**
 *	Memorize/Define the shutterMode attribute at Init device<br>
 *	Availables values :<br>
 *	- MANUAL<br>
 *	- AUTO_FRAME<br>
 *	- AUTO_SEQUENCE
 */
	string	memorizedShutterMode;
/**
 *	Memorize/Define the shutterOpenTime attribute at Init device<br>
 */
	Tango::DevDouble	memorizedShutterOpenTime;
/**
 *	Memorize/Define the shutterCloseTime attribute at Init device<br>
 */
	Tango::DevDouble	memorizedShutterCloseTime;
/**
 *	Memorize/Define the exposureTime attribute  at Init device<br>
 *	
 */
	Tango::DevDouble	memorizedExposureTime;
/**
 *	Memorize/Define the exposureAccTime attribute at Init device<br>
 */
	Tango::DevDouble	memorizedExposureAccTime;
/**
 *	Memorize/Define the latencyTime attribute  at Init device<br>
 */
	Tango::DevDouble	memorizedLatencyTime;
/**
 *	Memorize/Define the nbFrames attribute  at Init device<br>
 */
	Tango::DevLong	memorizedNbFrames;
/**
 *	Memorize/Define the fileGeneration attribute at Init device<br>
 */
	Tango::DevBoolean	memorizedFileGeneration;
/**
 *	
 */
	Tango::DevLong	memorizedFileNbFrames;
/**
 *	
 */
	string	spoolID;
//@}

    /**
     *    @name Device properties
     *    Device property member data.
     */
    //@{
    //@}

    /**@name Constructors
     * Miscellaneous constructors */
    //@{
    /**
     * Constructs a newly allocated Command object.
     *
     *    @param cl    Class.
     *    @param s     Device Name
     */
    LimaDetector(Tango::DeviceClass *cl, string &s);
    /**
     * Constructs a newly allocated Command object.
     *
     *    @param cl    Class.
     *    @param s     Device Name
     */
    LimaDetector(Tango::DeviceClass *cl, const char *s);
    /**
     * Constructs a newly allocated Command object.
     *
     *    @param cl    Class.
     *    @param s     Device name
     *    @param d    Device description.
     */
    LimaDetector(Tango::DeviceClass *cl, const char *s, const char *d);
    //@}

    /**@name Destructor
     * Only one destructor is defined for this class */
    //@{
    /**
     * The object destructor.
     */
    ~LimaDetector()
    {
        delete_device();
    };
    /**
     *    will be called at device destruction or at init command.
     */
    void delete_device();
    //@}


    /**@name Miscellaneous methods */
    //@{
    /**
     *    Initialize the device
     */
    virtual void init_device();
    /**
     *    Always executed method before execution command method.
     */
    virtual void always_executed_hook();

//@}

/**
 * @name LimaDetector methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for detectorDescription acquisition result.
 */
	virtual void read_detectorDescription(Tango::Attribute &attr);
/**
 *	Extract real attribute values for detectorType acquisition result.
 */
	virtual void read_detectorType(Tango::Attribute &attr);
/**
 *	Extract real attribute values for detectorModel acquisition result.
 */
	virtual void read_detectorModel(Tango::Attribute &attr);
/**
 *	Extract real attribute values for detectorWidthMax acquisition result.
 */
	virtual void read_detectorWidthMax(Tango::Attribute &attr);
/**
 *	Extract real attribute values for detectorHeightMax acquisition result.
 */
	virtual void read_detectorHeightMax(Tango::Attribute &attr);
/**
 *	Extract real attribute values for detectorPixelDepth acquisition result.
 */
	virtual void read_detectorPixelDepth(Tango::Attribute &attr);
/**
 *	Extract real attribute values for binnedWidthMax acquisition result.
 */
	virtual void read_binnedWidthMax(Tango::Attribute &attr);
/**
 *	Extract real attribute values for binnedHeightMax acquisition result.
 */
	virtual void read_binnedHeightMax(Tango::Attribute &attr);
/**
 *	Extract real attribute values for triggerMode acquisition result.
 */
	virtual void read_triggerMode(Tango::Attribute &attr);
/**
 *	Write triggerMode attribute values to hardware.
 */
	virtual void write_triggerMode(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for acquisitionMode acquisition result.
 */
	virtual void read_acquisitionMode(Tango::Attribute &attr);
/**
 *	Write acquisitionMode attribute values to hardware.
 */
	virtual void write_acquisitionMode(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for exposureTime acquisition result.
 */
	virtual void read_exposureTime(Tango::Attribute &attr);
/**
 *	Write exposureTime attribute values to hardware.
 */
	virtual void write_exposureTime(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for latencyTime acquisition result.
 */
	virtual void read_latencyTime(Tango::Attribute &attr);
/**
 *	Write latencyTime attribute values to hardware.
 */
	virtual void write_latencyTime(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for frameRate acquisition result.
 */
	virtual void read_frameRate(Tango::Attribute &attr);
/**
 *	Write frameRate attribute values to hardware.
 */
	virtual void write_frameRate(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for roiX acquisition result.
 */
	virtual void read_roiX(Tango::Attribute &attr);
/**
 *	Extract real attribute values for roiY acquisition result.
 */
	virtual void read_roiY(Tango::Attribute &attr);
/**
 *	Extract real attribute values for roiWidth acquisition result.
 */
	virtual void read_roiWidth(Tango::Attribute &attr);
/**
 *	Extract real attribute values for roiHeight acquisition result.
 */
	virtual void read_roiHeight(Tango::Attribute &attr);
/**
 *	Extract real attribute values for binningH acquisition result.
 */
	virtual void read_binningH(Tango::Attribute &attr);
/**
 *	Extract real attribute values for binningV acquisition result.
 */
	virtual void read_binningV(Tango::Attribute &attr);
/**
 *	Extract real attribute values for nbFrames acquisition result.
 */
	virtual void read_nbFrames(Tango::Attribute &attr);
/**
 *	Write nbFrames attribute values to hardware.
 */
	virtual void write_nbFrames(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for currentFrame acquisition result.
 */
	virtual void read_currentFrame(Tango::Attribute &attr);
/**
 *	Extract real attribute values for fileGeneration acquisition result.
 */
	virtual void read_fileGeneration(Tango::Attribute &attr);
/**
 *	Write fileGeneration attribute values to hardware.
 */
	virtual void write_fileGeneration(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for fileFormat acquisition result.
 */
	virtual void read_fileFormat(Tango::Attribute &attr);
/**
 *	Write fileFormat attribute values to hardware.
 */
	virtual void write_fileFormat(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for filePrefix acquisition result.
 */
	virtual void read_filePrefix(Tango::Attribute &attr);
/**
 *	Write filePrefix attribute values to hardware.
 */
	virtual void write_filePrefix(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for fileTargetPath acquisition result.
 */
	virtual void read_fileTargetPath(Tango::Attribute &attr);
/**
 *	Write fileTargetPath attribute values to hardware.
 */
	virtual void write_fileTargetPath(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for fileNbFrames acquisition result.
 */
	virtual void read_fileNbFrames(Tango::Attribute &attr);
/**
 *	Write fileNbFrames attribute values to hardware.
 */
	virtual void write_fileNbFrames(Tango::WAttribute &attr);
/**
 *	Read/Write allowed for detectorDescription attribute.
 */
	virtual bool is_detectorDescription_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for detectorType attribute.
 */
	virtual bool is_detectorType_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for detectorModel attribute.
 */
	virtual bool is_detectorModel_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for detectorWidthMax attribute.
 */
	virtual bool is_detectorWidthMax_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for detectorHeightMax attribute.
 */
	virtual bool is_detectorHeightMax_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for detectorPixelDepth attribute.
 */
	virtual bool is_detectorPixelDepth_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for binnedWidthMax attribute.
 */
	virtual bool is_binnedWidthMax_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for binnedHeightMax attribute.
 */
	virtual bool is_binnedHeightMax_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for triggerMode attribute.
 */
	virtual bool is_triggerMode_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for acquisitionMode attribute.
 */
	virtual bool is_acquisitionMode_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for exposureTime attribute.
 */
	virtual bool is_exposureTime_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for latencyTime attribute.
 */
	virtual bool is_latencyTime_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for frameRate attribute.
 */
	virtual bool is_frameRate_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for roiX attribute.
 */
	virtual bool is_roiX_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for roiY attribute.
 */
	virtual bool is_roiY_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for roiWidth attribute.
 */
	virtual bool is_roiWidth_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for roiHeight attribute.
 */
	virtual bool is_roiHeight_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for binningH attribute.
 */
	virtual bool is_binningH_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for binningV attribute.
 */
	virtual bool is_binningV_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for nbFrames attribute.
 */
	virtual bool is_nbFrames_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for currentFrame attribute.
 */
	virtual bool is_currentFrame_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for fileGeneration attribute.
 */
	virtual bool is_fileGeneration_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for fileFormat attribute.
 */
	virtual bool is_fileFormat_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for filePrefix attribute.
 */
	virtual bool is_filePrefix_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for fileTargetPath attribute.
 */
	virtual bool is_fileTargetPath_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for fileNbFrames attribute.
 */
	virtual bool is_fileNbFrames_allowed(Tango::AttReqType type);
/**
 *	Execution allowed for Prepare command.
 */
	virtual bool is_Prepare_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Snap command.
 */
	virtual bool is_Snap_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Start command.
 */
	virtual bool is_Start_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Stop command.
 */
	virtual bool is_Stop_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for SetROI command.
 */
	virtual bool is_SetROI_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for SetBinning command.
 */
	virtual bool is_SetBinning_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for ResetBinning command.
 */
	virtual bool is_ResetBinning_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for ResetROI command.
 */
	virtual bool is_ResetROI_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for GetAttributeAvailableValues command.
 */
	virtual bool is_GetAttributeAvailableValues_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for GetAvailableCapabilities command.
 */
	virtual bool is_GetAvailableCapabilities_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for ResetFileIndex command.
 */
	virtual bool is_ResetFileIndex_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for ReloadROI command.
 */
	virtual bool is_ReloadROI_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for GetDataStreams command.
 */
	virtual bool is_GetDataStreams_allowed(const CORBA::Any &any);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();
/**
 * Prepare the acquisition (Apply parameters like bin/roi/exposure/.. & allocate buffers & ...)
 *	@exception DevFailed
 */
	void	prepare();
/**
 * Starts the acquisition of a number of frames equal to  'nbFrames' attribute value.
 *	@exception DevFailed
 */
	void	snap();
/**
 * Starts a "video/live" acquisition of an infinite number of frames.<br>
 *	In this mode, In this mode, the frame loss is permitted and not signaled as FAULT in the device state<br>
 *	It is not allowed to generate files in this mode.
 *	@exception DevFailed
 */
	void	start();
/**
 * Stop current acquisition/video.
 *	@exception DevFailed
 */
	void	stop();
/**
 * Define a Region of Interest . (OriginX, OriginY, Width, Height)<br>
 *	Roi and Binning are associated.
 *	@param	argin	[origin_x, origin_y, width, height]
 *	@exception DevFailed
 */
	void	set_roi(const Tango::DevVarULongArray *);
/**
 * Define a binning Horizontal (x) & Vertical (y) for the image. <br>
 *	@param	argin	
 *	@exception DevFailed
 */
	void	set_binning(const Tango::DevVarULongArray *);
/**
 * Use the binning Hrizontal=1 & Verical=1 of the detector according to current Roi.
 *	@exception DevFailed
 */
	void	reset_binning();
/**
 * Use the full frame of the detector according to current Binning.
 *	@exception DevFailed
 */
	void	reset_roi();
/**
 * Return a list of string containing all available values of a DevString attribute.
 *	@param	argin	Attribute name
 *	@return	List of strings containing the available values
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*get_attribute_available_values(Tango::DevString);
/**
 * Return a list of string containing all available capabilitiesof the detector :<br>
 *	- Roi<br>
 *	- Binning<br>
 *	- Trigger<br>
 *	- Shutter<br>
 *	- Event Errors<br>
 *	- ...<br>
 *	@return	The list of available capabilities
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*get_available_capabilities();
/**
 * Reset the file index
 *	@exception DevFailed
 */
	void	reset_file_index();
/**
 * This command allows reloading the last ROI values set using the SetROI command.
 *	@exception DevFailed
 */
	void	reload_roi();
/**
 * Returns the flyscan data streams associated with this device.
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*get_data_streams();

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

    //    Here is the end of the automatic code generation part
    //-------------------------------------------------------------    
    ///generics methods to create a tango dynamic attribute
    template <class F1, class F2>
    void create_attribute(std::string name,
         int data_type,
         Tango::AttrDataFormat data_format,
         Tango::AttrWriteType access_type,
         Tango::DispLevel disp_level,
         const std::string& unit,
         const std::string& format,
         const std::string& desc,
         F1 read_callback,
         F2 write_callback);

    ///generic method to create a tango dynamic command
    template <class F1>
    void create_command(std::string name,
         long in_type,
         long out_type,
         Tango::DispLevel disp_level,
         F1 execute_callback);

    // method for tango dyn attributes WHEN no read part is available - NULL
    void read_callback_null(yat4tango::DynamicAttributeReadCallbackData& cbd)
    {
     /*nop*/
    }

    // method for tango dyn attributes WHEN no write part is available - NULL
    void write_callback_null(yat4tango::DynamicAttributeWriteCallbackData& cbd)
    {
     /*nop*/
    }

    //image dynamic attribute management
    void    add_image_dynamic_attribute(void);
    void    read_image_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);

    //sutter dynamic attributes management
    void    add_shutter_dynamic_attributes(void);
    void    execute_open_shutter_callback (yat4tango::DynamicCommandExecuteCallbackData& cbd);
    void    execute_close_shutter_callback (yat4tango::DynamicCommandExecuteCallbackData& cbd);

    void    read_shutterMode_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);
    void    write_shutterMode_callback(yat4tango::DynamicAttributeWriteCallbackData& cbd);

    void    read_shutterOpenTime_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);
    void    write_shutterOpenTime_callback(yat4tango::DynamicAttributeWriteCallbackData& cbd);

    void    read_shutterCloseTime_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);
    void    write_shutterCloseTime_callback(yat4tango::DynamicAttributeWriteCallbackData& cbd);

    void    read_shutterState_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);
    
    void    read_exposureAccTime_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);
    void    write_exposureAccTime_callback(yat4tango::DynamicAttributeWriteCallbackData& cbd);
    
    void    read_currentAccFrame_callback(yat4tango::DynamicAttributeReadCallbackData& cbd);    

    void    create_log_info_attributes(void);    
    void    delete_log_info_attributes(void);        
    void    configure_available_trigger_mode(void);
    void    configure_image_type(void);
    void    configure_video_mode(void);    
    void    configure_saving_parameters(void); 
    void    configure_roi(void); 
    void    configure_binning(void); 
    void    configure_image_op_mode(void);    
    void    configure_attributes_hardware_at_init(void);
    
    // return true if the device is correctly initialized in init_device
    bool    is_device_initialized()
    {
        return m_is_device_initialized;
    };


protected:
    //    Add your own data members here
    //-----------------------------------------

    //Create Yat::task to manage device Start/Snap/Stop commands
    bool                create_acquisition_task(void);

    //print parameters acquisition
    void                print_acq_conf();

    //get the last frame number acquired
    long long           get_last_image_counter(void);

    //- state & status stuff
    bool                                m_is_device_initialized ;
    stringstream                        m_status_message;
    //- 
    static int                          m_init_count;		//indicate when the construction of "generic" device is completed.

    //- LIMA objects
    lima::HwInterface*                  m_hw;				//object to the generic interface of camera's
    lima::CtControl*                    m_ct;    			//object to Lima, the MAIN object
    lima::CtSaving::Parameters          m_saving_par;		//struct holding parameters used when saving image in a file (NXS, EDF, ...)
    string                              m_trigger_mode; 	//trigger mode name 	(INTERNAL_SINGLE, EXTERNAL_SINGLE, EXTERNAL_MULTI, EXTERNAL_GATE, INTERNAL_MULTI, EXTERNAL_START_STOP, EXTERNAL_READOUT)
    string                              m_shutter_mode; 	//shutter mode name 	(MANUAL, AUTO_FRAME, AUTO_SEQUENCE)
    string                              m_acquisition_mode;	//aquisition mode name 	(SINGLE, ACCUMULATION) nota: imageType is forced to 32 bits in ACCUMULATION MODE
    string                              m_saving_options;
    string                              m_file_format;      //file format name 	(NXS,EDF,HDF5,RAW)

    //- yat4tango::DeviceTask object : manage device Start/Snap/Stop commands
    yat::SharedPtr<AcquisitionTask>     m_acquisition_task;
    AcquisitionTask::AcqConfig          m_acq_conf;

	//-
	std::vector<std::string>			m_trig_mode_list;
	std::string							m_trig_mode_list_str;

    //- yat4tango Dynamic attributes & commands
    yat4tango::DynamicInterfaceManager	m_dim;

} ;

}    // namespace_ns


///////////////////////////////////////////////////////////////////////////////
//// INCLUDE TEMPLATE IMPLEMENTAION
///////////////////////////////////////////////////////////////////////////////
#include "LimaDetector.hpp"

#endif    // _LimaDetector_H
