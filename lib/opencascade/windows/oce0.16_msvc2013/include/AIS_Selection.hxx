// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Selection_HeaderFile
#define _AIS_Selection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_Selection_HeaderFile
#include <Handle_AIS_Selection.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _AIS_NListTransient_HeaderFile
#include <AIS_NListTransient.hxx>
#endif
#ifndef _AIS_NListIteratorOfListTransient_HeaderFile
#include <AIS_NListIteratorOfListTransient.hxx>
#endif
#ifndef _AIS_NDataMapOfTransientIteratorOfListTransient_HeaderFile
#include <AIS_NDataMapOfTransientIteratorOfListTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _AIS_SelectStatus_HeaderFile
#include <AIS_SelectStatus.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Standard_NoSuchObject;
class Standard_MultiplyDefined;
class Standard_TypeMismatch;
class Standard_Transient;



class AIS_Selection : public MMgt_TShared {

public:

  //! creates a new selection and make it current in the session. <br>
//!          the selection will be accessible later through its name <br>
//!          to make it again current. <br>
//! <br>
//!          Note that if a session has been created, a session with <br>
//!          the name  "default" is created. <br>
//! <br>
//!          In this case, the is always a current selection which <br>
//!          is the last one created  until SetCurrentSelection is used. <br>
//! <br>
//!          The class methods deals with the current selection. <br>
//! <br>
//!          Warning : Better Call AIS_Selection::CreateSelection. <br>
//! <br>
  Standard_EXPORT   AIS_Selection(const Standard_CString aName);
  
  Standard_EXPORT   static  void Remove(const Standard_CString aName) ;
  //! returns True if a selection having this name exsits. <br>
  Standard_EXPORT   static  Standard_Boolean Find(const Standard_CString aName) ;
  //! calls the private constructor and puts the new Selection <br>
//!          in the list of existing selections. <br>
//!          returns False if the selection exists. <br>
  Standard_EXPORT   static  Standard_Boolean CreateSelection(const Standard_CString aName) ;
  
  Standard_EXPORT   static  Handle_AIS_Selection Selection(const Standard_CString aName) ;
  //! returns False if There is no selection of name <aName> <br>
  Standard_EXPORT   static  Standard_Boolean SetCurrentSelection(const Standard_CString aName) ;
  
  Standard_EXPORT   static  Handle_AIS_Selection CurrentSelection() ;
  //! Clears selection. <br>
  Standard_EXPORT   static  void ClearCurrentSelection() ;
  //! removes all the object of the currentselection. <br>
  Standard_EXPORT   static  void Select() ;
  //!  if the object is not yet in the current selection, it will be added. <br>
//!           if the object is already in the current selection, it will be removed. <br>
  Standard_EXPORT   static  AIS_SelectStatus Select(const Handle(Standard_Transient)& anObject) ;
  //!  the object is always add int the selection. <br>
//!           faster when the number of objects selected is great. <br>
  Standard_EXPORT   static  AIS_SelectStatus AddSelect(const Handle(Standard_Transient)& anObject) ;
  //! clears the selection and adds the object in the selection. <br>
  Standard_EXPORT   static  void ClearAndSelect(const Handle(Standard_Transient)& anObject) ;
  
  Standard_EXPORT   static  Standard_Boolean IsSelected(const Handle(Standard_Transient)& anObject) ;
  //! returns the number of objects selected. <br>
  Standard_EXPORT   static  Standard_Integer Extent() ;
  //! returns the single object selected. <br>
//!  Warning: raises TypeMismatch from Standard if Extent is not equal to 1. <br>
  Standard_EXPORT   static  Handle_Standard_Transient Single() ;
  
        void Init() ;
  
        Standard_Boolean More() const;
  
        void Next() ;
  
       const Handle_Standard_Transient& Value() const;
  
        Standard_Integer NbStored() const;
  
       const AIS_NListTransient& Objects() const;
  
  Standard_EXPORT   static  Standard_Integer Index(const Standard_CString aName) ;




  DEFINE_STANDARD_RTTI(AIS_Selection)

protected:




private: 


TCollection_AsciiString myName;
AIS_NListTransient myresult;
AIS_NListIteratorOfListTransient myIterator;
AIS_NDataMapOfTransientIteratorOfListTransient myResultMap;
Standard_Integer myNb;


};


#include <AIS_Selection.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif