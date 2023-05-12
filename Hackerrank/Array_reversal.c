#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    } 
    

    /* Write the logic to reverse the array. */

    for(num; num>0;num--){
        printf("%d ", arr[num-1]);
    }
    return 0;
}