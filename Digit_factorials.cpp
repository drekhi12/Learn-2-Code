/*Find the sum of all numbers below N which divide the sum of the factorial of their digits. */
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned long long int n,total,count=0,sum=0;
    int arr[100000];
    cin>>n;
    for(int i=10;i<n;i++){
        int k=i;
        total=0;
        while(k>0){
            int r=k%10;
            unsigned long long int fact=1;
       for(int j=1;j<=r;j++){
           fact = fact*j;
       }
            total +=fact;
            k=k/10;
    }
        if(total%i==0 && total!=0){
            arr[count]=i;
            count++;
        }
    }
    
    for(int i=0;i<count;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
