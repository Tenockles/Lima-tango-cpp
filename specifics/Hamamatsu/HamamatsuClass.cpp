static const char *ClassId    = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL: $";
static const char *HttpServer = "http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/";
//+=============================================================================
//
// file :        HamamatsuClass.cpp
//
// description : C++ source for the HamamatsuClass. A singleton
//               class derived from DeviceClass. It implements the
//               command list and all properties and methods required
//               by the Hamamatsu once per process.
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

#include <Hamamatsu.h>
#include <HamamatsuClass.h>


//+----------------------------------------------------------------------------
/**
 *	Create HamamatsuClass singleton and return it in a C function for Python usage
 */
//+----------------------------------------------------------------------------
extern "C" {
#ifdef WIN32

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_Hamamatsu_class(const char *name) {
		return Hamamatsu_ns::HamamatsuClass::init(name);
	}
}


namespace Hamamatsu_ns
{


//
//----------------------------------------------------------------
//	Initialize pointer for singleton pattern
//----------------------------------------------------------------
//
HamamatsuClass *HamamatsuClass::_instance = NULL;

//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::HamamatsuClass(string &s)
// 
// description : 	constructor for the HamamatsuClass
//
// in : - s : The class name
//
//-----------------------------------------------------------------------------
HamamatsuClass::HamamatsuClass(string &s):DeviceClass(s)
{

	cout2 << "Entering HamamatsuClass constructor" << endl;
	set_default_property();
	get_class_property();
	write_class_property();
	
	cout2 << "Leaving HamamatsuClass constructor" << endl;

}
//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::~HamamatsuClass()
// 
// description : 	destructor for the HamamatsuClass
//
//-----------------------------------------------------------------------------
HamamatsuClass::~HamamatsuClass()
{
	_instance = NULL;
}

//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::instance
// 
// description : 	Create the object if not already done. Otherwise, just
//			return a pointer to the object
//
// in : - name : The class name
//
//-----------------------------------------------------------------------------
HamamatsuClass *HamamatsuClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new HamamatsuClass(s);
		}
		catch (bad_alloc)
		{
			throw;
		}		
	}		
	return _instance;
}

HamamatsuClass *HamamatsuClass::instance()
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
// method : 		HamamatsuClass::command_factory
// 
// description : 	Create the command object(s) and store them in the 
//			command list
//
//-----------------------------------------------------------------------------
void HamamatsuClass::command_factory()
{

	//	add polling if any
	for (unsigned int i=0 ; i<command_list.size(); i++)
	{
	}
}

//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::get_class_property
// 
// description : 	Get the class property for specified name.
//
// in :		string	name : The property name
//
//+----------------------------------------------------------------------------
Tango::DbDatum HamamatsuClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::get_default_device_property()
// 
// description : 	Return the default value for device property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum HamamatsuClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::get_default_class_property()
// 
// description : 	Return the default value for class property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum HamamatsuClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::device_factory
// 
// description : 	Create the device object(s) and store them in the 
//			device list
//
// in :		Tango::DevVarStringArray *devlist_ptr : The device name list
//
//-----------------------------------------------------------------------------
void HamamatsuClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{

	//	Create all devices.(Automatic code generation)
	//-------------------------------------------------------------
	for (unsigned long i=0 ; i < devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
						
		// Create devices and add it into the device list
		//----------------------------------------------------
		device_list.push_back(new Hamamatsu(this, (*devlist_ptr)[i]));							 

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
//	Method: HamamatsuClass::attribute_factory(vector<Tango::Attr *> &att_list)
//-----------------------------------------------------------------------------
void HamamatsuClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	//	Attribute : lostFrames
	lostFramesAttrib	*lost_frames = new lostFramesAttrib();
	Tango::UserDefaultAttrProp	lost_frames_prop;
	lost_frames_prop.set_label("Lost frames");
	lost_frames_prop.set_unit(" ");
	lost_frames_prop.set_format("%d");
	lost_frames_prop.set_description("Number of frames lost during the current or last acquisition.");
	lost_frames->set_default_properties(lost_frames_prop);
	att_list.push_back(lost_frames);

	//	Attribute : fps
	fpsAttrib	*fps = new fpsAttrib();
	Tango::UserDefaultAttrProp	fps_prop;
	fps_prop.set_label("FPS");
	fps_prop.set_unit(" ");
	fps_prop.set_format("%.2f");
	fps_prop.set_description("The last computed frame per second (the value is computed every 100 frames only)");
	fps->set_default_properties(fps_prop);
	att_list.push_back(fps);

	//	Attribute : wViewEnabled
	wViewEnabledAttrib	*w_view_enabled = new wViewEnabledAttrib();
	Tango::UserDefaultAttrProp	w_view_enabled_prop;
	w_view_enabled_prop.set_description("Enable the W-VIEW");
	w_view_enabled->set_default_properties(w_view_enabled_prop);
	att_list.push_back(w_view_enabled);

	//	Attribute : topViewExposureTime
	topViewExposureTimeAttrib	*top_view_exposure_time = new topViewExposureTimeAttrib();
	Tango::UserDefaultAttrProp	top_view_exposure_time_prop;
	top_view_exposure_time_prop.set_label("Top view exposure time");
	top_view_exposure_time_prop.set_unit("ms");
	top_view_exposure_time_prop.set_standard_unit("ms");
	top_view_exposure_time_prop.set_display_unit("ms");
	top_view_exposure_time_prop.set_format("%7.2f");
	top_view_exposure_time_prop.set_description("Exposure time for W-VIEW #1");
	top_view_exposure_time->set_default_properties(top_view_exposure_time_prop);
	top_view_exposure_time->set_memorized();
	top_view_exposure_time->set_memorized_init(false);
	att_list.push_back(top_view_exposure_time);

	//	Attribute : bottomViewExposureTime
	bottomViewExposureTimeAttrib	*bottom_view_exposure_time = new bottomViewExposureTimeAttrib();
	Tango::UserDefaultAttrProp	bottom_view_exposure_time_prop;
	bottom_view_exposure_time_prop.set_label("Bottom view exposure time");
	bottom_view_exposure_time_prop.set_unit("ms");
	bottom_view_exposure_time_prop.set_standard_unit("ms");
	bottom_view_exposure_time_prop.set_display_unit("ms");
	bottom_view_exposure_time_prop.set_format("%7.2f");
	bottom_view_exposure_time_prop.set_description("Exposure time for W-VIEW #2");
	bottom_view_exposure_time->set_default_properties(bottom_view_exposure_time_prop);
	bottom_view_exposure_time->set_memorized();
	bottom_view_exposure_time->set_memorized_init(false);
	att_list.push_back(bottom_view_exposure_time);

	//	Attribute : channel1Polarity
	channel1PolarityAttrib	*channel1_polarity = new channel1PolarityAttrib();
	Tango::UserDefaultAttrProp	channel1_polarity_prop;
	channel1_polarity_prop.set_description("Polarity value : \n1 = Negative\n2 = Positive");
	channel1_polarity->set_default_properties(channel1_polarity_prop);
	channel1_polarity->set_disp_level(Tango::EXPERT);
	att_list.push_back(channel1_polarity);

	//	Attribute : channel2Polarity
	channel2PolarityAttrib	*channel2_polarity = new channel2PolarityAttrib();
	Tango::UserDefaultAttrProp	channel2_polarity_prop;
	channel2_polarity_prop.set_description("Polarity value : \n1 = Negative\n2 = Positive");
	channel2_polarity->set_default_properties(channel2_polarity_prop);
	channel2_polarity->set_disp_level(Tango::EXPERT);
	att_list.push_back(channel2_polarity);

	//	Attribute : channel3Polarity
	channel3PolarityAttrib	*channel3_polarity = new channel3PolarityAttrib();
	Tango::UserDefaultAttrProp	channel3_polarity_prop;
	channel3_polarity_prop.set_description("Polarity value : \n1 = Negative\n2 = Positive");
	channel3_polarity->set_default_properties(channel3_polarity_prop);
	channel3_polarity->set_disp_level(Tango::EXPERT);
	att_list.push_back(channel3_polarity);

	//	Attribute : channel1Kind
	channel1KindAttrib	*channel1_kind = new channel1KindAttrib();
	Tango::UserDefaultAttrProp	channel1_kind_prop;
	channel1_kind_prop.set_description("This element can contain 3 elements because at 01/06/2021 on many hamamatsu camera there are 3 elements max\n\nKind value : \n1 = Output_Trigger_Kind_Low\n2 = Output_Trigger_Kind_Global_Exposure\n3 = Output_Trigger_Kind_Programmable\n4 = Output_Trigger_Kind_TriggerReady\n5 = Output_Trigger_Kind_High (may need SDK update)");
	channel1_kind->set_default_properties(channel1_kind_prop);
	channel1_kind->set_disp_level(Tango::EXPERT);
	att_list.push_back(channel1_kind);

	//	Attribute : channel2Kind
	channel2KindAttrib	*channel2_kind = new channel2KindAttrib();
	Tango::UserDefaultAttrProp	channel2_kind_prop;
	channel2_kind_prop.set_description("This element can contain 3 elements because at 01/06/2021 on many hamamatsu camera there are 3 elements max\n\nKind value : \n1 = Output_Trigger_Kind_Low\n2 = Output_Trigger_Kind_Global_Exposure\n3 = Output_Trigger_Kind_Programmable\n4 = Output_Trigger_Kind_TriggerReady\n5 = Output_Trigger_Kind_High (may need SDK update)");
	channel2_kind->set_default_properties(channel2_kind_prop);
	channel2_kind->set_disp_level(Tango::EXPERT);
	att_list.push_back(channel2_kind);

	//	Attribute : channel3Kind
	channel3KindAttrib	*channel3_kind = new channel3KindAttrib();
	Tango::UserDefaultAttrProp	channel3_kind_prop;
	channel3_kind_prop.set_description("This element can contain 3 elements because at 01/06/2021 on many hamamatsu camera there are 3 elements max\n\nKind value : \n1 = Output_Trigger_Kind_Low\n2 = Output_Trigger_Kind_Global_Exposure\n3 = Output_Trigger_Kind_Programmable\n4 = Output_Trigger_Kind_TriggerReady\n5 = Output_Trigger_Kind_High (may need SDK update)");
	channel3_kind->set_default_properties(channel3_kind_prop);
	channel3_kind->set_disp_level(Tango::EXPERT);
	att_list.push_back(channel3_kind);

	//	End of Automatic code generation
	//-------------------------------------------------------------
}


//+----------------------------------------------------------------------------
//
// method : 		HamamatsuClass::get_class_property()
// 
// description : 	Read the class properties from database.
//
//-----------------------------------------------------------------------------
void HamamatsuClass::get_class_property()
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
// method : 	HamamatsuClass::set_default_property
// 
// description: Set default property (class and device) for wizard.
//              For each property, add to wizard property name and description
//              If default value has been set, add it to wizard property and
//              store it in a DbDatum.
//
//-----------------------------------------------------------------------------
void HamamatsuClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;

	vector<string>	vect_data;
	//	Set Default Class Properties
	//	Set Default Device Properties
	prop_name = "DetectorNum";
	prop_desc = "id of the camera";
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

	prop_name = "MemorizedReadoutSpeed";
	prop_desc = "Memorize/Define the readoutSpeed attribute at Init device<br>\nAvailables values :<br>\nNORMAL<br>\nSLOW<br>";
	prop_def  = "NORMAL";
	vect_data.clear();
	vect_data.push_back("NORMAL");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "BlankOfSyncreadoutTrigger";
	prop_desc = "Allows you to select the blank of synreadout:<BR>\nAvailables values :<br>\n- STANDARD<BR>\n- MINIMUM<BR>\n";
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

	prop_name = "MemorizedTopViewExposureTime";
	prop_desc = "Memorize/Define the Top View exposure time attribute at Init device<br>";
	prop_def  = "1000";
	vect_data.clear();
	vect_data.push_back("1000");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedBottomViewExposureTime";
	prop_desc = "Memorize/Define the Bottom View exposure time attribute at Init device<br>";
	prop_def  = "1000";
	vect_data.clear();
	vect_data.push_back("1000");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "MemorizedWViewEnabled";
	prop_desc = "Memorize/Define the W-VIEW mode attribute at Init device<br>";
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

	prop_name = "MemorizedHighDynamicRangeEnabled";
	prop_desc = "Memorize/Define the HighDynamicRangeEnabled attribute at Init device<br>";
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

	prop_name = "ExpertFrameBufferSize";
	prop_desc = "Only an expert User could change this property.<br>\nThis is the DCAM frame buffer size used during the acquisition.<BR>";
	prop_def  = "10";
	vect_data.clear();
	vect_data.push_back("10");
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
// method : 		HamamatsuClass::write_class_property
// 
// description : 	Set class description as property in database
//
//-----------------------------------------------------------------------------
void HamamatsuClass::write_class_property()
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
	string	str_title("");
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
	inheritance.push_back("Tango::Device_4Impl");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	//--------------------------------------------
	get_db_class()->put_property(data);
}

}	// namespace
