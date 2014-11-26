// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_CircularGrid_HeaderFile
#define _V3d_CircularGrid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_V3d_CircularGrid_HeaderFile
#include <Handle_V3d_CircularGrid.hxx>
#endif

#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
#ifndef _gp_Ax3_HeaderFile
#include <gp_Ax3.hxx>
#endif
#ifndef _V3d_ViewerPointer_HeaderFile
#include <V3d_ViewerPointer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_GridDrawMode_HeaderFile
#include <Aspect_GridDrawMode.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_CircularGrid_HeaderFile
#include <Aspect_CircularGrid.hxx>
#endif
class Graphic3d_Structure;
class Graphic3d_Group;
class Quantity_Color;



class V3d_CircularGrid : public Aspect_CircularGrid {

public:

  
  Standard_EXPORT   V3d_CircularGrid(const V3d_ViewerPointer& aViewer,const Quantity_Color& aColor,const Quantity_Color& aTenthColor);
  
  Standard_EXPORT     void SetColors(const Quantity_Color& aColor,const Quantity_Color& aTenthColor) ;
  
  Standard_EXPORT     void Display() ;
  
  Standard_EXPORT     void Erase() const;
  
  Standard_EXPORT     Standard_Boolean IsDisplayed() const;
  
  Standard_EXPORT     void GraphicValues(Standard_Real& Radius,Standard_Real& OffSet) const;
  
  Standard_EXPORT     void SetGraphicValues(const Standard_Real Radius,const Standard_Real OffSet) ;




  DEFINE_STANDARD_RTTI(V3d_CircularGrid)

protected:

  
  Standard_EXPORT     void UpdateDisplay() ;



private: 

  
  Standard_EXPORT     void DefineLines() ;
  
  Standard_EXPORT     void DefinePoints() ;

Handle_Graphic3d_Structure myStructure;
Handle_Graphic3d_Group myGroup;
gp_Ax3 myCurViewPlane;
V3d_ViewerPointer myViewer;
Standard_Boolean myCurAreDefined;
Aspect_GridDrawMode myCurDrawMode;
Standard_Real myCurXo;
Standard_Real myCurYo;
Standard_Real myCurAngle;
Standard_Real myCurStep;
Standard_Integer myCurDivi;
Standard_Real myRadius;
Standard_Real myOffSet;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif