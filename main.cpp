#include <QCoreApplication>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <iostream>
#include <math.h>
#include <qmath.h>
#include <QDebug>
#include <dswf.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    Eigen::Vector3d x(1, 2 ,3);
//    std::cout << "x = " << x << "\n";
//    std::cout << "x*xT = \n" << x*x.transpose() << "\n";
//    Eigen::Matrix <double, 3, 1> y(1,2,3);
//    std::cout << "y = \n" << y << "\n";
//    Eigen::Matrix <double, 1, 3> yT = y.transpose();
//    std::cout << "yT = \n" << yT << "\n";

//    std::cout << "y*yT = \n" << y*yT << "\n";
//    double angle = 30.0/180.0*3.1415926;
//    qDebug() << "sin(30) = " << sin(angle) << "\n";

    double losVelocity[12] = {5.08377740849937,4.33244182358277,
                              2.66266856597793,0.521872031603138,
                              -1.51632307699653,-2.90578402645472,
                              -3.27420587744954,-2.52287029253294,
                              -0.853097034928097,1.28769949944670,
                              3.32589460804636,4.71535555750455};
    double azimuthAngle[12] = {30.0,60.0,90.0,120.0,150.0,180.0,
                              210.0,240.0,270.0,300.0,330.0,360.0};
    double elevationAngle = 60.0;
    int losNum = sizeof(azimuthAngle)/sizeof(double);
    DSWF *aa = new DSWF(elevationAngle, azimuthAngle, losNum, losVelocity);
    qDebug() << "Vector = " << aa->vectorVelocity[0] << " "<< aa->vectorVelocity[1] << " "<< aa->vectorVelocity[2];
    return a.exec();
}
