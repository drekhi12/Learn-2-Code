#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=38){
            if(a[i]%5>2){
                a[i]= a[i]+5-(a[i]%5);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
