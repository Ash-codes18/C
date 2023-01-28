//program to convert celsius to fahrenheit
#include <stdio.h>

int converter(int a);

int main(){
    int c;
    printf("Enter the temperature in celsius : ");
    scanf("%d",&c);
    printf("The given temp. in fahrenheit is : %d",converter(c));
    return 0;
}

int converter(int a){
    int fah;
    fah = ((a*(1.8))+32);
    return fah;
}