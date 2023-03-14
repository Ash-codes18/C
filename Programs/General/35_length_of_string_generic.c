#include <stdio.h>

int main(){
    char *h="zindagi me halua na ho to wo jeewan hi kya";
    // char *h="halua hai kya";
    int len=0;
    char *checker=h; 
    
     //Declared *checker so that we can also print the string later on cause if we use h in the while loop its address will reach the null character and the string won't be printed
    
    while(*checker!='\0'){
        len+=1;
        checker++;
    }
    printf("The length of the string '%s' is : %d",h,len);
    return 0;
}