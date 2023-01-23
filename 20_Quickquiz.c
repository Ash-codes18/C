#include <stdio.h>
void morning();
void afternoon();
void night();
int main(){
    // int a;
    // printf("Please enter the time in 24 hr format : ");
    // scanf("%d",a);
    // if(24<a<=12){
    //     morning();
    // }
    // else if (12<a<18){
    //     afternoon();
    // }
    // else if (18<a<=24){
    //     night();
    // }
morning();
afternoon();
night();
    return 0;
}
void morning(){
    printf("Good Morning!\n");
}
void afternoon(){
    printf("Good Afternoon!\n");
}
void night(){
    printf("Good Night!\n");
}