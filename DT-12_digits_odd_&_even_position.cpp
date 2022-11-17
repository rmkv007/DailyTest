/*Question:
	The program must accept an Integer N as the input.The program must print 
	the digits which are present at the end at the odd position in N.Then the 
	program must print the digits which are present at the even position in N 
	as the ouput.
  Sample Input & Output:
  	Input:
  		32768
  	Output:
	  	3 7 8
		2 6  	
*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(i%2==0)
			cout<<s[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<s.length();i++)
	{
		if(i%2!=0)
			cout<<s[i]<<" ";
	}
}
