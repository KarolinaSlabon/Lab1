#include "trygonometria.h"
#include <cmath>

double degreemath::sinus(double degree) {
double pi=3.141592627;
double radian=(pi/180)*degree;
return std::sin(radian);

}

double degreemath::cosinus(double degree) {
double pi=3.141592627;
double radian=(pi/180)*degree;
return std::cos(radian);
}

double degreemath::tangens(double degree) {
double pi=3.141592627;
double radian=(pi/180)*degree;
return std::tan(radian);
}

double degreemath::cotangens(double degree) {
double pi=3.141592627;
double radian=(pi/180)*degree;
double cot=1/tan(radian);
return cot;
}