/*
    Question:
        The program must accept a string S and a character C as the input. The program 
        must reverse the string S till the first occurrence of the character C and print it as 
        the output. If C has not occurred in S then print -1 as the output.
    Sample Input:
        skillrack
        l
    Sample Output:
        liks
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;
    char c;
    int f=-1;
    cin>>s>>c;
    for(int i=0;i<s.length();i++)
        if(s[i]==c)
        {
            f=i;
            break;
        }
    if(f==-1)
        cout<<f;
    else
        for(int i=f;i>=0;i--)
            cout<<s[i];
    return 0;
}
