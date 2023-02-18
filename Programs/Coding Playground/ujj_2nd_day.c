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
    int hcf = 1; 

    printf("Common factors are: ");

    int halua = 0;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            if (array1[i] == array2[j]) {
                for (int x = 0; x < k; x++) {
                    if (result[x] == array1[i]) {
                        halua++;
                    }
                }
                if (halua == 0) {
                    result[k] = array1[i];
                    printf("%d ", result[k]);
                    k++;
                    if (array1[i] > hcf) { 
                        hcf = array1[i];
                    }
                }
                halua = 0; 
            }
        }
    }

    printf("\nHighest common factor is: %d", hcf);

    return 0;
}
