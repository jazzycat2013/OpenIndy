// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_OptValue_HeaderFile
#define _MoniTool_OptValue_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_MoniTool_Profile_HeaderFile
#include <Handle_MoniTool_Profile.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_Transient;
class MoniTool_Profile;


//! This class allows two kinds of use <br>
//! <br>
//!           As an object, a OptValue can be put in any operator or <br>
//!           algorithm ... to use an Option of a Profile, by recording <br>
//!           its value, hence avoiding to query the Profile eachtime <br>
//! <br>
//!           This object brings a value which can be set as coming from a <br>
//!           Profile, with a configuration name and for an Option name <br>
//!           This value is evaluated then returned immediately <br>
//! <br>
//!           As a class, it can be redefined to work on a dedicated <br>
//!           Profile, provided by such or such specific way (as static <br>
//!           context for instance) <br>
//! <br>
//!           To change configuration, etc... can be done by querying and <br>
//!           editing the Profile <br>
class MoniTool_OptValue  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an OptValue on a given Option <br>
//!           This allows to use "shortcut" method to set the value <br>
//! <br>
//!           WARNING : loading is not done at creation time. It must be <br>
//!           done explicitly by call to Load <br>
//! <br>
//!           The reason comes from C++ : the Profile being virtual, and <br>
//!           intended to be redefined in sub-classes, must not be used in <br>
//!           the constructor. A separate method, called on the object <br>
//!           already created with its true type, must be called after <br>
  Standard_EXPORT   MoniTool_OptValue(const Standard_CString opt = "");
  //! Clears the Value of the OptValue <br>
  Standard_EXPORT     void Clear() ;
  //! Sets the value as coming from the Profile, according to an <br>
//!           Option name. Access as Fast or regular <br>
//!           If no value is available, the former one remains : can be <br>
//!             cleared by call to Clear <br>
  Standard_EXPORT     void SetValue(const Handle(MoniTool_Profile)& prof,const Standard_CString opt,const Standard_Boolean fast = Standard_True) ;
  //! Returns the Profile which can be used by Short Cut methods <br>
//!           Defaults returns a Null Handle, can be redefined <br>
//!           For instance, to return a static used as dictionary or context <br>
  Standard_EXPORT   virtual  Handle_MoniTool_Profile Prof() const;
  //! Sets the value from the Profile returned by method Prof, <br>
//!           and Option Name given at creation time. <br>
//!           FastValue by default, else Value <br>
//! <br>
//!           Does not check if already loaded : reloads anyway <br>
//!           IsLoaded allows to test <br>
  Standard_EXPORT     void Load(const Standard_Boolean fast = Standard_True) ;
  //! Says if the OptValue is already loaded (i.e. Value defined) <br>
  Standard_EXPORT     Standard_Boolean IsLoaded() const;
  //! Returns the Value set by, either SetConf or SetValue <br>
//!           Can be Null ... (if not set or not properly set) <br>
//! <br>
//!           Returned as Argument, hence avoiding DownCast <br>
//!  Warning : type is not controlled <br>
  Standard_EXPORT     void Value(Handle(Standard_Transient)& val) const;
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~MoniTool_OptValue() { Delete(); }





protected:





private:



TCollection_AsciiString theopt;
Handle_Standard_Transient theval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif