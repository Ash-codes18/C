#include <stdio.h>
#include <stdlib.h>

void prime(int a[],int n){

    int pr[n],npr[n];
    int pc=0,npc=0;
    for (int i = 0; i < n; i++)
    {
    int is_prime=1;
        for(int j=2;j<=a[i]/2;j++){
            if(a[i]%j==0){
               
                is_prime=0;
                break;
            }
        }
           if(is_prime){
                pr[pc]=a[i];
                pc++;
            }

            else{
                npr[npc]=a[i];
                npc++;
            }
    }
    
    //printing the prime nos.
    printf("The prime nos. in the array are : ");
    for (int i = 0; i < pc; i++)
    {
        printf("%d ",pr[i]);
    }

    //printing the composite nos.
     printf("\nThe composite nos. in the array are : ");
    for (int i = 0; i < npc; i++)
    {
        printf("%d ",npr[i]);
    }
    

}


int main(){
    
    int a;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&a);

    int *ptr;
    ptr=(int*) malloc(a*sizeof(int));

    for (int i = 0; i < a; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&ptr[i]);
    }

    prime(ptr,a);

    return 0;
}