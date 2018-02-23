#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif

int main(){ 
#ifdef USE_TRIGONOMETRY_DEGREE
double sin=degreemath::sinus(90);
double cos=degreemath::cosinus(90);
double tg=degreemath::tangens(45);
double ctg=degreemath::cotangens(45);
#else
double sinn=sin(90.0);
double coss=cos(0.0);
double tg=tan(45.0);
double ctg=1/tan(45.0);
#endif

return 0;}