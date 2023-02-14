#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int *array1 = malloc(a * sizeof(int));
    int s = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            array1[s] = i;
            s++;
        }
    }

    int *array2 = malloc(b * sizeof(int));
    int t = 0;
    for (int i = 1; i <= b; i++) {
        if (b % i == 0) {
            array2[t] = i;
            t++;
        }
    }

    int *result = malloc(s * sizeof(int)); 
    int k = 0;
    printf("Common factors are: ");
   
                int flag = 0;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            if (array1[i] == array2[j]) {
                for (int x = 0; x < k; x++) {
                    if (result[x] == array1[i]) {
                        flag++;
                    }
                }
                if (flag == 0) {
                    result[k] = array1[i];
                    printf("%d ", result[k]);
                    k++;
                }
            }
        }
    }

    // int max=sizeof(result)-1;
    // for(int l=0;l<sizeof(result)/4;l++){
    //     int check=result[l];
    //     if(max>check){
    //         max=check;
    //         // break;
    //     }
    // }
    int max;
for (int k=0;k<flag;k++){
     if (result[k] > max) {
        max = result[k];
    }
}

    // free(array1);
    // free(array2);
    // free(result);
printf("\n%d",max);
    return 0;
}
