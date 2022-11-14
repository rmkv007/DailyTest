/*Question:
	The program must accept an integer N as the input.The program must print 
	the desired pattern as shown in example input/output.
  Sample Input & Output:
  	Input:
		5
	Output:
		1
		22
		3*3
		4**4
		5***5
*/
#include<stdio.h>
int main(){
	int N,k=1,i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
				printf("%d",k);
			else
				printf("*");	
		}
		printf("\n");
		k++;
	}
}	
