/*Question:
	The program must accept an integer N as the input.The program must
	print the count of leading zero(s) in the binary representation of
	N as the output.
  Sample Input & Output:
  	Input:
  		16
  	Output:
	  	4
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],c=0,c1=0;
	while(n>0)
	{
		a[c]=n%2;
		c++;
		n/=2;
	}
	for(int i=0;i<c;i++)
	{
		if(a[i]!=1)
			c1++;
		else
			break;
	}
	cout<<c1;
}
