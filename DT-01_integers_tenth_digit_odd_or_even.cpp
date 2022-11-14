/*Question:
	The program must accept N integers as the input.The program must find
	the occurence of odd digits in the tenth position among N integers as C1.
	The program must find the occurence of even digits in the tenth position 
	among N integers as C2.If C1 is greater than c2 then the programmust print 
	all the integers having the tenth digit as odd.Else if C2 is greater than 
	C1 then the program must print all the integers having the tenth digit as 
	even.Else the program must print -1 as the output.
  Sample Input & Output:
  	Input:
	  	5
		11 22 33 44 55
	Output:
		11 33 55
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,v,c1=0,c2=0;
	cin>>n;
	int a[n],o[n],e[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		v=(a[i]/10)%10;
		if(v%2!=0)
		{
			o[c1]=a[i];
			c1++;
		}
		else if(v%2==0)
		{
			e[c2]=a[i];
			c2++;
		}
	}
	if(c1==c2)
		cout<<"-1";
	else if(c1>c2)
	{
		for(i=0;i<c1;i++)
			cout<<o[i]<<" ";
	}
	else if(c2>c1)
	{
		for(i=0;i<c2;i++)
			cout<<e[i]<<" ";
	}	
	return 0;
}
