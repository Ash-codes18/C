#include <stdio.h>

int main(){
    char *str="halua hai kya"; // its value can be changed i.e reinitialized
    printf("%s\n",str);
    str="tasty";
    printf("%s\n",str);

    // it can also be declared like this
    char strn[]="halua hi to hai"; //it cannot be assigned a new value after an assignment
    printf("%s",strn);
    // strn="nhi";
    return 0;
}