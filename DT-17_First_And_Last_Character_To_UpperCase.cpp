/*
    Question:
        The program must accept a string S as the input. For each word in S, the program
        must convert the first and last alphabet to upper case. Finally the program
        must print the modified string as the output.
        Note: The string S contains only alphabets.
    Sample Input:
        i love you doooo
    Sample Output:
        I LovE YoU DoooO
*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
            cout<<char(toupper(s[i]));
        else if(s[i+1]==' '||s[i-1]==' ')
            cout<<char(toupper(s[i]));
        else if(i==s.length()-1)
            cout<<char(toupper(s[i]));
        else
            cout<<s[i];
    }
    return 0;
}
