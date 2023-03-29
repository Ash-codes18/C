#include <stdio.h>

int main(){

    int test_cases;
    scanf("%d",&test_cases);
    int arr[test_cases],num_dig[test_cases];
    int a,b;
    for(int i=0;i<test_cases;i++){
        scanf("%d %d",&a,&b);
        arr[i]=a+b;
    }


    int count = 0;
    for (int i = 0; i < test_cases; i++) {
        int temp = arr[i];
        while (temp > 0) {
            count++;
            temp /= 10;
        }
        int digit, ct = 0;
        int digits[count]; 
        while (arr[i] > 0) {
            digit = arr[i] % 10;
            digits[ct] = digit; 
            ct++;
            arr[i] /= 10;
        }
        int sum = 0;
        for (int j = ct - 1; j >= 0; j--) {
            if(digits[j]==0){
                sum += 6; 
            }
            else if(digits[j]==1){
                sum += 2; 
            }
            else if(digits[j]==2){
                sum += 5; 
            }
            else if(digits[j]==3){
                sum += 5; 
            }
            else if(digits[j]==4){
                sum += 4; 
            }
            else if(digits[j]==5){
                sum += 5; 
            }
            else if(digits[j]==6){
                sum += 6; 
            }
            else if(digits[j]==7){
                sum += 3; 
            }
            else if(digits[j]==8){
                sum += 7; 
            }
            else if(digits[j]==9){
                sum += 6; 
            }
        }
        num_dig[i] = sum;
        count = 0; 
    }

    for (int i = 0; i < test_cases; i++) {
        printf("%d\n", num_dig[i]); 
    }
    printf("\n");

    return 0;
}
