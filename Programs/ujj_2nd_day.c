#include <stdio.h>

int main(){
    int a,b,z,p;

    int array1[100];
    int array2[100];

    printf("Enter the first no. : ");
    scanf("%d",&a);
    printf("Enter the second no. : ");
    scanf("%d",&b);

    int s=0;

    for (int i=1;i<=a;i++){

        if(a%i==0){

            array1[s]=i;
            s++;

        }
    }
int t=0;
 for (int i=1;i<=b;i++){

        if(b%i==0){

            array2[t]=i;
            t++;
        }
    }

int i, j, flag, x, k = 0;
int result[100];

    printf("Common elements are: ");

    for (i = 0; i < sizeof(array1) / 4; i++) {

        for (j = 0; j < sizeof(array2) / 4; j++) {

            if (array1[i] == array2[j]) {

                flag = 0;

                for (x = 0; x < k; x++) {

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
    return 0;
}