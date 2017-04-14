#include<stack>
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
//stack<char> s1,s2,s3;
int i,T;
int c1,c2;
cin>>T;
string s;
while(T--)
{
c1=0;
c2=0;
cin>>s;
stack<char> s1,s2,s3;
int flag=1;
for(i=0;i<s.length();i++)
{
switch(s[i])
{
case '{':s1.push(s[i]);
c1++;
break;
case '[':s1.push(s[i]);
c1++;
break;
case '(':s1.push(s[i]);
c1++;
break;
case '}':if(s1.empty()||s1.top()!='{')
         flag=0;
         s1.pop();
         c2++;
         break;
case ']':if(s1.empty()||s1.top()!='[')
         flag=0;
         s1.pop();
         c2++;

break;
case ')':if(s1.empty()||s1.top()!='(')
         flag=0;
         s1.pop();
c2++;
break;
default:break;
}
if(flag==0)
break;
}
if(c1!=c2)
flag=0;
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}

