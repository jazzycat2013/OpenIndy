#include "scalarentitymeasurementseries.h"

#include "function.h"

ScalarEntityMeasurementSeries::ScalarEntityMeasurementSeries(bool isNominal, QObject *parent) : Geometry(isNominal, parent)
{
    this->id = Configuration::generateID();
    this->myNominalCoordSys = NULL;
    this->isSolved = false;
    this->isUpdated = false;
    this->isDrawn = false;
}

ScalarEntityMeasurementSeries::ScalarEntityMeasurementSeries(const ScalarEntityMeasurementSeries &copy) : Geometry(copy.isNominal){
    this->id = copy.id;
    this->name = copy.name;
    this->seriesValue = copy.getSeriesValue();
    this->isSolved = copy.isSolved;
}

void ScalarEntityMeasurementSeries::recalc(){


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

        this->setIsSolved(false);

    }

}

/*!
 * \brief ScalarEntityMeasurementSeries::toOpenIndyXML
 * \param xmlDoc
 * \return
 */
QDomElement ScalarEntityMeasurementSeries::toOpenIndyXML(QDomDocument &xmlDoc) const{

    QDomElement entityMeasurementSeries = Geometry::toOpenIndyXML(xmlDoc);

    if(entityMeasurementSeries.isNull()){
        return entityMeasurementSeries;
    }

    entityMeasurementSeries.setAttribute("type", Configuration::sEntityMeasurementSeries);

    //add series value
    QDomElement seriesValue = xmlDoc.createElement("seriesValue");
    if(this->getIsSolved()){
        seriesValue.setAttribute("value", this->seriesValue);
    }else{
        seriesValue.setAttribute("value", 0.0);
    }
    entityMeasurementSeries.appendChild(seriesValue);

    return entityMeasurementSeries;

}

/*!
 * \brief ScalarEntityMeasurementSeries::fromOpenIndyXML
 * \param xmlDoc
 * \return
 */
bool ScalarEntityMeasurementSeries::fromOpenIndyXML(QDomElement &xmlDoc){

    bool result = Geometry::fromOpenIndyXML(xmlElem);

    if(result){

        //set circle attributes
        QDomElement seriesValue = xmlDoc.firstChildElement("seriesValue");

        if(seriesValue.isNull() || !seriesValue.hasAttribute("value")){
            return false;
        }

        this->radius = seriesValue.attribute("value").toDouble();

    }

    return result;

}

ElementDependencies ScalarEntityMeasurementSeries::fromOpenIndyXML(QXmlStreamReader &xml){
    ElementDependencies dependencies;

    return dependencies;
}

bool ScalarEntityMeasurementSeries::saveSimulationData()
{
    this->mySimulationData.addScalar(this->seriesValue);
    return true;
}

double ScalarEntityMeasurementSeries::getSeriesValue() const{
    return this->seriesValue;
}

void ScalarEntityMeasurementSeries::setSeriesValue(double value){
    this->seriesValue = value;
}

double ScalarEntityMeasurementSeries::getScalar() const
{
    return this->seriesValue;
}

QString ScalarEntityMeasurementSeries::getDisplayIsCommon() const{
    return QString(isCommon?"true":"false");
}

QString ScalarEntityMeasurementSeries::getDisplayIsNominal() const{
    return QString(isNominal?"true":"false");
}
/*QString ScalarEntityMeasurementSeries::getDisplayObs() const{
    return QString::number(this->myObservations.size());
}*/

QString ScalarEntityMeasurementSeries::getDisplaySolved() const{
    return QString(this->isSolved?"true":"false");
}

QString ScalarEntityMeasurementSeries::getDisplayMConfig() const{
    return this->mConfig.name;
}

QString ScalarEntityMeasurementSeries::getDisplayStdDev() const{

    if(this->myStatistic.isValid){
        return QString::number(this->myStatistic.stdev*UnitConverter::getDistanceMultiplier(),'f',UnitConverter::distanceDigits);
    }else{
        return "-/-";
    }
}

QString ScalarEntityMeasurementSeries::getDisplayScalarMeasurementSeriesValue() const{
    return QString::number(this->seriesValue,'f',6);
}
