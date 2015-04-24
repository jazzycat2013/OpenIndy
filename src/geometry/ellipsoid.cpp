#include "ellipsoid.h"

#include "featurewrapper.h"

/*
#include "function.h"

MeasurementConfig Ellipsoid::defaultMeasurementConfig;

Ellipsoid::Ellipsoid(bool isNominal, QObject *parent) : Geometry(isNominal, parent), xyz(4),a(0.0),b(0.0),c(0.0)
{
    //this->id = Configuration::generateID();
    this->myNominalCoordSys = NULL;
    this->isSolved = false;
    this->isUpdated = false;
    this->isDrawn = true;
}

Ellipsoid::Ellipsoid(const Ellipsoid &copy) : Geometry(copy.isNominal){
    this->id = copy.id;
    this->name = copy.name;
    this->isSolved = copy.isSolved;
}

OiVec Ellipsoid::getXYZ() const
{
    return this->xyz;
}

void Ellipsoid::recalc(){

    if(this->functionList.size() > 0){

        bool solved = true;
        foreach(Function *f, this->functionList){

            //execute the function if it exists and if the last function was executed successfully
            if(f != NULL && solved == true){
                solved = f->exec(*this);
            }

        }
        this->setIsSolved(solved);

    }else if(this->isNominal == false){

        this->xyz = OiVec(4);
        this->a = 0.0;
        this->b = 0.0;
        this->c = 0.0;
        this->setIsSolved(false);

    }

}

QDomElement Ellipsoid::toOpenIndyXML(QDomDocument &xmlDoc) const{

    QDomElement ellipsoid = Geometry::toOpenIndyXML(xmlDoc);

    if(ellipsoid.isNull()){
        return ellipsoid;
    }

    ellipsoid.setAttribute("type", getGeometryTypeName(eEllipsoidGeometry));

    return ellipsoid;

}

bool Ellipsoid::fromOpenIndyXML(QDomElement &xmlElem){

    bool result = Geometry::fromOpenIndyXML(xmlElem);

    if(result){



    }

    return result;

}

bool Ellipsoid::saveSimulationData()
{
    return false;
}
*/


/*!
 * \brief Ellipsoid::Ellipsoid
 * \param isNominal
 * \param parent
 */
Ellipsoid::Ellipsoid(const bool &isNominal, QObject *parent) : Geometry(isNominal, parent){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setEllipsoid(this);
    }

}

/*!
 * \brief Ellipsoid::Ellipsoid
 * \param isNominal
 * \param center
 * \param majorAxis
 * \param a
 * \param b
 * \param c
 * \param minorAxis
 * \param parent
 */
Ellipsoid::Ellipsoid(const bool &isNominal, const Position &center, const Direction &majorAxis, const double &a, const double &b, QObject *parent) : Geometry(isNominal, parent){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setEllipsoid(this);
    }

    this->setEllipsoid(center, majorAxis, a, b);

}

/*!
 * \brief Ellipsoid::Ellipsoid
 * \param copy
 * \param parent
 */
Ellipsoid::Ellipsoid(const Ellipsoid &copy, QObject *parent) : Geometry(copy, parent){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setEllipsoid(this);
    }

    this->center = copy.center;
    this->majorAxis = copy.majorAxis;
    this->a = copy.a;
    this->b = copy.b;

}

/*!
 * \brief Ellipsoid::operator =
 * \param copy
 * \return
 */
Ellipsoid &Ellipsoid::operator=(const Ellipsoid &copy){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setEllipsoid(this);
    }

    this->center = copy.center;
    this->majorAxis = copy.majorAxis;
    this->a = copy.a;
    this->b = copy.b;

    return *this;

}

/*!
 * \brief Ellipsoid::~Ellipsoid
 */
Ellipsoid::~Ellipsoid(){

}

/*!
 * \brief Ellipsoid::hasDirection
 * \return
 */
bool Ellipsoid::hasDirection() const{
    return true;
}

/*!
 * \brief Ellipsoid::hasPosition
 * \return
 */
bool Ellipsoid::hasPosition() const{
    return true;
}

/*!
 * \brief Ellipsoid::getDirection
 * Returns the major axis vector of the ellipsoid (semi-major axis)
 * \return
 */
const Direction &Ellipsoid::getDirection() const{
    return this->majorAxis;
}

/*!
 * \brief Ellipsoid::getPosition
 * Returns the center of the ellipsoid
 * \return
 */
const Position &Ellipsoid::getPosition() const{
    return this->center;
}

/*!
 * \brief Ellipsoid::getA
 * Returns the semi-major axis of the ellipsoid
 * \return
 */
const double &Ellipsoid::getA() const{
    return this->a;
}

/*!
 * \brief Ellipsoid::getB
 * Returns the semi-minor axis of the ellipsoid
 * \return
 */
const double &Ellipsoid::getB() const{
    return this->b;
}

/*!
 * \brief Ellipsoid::setEllipsoid
 * \param center
 * \param majorAxis
 * \param a
 * \param b
 * \param c
 * \param minorAxis
 */
void Ellipsoid::setEllipsoid(const Position &center, const Direction &majorAxis, const double &a, const double &b){

    //set the given parameters
    this->center = center;
    this->majorAxis = majorAxis;
    this->a = a;
    this->b = b;

}

/*!
 * \brief Ellipsoid::recalc
 */
void Ellipsoid::recalc(){

    Geometry::recalc();

    //reset ellipsoid definition if not solved
    if(!this->isSolved){
        this->center.setVector(0.0, 0.0, 0.0);
        this->majorAxis.setVector(0.0, 0.0, 0.0);
        this->a = 0.0;
        this->b = 0.0;
    }

}

/*!
 * \brief Ellipsoid::toOpenIndyXML
 * \param xmlDoc
 * \return
 */
QDomElement Ellipsoid::toOpenIndyXML(QDomDocument &xmlDoc) const{

    QDomElement ellipsoid = Geometry::toOpenIndyXML(xmlDoc);

    if(ellipsoid.isNull()){
        return ellipsoid;
    }

    ellipsoid.setAttribute("type", getGeometryTypeName(eEllipsoidGeometry));

    return ellipsoid;

}

/*!
 * \brief Ellipsoid::fromOpenIndyXML
 * \param xmlElem
 * \return
 */
bool Ellipsoid::fromOpenIndyXML(QDomElement &xmlElem){

    bool result = Geometry::fromOpenIndyXML(xmlElem);

    if(result){



    }

    return result;

}

/*!
 * \brief Ellipsoid::getDisplayX
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayX(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertToDefault(this->center.getVector().getAt(0), type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayY
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayY(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertToDefault(this->center.getVector().getAt(1), type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayZ
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayZ(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertToDefault(this->center.getVector().getAt(2), type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayPrimaryI
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayPrimaryI(const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(this->majorAxis.getVector().getAt(0), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayPrimaryJ
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayPrimaryJ(const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(this->majorAxis.getVector().getAt(1), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayPrimaryK
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayPrimaryK(const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(this->majorAxis.getVector().getAt(2), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayA
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayA(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertToDefault(this->a, type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Ellipsoid::getDisplayB
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Ellipsoid::getDisplayB(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertToDefault(this->b, type), 'f', digits);
    }
    return QString("");
}
