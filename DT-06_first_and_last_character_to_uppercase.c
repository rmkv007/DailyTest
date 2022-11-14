/*Question:
	The program must accept a string S as the input.For each word in S,the program must convert
	the first and last alphabet to uppercase.Finally,the program must print the modified string
	as the output.
  Sample Input & Ouput:
  	Input:
  		i love you doo
  	Output:
	  	I LovE YoU DoO
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[1001];
	scanf("%[^\n]",s);
	int n=strlen(s);
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
			s[i]=toupper(s[i]);
		else if(s[i-1]==' '||s[i+1]==' ')
			s[i]=toupper(s[i]);
		else if(i==n-1)
			s[i]=toupper(s[i]);
			
	}
	for(i=0;i<n;i++)
		printf("%c",s[i]);
}
