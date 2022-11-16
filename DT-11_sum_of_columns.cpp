/*Question:
	The program must accept an integer matrix of size RxC as the input.The program
	must print the sum S of the elements in the columns where the first element of
	that column is an odd integer as the output.If there is no such first element in any
	column of the matrix then the program must print -1 as the output.
  Sample Input & Output:
  	Input:
  		3 4
  		8 2 3 5
  		9 8 7 6
  		1 2 5 5
  	Output:
	  	31
*/
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int a[r][c],b[c],count=0,s=0,i1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<c;j++){
			if(a[i][j]%2!=0)
			{
				b[count]=j;
				count++;
			}
		}
	}
	if(count==0)
		cout<<"-1";
	else{
		for(int i=0;i<count;i++)
		{
			i1=b[i];
			for(int j=0;j<r;j++)
				s+=a[j][i1];
		}
		cout<<s;
	}	
}
