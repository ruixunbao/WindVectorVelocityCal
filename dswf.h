#ifndef DSWF_H
#define DSWF_H
#include <eigen/Eigen>
#include <Eigen/Dense>
#include <math.h>
#include <iostream>
#include <QDebug>

const double PI = 3.1415926;

class DSWF
{
public:
    DSWF(double elevationAngle, double azimuthAngle[], int losNum, double losVelocity[]);
    double vectorVelocity[3];
};

#endif // DSWF_H
