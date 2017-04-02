#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int apple[m],orange[n];
    for(int i=0;i<m;i++){
        cin>>apple[i];
    }
    for(int i=0;i<n;i++){
        cin>>orange[i];
    }
    int apple_counter=0,orange_counter=0;
    for(int i=0;i<m;i++){
        if(apple[i]>0){
            int temp= a+apple[i];
            if(temp>=s){
           
                if(temp<=t)
                apple_counter++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(orange[i]<0){
            int temp= b+orange[i];
               // cout<<"as"<<temp<<endl;
            if(temp<=t){
                if(temp>=s)
                orange_counter++;
            }
        }
    }
    cout<<apple_counter<<endl<<orange_counter;
    return 0;
}
