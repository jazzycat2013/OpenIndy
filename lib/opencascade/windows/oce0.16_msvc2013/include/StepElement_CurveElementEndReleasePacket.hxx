// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_CurveElementEndReleasePacket_HeaderFile
#define _StepElement_CurveElementEndReleasePacket_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepElement_CurveElementEndReleasePacket_HeaderFile
#include <Handle_StepElement_CurveElementEndReleasePacket.hxx>
#endif

#ifndef _StepElement_CurveElementFreedom_HeaderFile
#include <StepElement_CurveElementFreedom.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepElement_CurveElementFreedom;


//! Representation of STEP entity CurveElementEndReleasePacket <br>
class StepElement_CurveElementEndReleasePacket : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepElement_CurveElementEndReleasePacket();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const StepElement_CurveElementFreedom& aReleaseFreedom,const Standard_Real aReleaseStiffness) ;
  //! Returns field ReleaseFreedom <br>
  Standard_EXPORT     StepElement_CurveElementFreedom ReleaseFreedom() const;
  //! Set field ReleaseFreedom <br>
  Standard_EXPORT     void SetReleaseFreedom(const StepElement_CurveElementFreedom& ReleaseFreedom) ;
  //! Returns field ReleaseStiffness <br>
  Standard_EXPORT     Standard_Real ReleaseStiffness() const;
  //! Set field ReleaseStiffness <br>
  Standard_EXPORT     void SetReleaseStiffness(const Standard_Real ReleaseStiffness) ;




  DEFINE_STANDARD_RTTI(StepElement_CurveElementEndReleasePacket)

protected:




private: 


StepElement_CurveElementFreedom theReleaseFreedom;
Standard_Real theReleaseStiffness;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif