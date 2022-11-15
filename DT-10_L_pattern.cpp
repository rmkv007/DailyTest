/*Question:
	The program must accept a string S as the input.Then the program 
	must print the string as the desired pattern as the output like 
	the Sample Input/output.
  Sample Input & Output:
  	Input:
  		Skillrack
  	Output:
	  	S
		k
		i
		l
		lr a c k	
*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n/2;i++)
		cout<<s[i]<<endl;
	for(int i=n/2;i<n;i++)
		cout<<s[i]<<" ";	
}
