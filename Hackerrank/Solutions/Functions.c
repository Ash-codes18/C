#include <stdio.h>
/*
Add int max_of_four(int a, int b, int c, int d) here.
*/
int func(int a,int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = func(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int func(int a,int b, int c, int d){
    if (a>b && a>c && a>d){
        return a;
    }
    else if (b>c && b>d && b>a){
        return b;
    }
    else if (c>a && c>b && c>d){
        return c;
    }
    else{
        return d;
    }
}
