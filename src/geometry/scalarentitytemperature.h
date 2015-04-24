#ifndef SCALARENTITYTEMPERATURE_H
#define SCALARENTITYTEMPERATURE_H

#include <QObject>
#include <QtXml>

#include "geometry.h"

/*!
 * \brief The ScalarEntityTemperature class
 */
class ScalarEntityTemperature : public Geometry
{
    Q_OBJECT

public:
    ScalarEntityTemperature(const bool &isNominal, QObject *parent = 0);
    ScalarEntityTemperature(const bool &isNominal, const double &temperature, QObject *parent = 0);

    ScalarEntityTemperature(const ScalarEntityTemperature &copy, QObject *parent = 0);

    ScalarEntityTemperature &operator=(const ScalarEntityTemperature &copy);

    ~ScalarEntityTemperature();

    //########################################
    //order of unknown parameters (Qxx-matrix)
    //########################################

    enum TemperatureUnknowns{
        unknownTemperature = eUnknownTemperature
    };

    //#################################
    //get or set temperature parameters
    //#################################

    const double &getTemperature() const;

    void setTemperature(const double &temperature);

    //###########################
    //reexecute the function list
    //###########################

    void recalc();

    //#################
    //save and load XML
    //#################

    QDomElement toOpenIndyXML(QDomDocument &xmlDoc) const;
    bool fromOpenIndyXML(QDomElement &xmlElem);

    //###############
    //display methods
    //###############

    QString getDisplayTemperature(const UnitType &type, const int &digits, const bool &showDiff = false) const;

private:

    //######################
    //temperature attributes
    //######################

    double temperature;

    //QString getDisplayIsCommon() const;
    //QString getDisplayIsNominal() const;
    //QString getDisplayObs() const;
    //QString getDisplaySolved() const;
    //QString getDisplayMConfig() const;
    //QString getDisplayStdDev() const;
    //QString getDisplayScalarAngleValue() const;

    //static MeasurementConfig defaultMeasurementConfig; //used as a default for this geometry type


};

#endif // SCALARENTITYTEMPERATURE_H
