#include<stdio.h>
#include<math.h>
// We know wavelength = ( d * sin_thita)\m
int main ( )
{
    double pi = 3.1416, m,d,thita;
    printf("Enter m: ");
    scanf("%lf",&m);

    printf("Enter d: ");// d input in micrometer
    scanf("%lf",&d);

    printf("Enter thita: ");
    scanf("%lf",&thita);
    d = d*1000;//convert to nenometer
    double radi= thita * ( pi/180);
    double radiyan = sin(radi);// convert to radiyan

    double wave_length = (d*radiyan ) /m;


    printf("wavelength is: %lf\n",wave_length);

    if(wave_length>=380.00 && wave_length<=450.00)
    {
         printf("The color of light: Violet\n");
    }

    else if(wave_length>=450.00 && wave_length<=485.00)
    {
         printf("The color of light: Blue\n");
    }

    else if(wave_length>=485.00 && wave_length<=500.00)

    {
        printf("The color of light: Cyan\n");
    }

    else if(wave_length>=500.00 && wave_length<=565.00)
    {
         printf("The color of light: Green\n");
    }

    else if(wave_length>=565.00&& wave_length<=590.00)
    {
        printf("The color of light: Yellow\n");
    }
    else if(wave_length>=590.00 && wave_length<=625.00)
    {
        printf("The color of light: Orange\n");
    }
    else if(wave_length>=625.00 && wave_length<=750.00)
    {
        printf("The color of light: Red\n");
    }

    else
    {
        printf("invalid result\n");
    }

    return 0;
}
