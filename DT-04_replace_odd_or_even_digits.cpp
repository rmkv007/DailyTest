/*Question:
	The program must accept an integer N as the input.The program must 
	replace the odd digits by 1 and replace the even digits by 0 in N.
	Finally, the program must print the modified value of N as the output.
  Sample Input & Output:
  	Input:
  		2345
  	Output:
	  	0101
*/
#include<iostream>
using namespace std;
int main()
{
	long int N;
	cin>>N;
	int index,v,count=0,b[100];
	while(N>0)
	{
		v=N%10;
		if(v%2==0)
		{
			b[count]=0;
		}
		else{
			b[count]=1;
		}
		N/=10;
		count++;
	}
	for(index=count-1;index>=0;index--)
	{
		cout<<b[index];
	}
}
