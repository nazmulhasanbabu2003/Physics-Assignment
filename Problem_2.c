#include <stdio.h>
#include <math.h>
//We know d * sin_thita = m * Lemda
// so thita = Sin Inverse (( m * lemda ) / d)
int main()
{
    //for green light
    double m=3,wavelength_green=530,theta=65,pi=3.1416;
    double radian= theta*(pi/180.0);
    double radiyan= sin(radian);
    double d = (m*wavelength_green)/radiyan;


    //for red light
    double M=2,wavelength_red=700;
    double thita_red= asin(M*wavelength_red/d);
    thita_red=thita_red*180/pi;

    printf("%lf degrees",thita_red);

    return 0;
}

