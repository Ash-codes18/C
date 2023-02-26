#include <stdio.h>

int main(){
    int z;
    printf("Enter The no of. elements in the array: ");
    scanf("%d",&z);
    int arr[z];
    for (int i=0;i<z;i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array consists of : ");
    for (int i=0;i<z;i++){
printf(" %d, ",arr[i]);
    }
    // int a = sizeof(arr);
    // int b = a/4;
    // int z =b;
    int revarr[z];
    int zz=z;
    for (int i=0;i<z;i++){
        revarr[i]=arr[zz-1];
        zz--;
        // for(int j=0;j<)
        // arr[z-1];
        // z--;
    }
    printf("\n");
    printf("The reverse of the array : ");
 for (int i=0;i<z;i++){
printf(" %d, ",revarr[i]);
    }
    return 0;
}