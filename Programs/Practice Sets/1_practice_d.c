#include <stdio.h>

int main(){
    float a;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&a);
    printf("The temperature converted to fahrenheit is : %f",(a*9/5)+32);
    return 0;
}