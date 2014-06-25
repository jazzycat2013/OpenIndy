#ifndef OISIMULATIONWIDGET_H
#define OISIMULATIONWIDGET_H

#include <QWidget>
#include <QDebug>
#include <featureupdater.h>
#include <oifeaturestate.h>
#include <simulationcontroller.h>

namespace Ui {
class OiSimulationWidget;
}

class OiSimulationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OiSimulationWidget(QWidget *parent = 0);
    ~OiSimulationWidget();

private slots:
    void on_pushButton_startSimulation_clicked();
    void showEvent(QShowEvent * event);

    void on_listView_simulations_clicked(const QModelIndex &index);

private:
    Ui::OiSimulationWidget *ui;
    void recalcAll();

    SimulationModel* actualSimulation;
    SimulationController control;
};

#endif // OISIMULATIONWIDGET_H
