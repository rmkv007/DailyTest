/*Question:
	The program must accept N integers as the input.The program must print the 
	minimum and maximum integers among N integers as the output.
  Sample Input & Output:
  	Input:
  		7
  		10 29 128 7 28 39 11
  	Output:
	  	7 128
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int g=0,l=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>g)
			g=a[i];
		if(a[i]<l)
			l=a[i];	
	}
	cout<<l<<" "<<g;
}
