#include <math.h>
#include "Head.h"

void Mh(double x,double y){
    double i;
    i=(pow(x,3)-sqrt(y-4))/(12*exp(x)+sin(x));

    printf("i=%f",i);
}
