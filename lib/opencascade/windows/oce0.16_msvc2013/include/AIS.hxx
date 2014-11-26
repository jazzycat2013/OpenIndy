// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_HeaderFile
#define _AIS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _AIS_KindOfSurface_HeaderFile
#include <AIS_KindOfSurface.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_AIS_Drawer_HeaderFile
#include <Handle_AIS_Drawer.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Aspect_TypeOfMarker_HeaderFile
#include <Aspect_TypeOfMarker.hxx>
#endif
class gp_Pnt;
class TopoDS_Shape;
class gp_Lin;
class Geom_Curve;
class TopoDS_Edge;
class Geom_Plane;
class TopoDS_Vertex;
class TopoDS_Face;
class gp_Pln;
class Geom_Surface;
class gp_Dir;
class Bnd_Box;
class gp_Elips;
class Prs3d_Presentation;
class AIS_Drawer;
class AIS_Triangulation;
class AIS_Drawer;
class AIS_InteractiveContext;
class AIS_GraphicTool;
class AIS_LocalContext;
class AIS_LocalStatus;
class AIS_GlobalStatus;
class AIS_InteractiveObject;
class AIS_Point;
class AIS_Axis;
class AIS_Trihedron;
class AIS_PlaneTrihedron;
class AIS_Line;
class AIS_Circle;
class AIS_Plane;
class AIS_Shape;
class AIS_ConnectedShape;
class AIS_MultipleConnectedShape;
class AIS_ConnectedInteractive;
class AIS_MultipleConnectedInteractive;
class AIS_DimensionOwner;
class AIS_Relation;
class AIS_EllipseRadiusDimension;
class AIS_MaxRadiusDimension;
class AIS_MinRadiusDimension;
class AIS_Chamf2dDimension;
class AIS_Chamf3dDimension;
class AIS_OffsetDimension;
class AIS_FixRelation;
class AIS_PerpendicularRelation;
class AIS_ParallelRelation;
class AIS_TangentRelation;
class AIS_ConcentricRelation;
class AIS_IdenticRelation;
class AIS_SymmetricRelation;
class AIS_MidPointRelation;
class AIS_EqualRadiusRelation;
class AIS_EqualDistanceRelation;
class AIS_TypeFilter;
class AIS_SignatureFilter;
class AIS_ExclusionFilter;
class AIS_AttributeFilter;
class AIS_C0RegularityFilter;
class AIS_BadEdgeFilter;
class AIS_Selection;
class AIS_ListOfInteractive;
class AIS_SequenceOfInteractive;
class AIS_SequenceOfDimension;
class AIS_MapOfInteractive;
class AIS_DataMapofIntegerListOfinteractive;
class AIS_DataMapOfIOStatus;
class AIS_IndexedDataMapOfOwnerPrs;
class AIS_DataMapOfILC;
class AIS_DataMapOfSelStat;
class AIS_ListNodeOfListOfInteractive;
class AIS_ListIteratorOfListOfInteractive;
class AIS_SequenceNodeOfSequenceOfInteractive;
class AIS_SequenceNodeOfSequenceOfDimension;
class AIS_StdMapNodeOfMapOfInteractive;
class AIS_MapIteratorOfMapOfInteractive;
class AIS_DataMapNodeOfDataMapofIntegerListOfinteractive;
class AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive;
class AIS_DataMapNodeOfDataMapOfIOStatus;
class AIS_DataMapIteratorOfDataMapOfIOStatus;
class AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;
class AIS_DataMapNodeOfDataMapOfILC;
class AIS_DataMapIteratorOfDataMapOfILC;
class AIS_DataMapNodeOfDataMapOfSelStat;
class AIS_DataMapIteratorOfDataMapOfSelStat;


//! Application Interactive Services provide the means to <br>
//! create links between an application GUI viewer and <br>
//! the packages which are used to manage selection <br>
//! and presentation. The tools AIS defined in order to <br>
//! do this include different sorts of entities: both the <br>
//! selectable viewable objects themselves and the <br>
//! context and attribute managers to define their <br>
//! selection and display. <br>
//! To orient the user as he works in a modeling <br>
//! environment, views and selections must be <br>
//! comprehensible. There must be several different sorts <br>
//! of selectable and viewable object defined. These must <br>
//! also be interactive, that is, connecting graphic <br>
//! representation and the underlying reference <br>
//! geometry. These entities are called Interactive <br>
//! Objects, and are divided into four types: <br>
//! -   the Datum <br>
//! -   the Relation <br>
//! -   the Object <br>
//! -   None. <br>
//!   The Datum groups together the construction elements <br>
//! such as lines, circles, points, trihedra, plane trihedra, <br>
//! planes and axes. <br>
//! The Relation is made up of constraints on one or <br>
//! more interactive shapes and the corresponding <br>
//! reference geometry. For example, you might want to <br>
//! constrain two edges in a parallel relation. This <br>
//! contraint is considered as an object in its own right, <br>
//! and is shown as a sensitive primitive. This takes the <br>
//! graphic form of a perpendicular arrow marked with <br>
//! the || symbol and lying between the two edges. <br>
//! The Object type includes topological shapes, and <br>
//! connections between shapes. <br>
//! None, in order not to eliminate the object, tells the <br>
//! application to look further until it finds an object <br>
//! definition in its generation which is accepted. <br>
//! Inside these categories, you have the possibility <br>
//! of   an additional characterization by means of a <br>
//! signature. The signature provides an index to the <br>
//! further characterization. By default, the   Interactive <br>
//! Object has a None type and a signature of 0 <br>
//! (equivalent to None.) If you want to give a particular <br>
//! type and signature to your interactive object, you must <br>
//! redefine the two virtual methods: Type and Signature. <br>
//! In the C++ inheritance structure of the package, each <br>
//! class representing a specific Interactive Object <br>
//! inherits AIS_InteractiveObject. Among these <br>
//! inheriting classes, AIS_Relation functions as the <br>
//! abstract mother class for tinheriting classes defining <br>
//! display of specific relational constraints and types of <br>
//! dimension. Some of these include: <br>
//! -   display of constraints based on relations of <br>
//! symmetry, tangency, parallelism and concentricity <br>
//! -   display of dimensions for angles, offsets, <br>
//! diameters, radii and chamfers. <br>
//!  No viewer can show everything at once with any <br>
//! coherence or clarity. Views must be managed <br>
//! carefully both sequentially and at any given instant. <br>
//! Another function of the view is that of a context to <br>
//! carry out design in. The design changes are applied <br>
//! to the objects in the view and then extended to the <br>
//! underlying reference geometry by a solver. To make <br>
//! sense of this complicated visual data, several display <br>
//! and selection tools are required. To facilitate <br>
//! management, each object and each construction <br>
//! element has a selection priority. There are also <br>
//! means to modify the default priority. <br>
//! To define an environment of dynamic detection, you <br>
//! can use standard filter classes or create your own. A <br>
//! filter questions the owner of the sensitive primitive in <br>
//! local context to determine if it has the the desired <br>
//! qualities. If it answers positively, it is kept. If not, it is rejected. <br>
//! The standard filters supplied in AIS include: <br>
//! AIS_AttributeFilter <br>
//! AIS_SignatureFilter <br>
//! AIS_TypeFilter. <br>
//! Only the type filter can be used in the default <br>
//! operating mode, the neutral point. The others can <br>
//! only be used in open local contexts. <br>
//! Neutral point and local context constitute the two <br>
//! operating modes of the central entity which pilots <br>
//! visualizations and selections, the Interactive Context. <br>
//! It is linked to a main viewer and if you like, a trash bin <br>
//! viewer as well. <br>
//! The neutral point, which is the default mode, allows <br>
//! you to easily visualize and select interactive objects <br>
//! which have been loaded into the context. Opening <br>
//! local contexts allows you to prepare and use a <br>
//! temporary selection environment without disturbing <br>
//! the neutral point. A set of functions allows you to <br>
//! choose the interactive objects which you want to act <br>
//! on, the selection modes which you want to activate, <br>
//! and the temporary visualizations which you will <br>
//! execute. When the operation is finished, you close the <br>
//! current local context and return to the state in which <br>
//! you were before opening it (neutral point or previous <br>
//! local context). <br>
//! An interactive object can have a certain number of <br>
//! graphic attributes which are specific to it, such as <br>
//! visualization mode, color, and material. By the same <br>
//! token, the interactive context has a set of graphic <br>
//! attributes, the Drawer which is valid by default for the <br>
//! objects it controls.   When an interactive object is <br>
//! visualized, the required graphic attributes are first <br>
//! taken from the object's own Drawer if one exists, or <br>
//! from the context drawer for the others. <br>
class AIS  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Returns the nearest point in a shape. This is used by <br>
//! several classes in calculation of dimensions. <br>
  Standard_EXPORT   static  gp_Pnt Nearest(const TopoDS_Shape& aShape,const gp_Pnt& aPoint) ;
  
//! @return the nearest point on the line. <br>
  Standard_EXPORT   static  gp_Pnt Nearest(const gp_Lin& theLine,const gp_Pnt& thePoint) ;
  
//! For the given point finds nearest point on the curve, <br>
//! @return TRUE if found point is belongs to the curve <br>
//! and FALSE otherwise. <br>
  Standard_EXPORT   static  Standard_Boolean Nearest(const Handle(Geom_Curve)& theCurve,const gp_Pnt& thePoint,const gp_Pnt& theFirstPoint,const gp_Pnt& theLastPoint,gp_Pnt& theNearestPoint) ;
  
  Standard_EXPORT   static  gp_Pnt Farest(const TopoDS_Shape& aShape,const gp_Pnt& aPoint) ;
  //! Used by 2d Relation only <br>
//!          Computes the 3d geometry of <anEdge> in the current WorkingPlane <br>
//!          and the extremities if any <br>
//!          Return TRUE if ok. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Edge& theEdge,Handle(Geom_Curve)& theCurve,gp_Pnt& theFirstPnt,gp_Pnt& theLastPnt) ;
  //! Used by dimensions only. <br>
//!          Computes the 3d geometry of <anEdge>. <br>
//!          Return TRUE if ok. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Edge& theEdge,Handle(Geom_Curve)& theCurve,gp_Pnt& theFirstPnt,gp_Pnt& theLastPnt,Standard_Boolean& theIsInfinite) ;
  //! Used by 2d Relation only <br>
//!          Computes the 3d geometry of <anEdge> in the current WorkingPlane <br>
//!          and the extremities if any. <br>
//!          If <aCurve> is not in the current plane, <extCurve> contains <br>
//!          the not projected curve associated to <anEdge>. <br>
//!          If <anEdge> is infinite, <isinfinite> = true and the 2 <br>
//!          parameters <FirstPnt> and <LastPnt> have no signification. <br>
//!          Return TRUE if ok. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Edge& theEdge,Handle(Geom_Curve)& theCurve,gp_Pnt& theFirstPnt,gp_Pnt& theLastPnt,Handle(Geom_Curve)& theExtCurve,Standard_Boolean& theIsInfinite,Standard_Boolean& theIsOnPlane,const Handle(Geom_Plane)& thePlane) ;
  //! Used by 2d Relation only <br>
//!          Computes the 3d geometry of <anEdge> in the current WorkingPlane <br>
//!          and the extremities if any <br>
//!          Return TRUE if ok. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Edge& theFirstEdge,const TopoDS_Edge& theSecondEdge,Handle(Geom_Curve)& theFirstCurve,Handle(Geom_Curve)& theSecondCurve,gp_Pnt& theFirstPnt1,gp_Pnt& theLastPnt1,gp_Pnt& theFirstPnt2,gp_Pnt& theLastPnt2,const Handle(Geom_Plane)& thePlane) ;
  //! Used  by  dimensions  only.Computes  the  3d geometry <br>
//!          of<anEdge1> and <anEdge2> and checks if they are infinite. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Edge& theFirstEdge,const TopoDS_Edge& theSecondEdge,Handle(Geom_Curve)& theFirstCurve,Handle(Geom_Curve)& theSecondCurve,gp_Pnt& theFirstPnt1,gp_Pnt& theLastPnt1,gp_Pnt& theFirstPnt2,gp_Pnt& theLastPnt2,Standard_Boolean& theIsinfinite1,Standard_Boolean& theIsinfinite2) ;
  //! Used  by  2d Relation  only Computes  the  3d geometry <br>
//!          of<anEdge1> and <anEdge2> in the current Plane and the <br>
//!          extremities if any.   Return in ExtCurve  the 3d curve <br>
//!          (not projected  in the  plane)  of the  first edge  if <br>
//!          <indexExt> =1 or of the 2nd edge if <indexExt> = 2. If <br>
//!          <indexExt> = 0, ExtCurve is Null.  if there is an edge <br>
//!          external to the  plane,  <isinfinite> is true if  this <br>
//!          edge is infinite.  So, the extremities of it are not <br>
//!          significant.  Return TRUE if ok <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Edge& theFirstEdge,const TopoDS_Edge& theSecondEdge,Standard_Integer& theExtIndex,Handle(Geom_Curve)& theFirstCurve,Handle(Geom_Curve)& theSecondCurve,gp_Pnt& theFirstPnt1,gp_Pnt& theLastPnt1,gp_Pnt& theFirstPnt2,gp_Pnt& theLastPnt2,Handle(Geom_Curve)& theExtCurve,Standard_Boolean& theIsinfinite1,Standard_Boolean& theIsinfinite2,const Handle(Geom_Plane)& thePlane) ;
  //! Checks if aCurve belongs to aPlane; if not, projects aCurve in aPlane <br>
//!          and returns aCurve; <br>
//!          Return TRUE if ok <br>
  Standard_EXPORT   static  Standard_Boolean ComputeGeomCurve(Handle(Geom_Curve)& aCurve,const Standard_Real first1,const Standard_Real last1,gp_Pnt& FirstPnt1,gp_Pnt& LastPnt1,const Handle(Geom_Plane)& aPlane,Standard_Boolean& isOnPlane) ;
  
  Standard_EXPORT   static  Standard_Boolean ComputeGeometry(const TopoDS_Vertex& aVertex,gp_Pnt& point,const Handle(Geom_Plane)& aPlane,Standard_Boolean& isOnPlane) ;
  //! Tryes to get Plane from Face.  Returns Surface of Face <br>
//!          in aSurf.  Returns Standard_True  and Plane of Face in <br>
//!           aPlane in following  cases: <br>
//!          Face is Plane, Offset of Plane, <br>
//!                  Extrusion of Line  and Offset of  Extrusion of Line <br>
//!          Returns pure type of Surface which can be: <br>
//!          Plane, Cylinder, Cone, Sphere, Torus, <br>
//!          SurfaceOfRevolution, SurfaceOfExtrusion <br>
  Standard_EXPORT   static  Standard_Boolean GetPlaneFromFace(const TopoDS_Face& aFace,gp_Pln& aPlane,Handle(Geom_Surface)& aSurf,AIS_KindOfSurface& aSurfType,Standard_Real& Offset) ;
  
  Standard_EXPORT   static  void InitFaceLength(const TopoDS_Face& aFace,gp_Pln& aPlane,Handle(Geom_Surface)& aSurface,AIS_KindOfSurface& aSurfaceType,Standard_Real& anOffset) ;
  //! Finds attachment points on two curvilinear faces for length dimension. <br>
//! @param thePlaneDir [in] the direction on the dimension plane to <br>
//! compute the plane automatically. It will not be taken into account if <br>
//! plane is defined by user. <br>
  Standard_EXPORT   static  void InitLengthBetweenCurvilinearFaces(const TopoDS_Face& theFirstFace,const TopoDS_Face& theSecondFace,Handle(Geom_Surface)& theFirstSurf,Handle(Geom_Surface)& theSecondSurf,gp_Pnt& theFirstAttach,gp_Pnt& theSecondAttach,gp_Dir& theDirOnPlane) ;
  //! Finds three points for the angle dimension between <br>
//! two planes. <br>
  Standard_EXPORT   static  Standard_Boolean InitAngleBetweenPlanarFaces(const TopoDS_Face& theFirstFace,const TopoDS_Face& theSecondFace,gp_Pnt& theCenter,gp_Pnt& theFirstAttach,gp_Pnt& theSecondAttach,const Standard_Boolean theIsFirstPointSet = Standard_False) ;
  //! Finds three points for the angle dimension between <br>
//! two curvilinear surfaces. <br>
  Standard_EXPORT   static  Standard_Boolean InitAngleBetweenCurvilinearFaces(const TopoDS_Face& theFirstFace,const TopoDS_Face& theSecondFace,const AIS_KindOfSurface theFirstSurfType,const AIS_KindOfSurface theSecondSurfType,gp_Pnt& theCenter,gp_Pnt& theFirstAttach,gp_Pnt& theSecondAttach,const Standard_Boolean theIsFirstPointSet = Standard_False) ;
  
  Standard_EXPORT   static  gp_Pnt ProjectPointOnPlane(const gp_Pnt& aPoint,const gp_Pln& aPlane) ;
  
  Standard_EXPORT   static  gp_Pnt ProjectPointOnLine(const gp_Pnt& aPoint,const gp_Lin& aLine) ;
  
  Standard_EXPORT   static  gp_Pnt TranslatePointToBound(const gp_Pnt& aPoint,const gp_Dir& aDir,const Bnd_Box& aBndBox) ;
  //! returns  True  if  point  with anAttachPar  is <br>
//!          in  domain  of  arc <br>
  Standard_EXPORT   static  Standard_Boolean InDomain(const Standard_Real aFirstPar,const Standard_Real aLastPar,const Standard_Real anAttachPar) ;
  //!  computes  nearest  to  ellipse  arc  apex <br>
  Standard_EXPORT   static  gp_Pnt NearestApex(const gp_Elips& elips,const gp_Pnt& pApex,const gp_Pnt& nApex,const Standard_Real fpara,const Standard_Real lpara,Standard_Boolean& IsInDomain) ;
  //!  computes  length  of  ellipse  arc  in  parametric  units <br>
  Standard_EXPORT   static  Standard_Real DistanceFromApex(const gp_Elips& elips,const gp_Pnt& Apex,const Standard_Real par) ;
  
  Standard_EXPORT   static  void ComputeProjEdgePresentation(const Handle(Prs3d_Presentation)& aPres,const Handle(AIS_Drawer)& aDrawer,const TopoDS_Edge& anEdge,const Handle(Geom_Curve)& ProjCurve,const gp_Pnt& FirstP,const gp_Pnt& LastP,const Quantity_NameOfColor aColor = Quantity_NOC_PURPLE,const Standard_Real aWidth = 2,const Aspect_TypeOfLine aProjTOL = Aspect_TOL_DASH,const Aspect_TypeOfLine aCallTOL = Aspect_TOL_DOT) ;
  
  Standard_EXPORT   static  void ComputeProjVertexPresentation(const Handle(Prs3d_Presentation)& aPres,const Handle(AIS_Drawer)& aDrawer,const TopoDS_Vertex& aVertex,const gp_Pnt& ProjPoint,const Quantity_NameOfColor aColor = Quantity_NOC_PURPLE,const Standard_Real aWidth = 2,const Aspect_TypeOfMarker aProjTOM = Aspect_TOM_PLUS,const Aspect_TypeOfLine aCallTOL = Aspect_TOL_DOT) ;





protected:





private:




friend class AIS_Triangulation;
friend class AIS_Drawer;
friend class AIS_InteractiveContext;
friend class AIS_GraphicTool;
friend class AIS_LocalContext;
friend class AIS_LocalStatus;
friend class AIS_GlobalStatus;
friend class AIS_InteractiveObject;
friend class AIS_Point;
friend class AIS_Axis;
friend class AIS_Trihedron;
friend class AIS_PlaneTrihedron;
friend class AIS_Line;
friend class AIS_Circle;
friend class AIS_Plane;
friend class AIS_Shape;
friend class AIS_ConnectedShape;
friend class AIS_MultipleConnectedShape;
friend class AIS_ConnectedInteractive;
friend class AIS_MultipleConnectedInteractive;
friend class AIS_DimensionOwner;
friend class AIS_Relation;
friend class AIS_EllipseRadiusDimension;
friend class AIS_MaxRadiusDimension;
friend class AIS_MinRadiusDimension;
friend class AIS_Chamf2dDimension;
friend class AIS_Chamf3dDimension;
friend class AIS_OffsetDimension;
friend class AIS_FixRelation;
friend class AIS_PerpendicularRelation;
friend class AIS_ParallelRelation;
friend class AIS_TangentRelation;
friend class AIS_ConcentricRelation;
friend class AIS_IdenticRelation;
friend class AIS_SymmetricRelation;
friend class AIS_MidPointRelation;
friend class AIS_EqualRadiusRelation;
friend class AIS_EqualDistanceRelation;
friend class AIS_TypeFilter;
friend class AIS_SignatureFilter;
friend class AIS_ExclusionFilter;
friend class AIS_AttributeFilter;
friend class AIS_C0RegularityFilter;
friend class AIS_BadEdgeFilter;
friend class AIS_Selection;
friend class AIS_ListOfInteractive;
friend class AIS_SequenceOfInteractive;
friend class AIS_SequenceOfDimension;
friend class AIS_MapOfInteractive;
friend class AIS_DataMapofIntegerListOfinteractive;
friend class AIS_DataMapOfIOStatus;
friend class AIS_IndexedDataMapOfOwnerPrs;
friend class AIS_DataMapOfILC;
friend class AIS_DataMapOfSelStat;
friend class AIS_ListNodeOfListOfInteractive;
friend class AIS_ListIteratorOfListOfInteractive;
friend class AIS_SequenceNodeOfSequenceOfInteractive;
friend class AIS_SequenceNodeOfSequenceOfDimension;
friend class AIS_StdMapNodeOfMapOfInteractive;
friend class AIS_MapIteratorOfMapOfInteractive;
friend class AIS_DataMapNodeOfDataMapofIntegerListOfinteractive;
friend class AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive;
friend class AIS_DataMapNodeOfDataMapOfIOStatus;
friend class AIS_DataMapIteratorOfDataMapOfIOStatus;
friend class AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;
friend class AIS_DataMapNodeOfDataMapOfILC;
friend class AIS_DataMapIteratorOfDataMapOfILC;
friend class AIS_DataMapNodeOfDataMapOfSelStat;
friend class AIS_DataMapIteratorOfDataMapOfSelStat;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif