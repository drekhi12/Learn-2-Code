#include<stack>
#include<iostream>
#include<vector>
using namespace std;

#define MAX 999999
int main()
{
int i,j,x;
int N,Q;
stack<int> s1,s2,s3;
cin>>N>>Q;
vector<int> vec(MAX+1,1);
vector<int> v;
int l;
vec[0]=0;
vec[1]=0;
for(i=2;i*i<=MAX;i++)
{
for(j=2*i;j<=MAX;j+=i)
vec[j]=0;
}
for(i=2;i<MAX;i++)
if(vec[i])
v.push_back(i);
for(i=0;i<N;i++)
{cin>>l;
s3.push(l);
}
for(i=0;i<Q;i++)
{
l=v[i];
while(!s3.empty())
{
x=s3.top();
if(x%l==0)
{
s2.push(x);
}
else
s1.push(x);
s3.pop();
}
while(!s2.empty())
{
cout<<s2.top()<<endl;
s2.pop();
}
s3=s1;
while(!s1.empty())
s1.pop();
}
while(!s3.empty())
{
cout<<s3.top()<<endl;
s3.pop();
}
}

