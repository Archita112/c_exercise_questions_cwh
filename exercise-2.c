//write a program for different conversions like:
// 1. kms to miles
// 2. inches to foot
// 3. cms to inches
// 4. pound to kgs
// 5. inches to meters
// and ask the user particularly what conversion they want.

#include <stdio.h>

int main(){
    int n;
    float i;
    printf("Choose the conversion you want to convert the values into:\n1. kms to miles\n2. inches to foot\n3. cms to inches\n4. pound to kgs\n5. inches to meters");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Enter the value to convert from kms to miles:");
        scanf("%f", &i);
        printf("%f kilometers = %f miles", i,  i*0.621371);
    }
    else if (n == 2)
    {
        printf("Enter the value to convert from inches to foot:");
        scanf("%f", &i);
        printf("%f inches = %f foot", i,  i*0.0833333);
    }
    else if (n == 3)
    {
        printf("Enter the value to convert from centimeters to inches:");
        scanf("%f", &i);
        printf("%f cms = %f inches", i,  i*0.393701);
    }
    else if (n == 4)
    {
        printf("Enter the value to convert from pound to kilograms:");
        scanf("%f", &i);
        printf("%f pound = %f kilograms", i,  i*0.453592);
    }
    else if (n == 5)
    {
        printf("Enter the value to convert from inches to meter:");
        scanf("%f", &i);
        printf("%f inches = %f meters", i,  i*0.0254);
    }
    else{
        return 1;
    }
    return 0;
}