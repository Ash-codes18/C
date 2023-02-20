#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int arr[n];
  for(int i=0;i<n;i++){
      arr[i]=i+1;
  }

  int ad;
  int o;
  int xo;
  int adv=0;
  int ov=0;
  int xov=0;

  for(int j=1;j<=sizeof(arr)/4;j++){
        
      for(int l=j+1;l<=sizeof(arr)/4;l++){
          
        ad=arr[j-1]&arr[l-1];
        if(ad>=adv && ad<k){
            adv=ad;
        }
        
        o=arr[j-1]|arr[l-1];
        if(o>=ov && o<k){
            ov=o;
        }
        
        xo=arr[j-1]^arr[l-1];
        if(xo>=xov && xo<k){
            xov=xo;
        }
         
      }
  }
  printf("%d\n%d\n%d",adv,ov,xov);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
