// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.


#include<stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>=y)
	     printf("%d\n",x);
	     else
	     printf("%d\n",y);
	}
	return 0;
}