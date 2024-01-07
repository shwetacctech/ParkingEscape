#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TrafficJam.h"
#include "OpenGLWindow.h"
#include <Point3D.h>
#include <Car.h>

class TrafficJam : public QMainWindow
{
    Q_OBJECT

public:
    TrafficJam(QWidget *parent = nullptr);
    ~TrafficJam();
    void setupUi();

private slots:
    void readOBJ();
    void sceneStatic();
    void UpperMove();
    void DownMove();
    void LeftMove();
    void RightMove();
    void selectCar();
    void stop();

private:
    Ui::TrafficJamClass ui;
   
    OpenGLWindow* mRenderer;
    QWidget* mCentralWidget;
    QWidget* gridLayoutWidget;
    QGridLayout* gridLayout_2;
    QVBoxLayout* verticalLayout_2;
    QOpenGLWidget* openGLWidget;
    QWidget* horizontalLayoutWidget;
    QHBoxLayout* horizontalLayout_3;
    QHBoxLayout* horizontalLayout_4;
    QPushButton* pushButton_2;
    QPushButton* pushButton_4;
    QPushButton* pushButton_3;
    QPushButton* pushButton;
    QPushButton* pushButton5,* pushButton6;
    QPushButton* pushButton7;
    QMenuBar* menuBar;
    QToolBar* mainToolBar;
    QStatusBar* statusBar;
    std::vector<Point3D> mPoints;
    std::vector<Point3D> mnPoints;
    QVector<GLfloat> mVertices;
    QVector<GLfloat> mColors;
    std::vector<Point3D> translatedPoints ;
    std::vector<Car> mCarContainer;
    int car_no=0;
private:
    void addVerticesColor();
    void addVertices();
};
