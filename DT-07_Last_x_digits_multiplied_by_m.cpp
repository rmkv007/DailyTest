/*Question:
	The program must accept three integers N,X and M as the input. The program
	must print the integer formed by the last X digits multiplied by M as the output.
  Sample Input & Output:
  	Input:
  		325687
  		3
  		10
  	Output:
	  	6870
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n,m,k=0;
	cin>>s>>n>>m;
	int si=s.length();
	for(int i=si-n;i<si;i++)
	{
		k*=10;
		k+=(int)s[i]-48;
	}
	cout<<k*m;
}
