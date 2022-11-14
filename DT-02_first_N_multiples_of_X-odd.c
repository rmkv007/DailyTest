/*Question:
	The program must accept two integers N and X as the input.The program must 
	print the first N multiples of X which are odd as the output.If there is no
	such multiple then the program must print -1 as the output.
  Sample Input & Output:
  	Input:
  		10
  		3
  	Output:
	  	3 9 15 21 27 33 39 45 51 57
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N,X,i;
	scanf("%d %d",&N,&X);
	if(X%2==0)
		printf("-1");
	else{
		for(i=1;i<=(X*N*2);i++)
		{
			if(i%X==0 && i%2!=0)
				printf("%d ",i);
		}
	}	
}
