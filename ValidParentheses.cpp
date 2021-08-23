#include <iostream>
#include <conio.h>
#include <stack> 
using namespace std;
bool isValid(string s)
{
    stack <char> st;
    char x;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            st.push(s[i]);
            continue;
        }
        if(st.empty())
            return false;
        else if(s[i]== ']')
        {
            x=st.top();
            st.pop();
            if(x=='{'||x=='(')
                return false;
                
        }
        else if(s[i]=='}')
        {
            x=st.top();
            st.pop();
            if(x=='['||x=='(')
                return false;
        }
        else if(s[i]==')')
        {
            x=st.top();
            st.pop();
            if(x=='{'||x=='[')
                return false;
            continue;
        }
    }
    return(st.empty());
}
int main()
{
    string input;
    bool val;
    cout<<"Input: ";
    getline(cin,input);
    val = isValid(input);
    if(val==1)
    cout<<"Output: True";
    else
    cout<<"Output: False";
    return 0;
}