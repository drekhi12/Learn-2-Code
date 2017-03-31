/* What is the sum of the digits of the number 2 power N*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    cin>>test;
    while(test>0){
        
    unsigned long long int n;
    cin>>n;
        int a[100000];
    unsigned long long int carry=0,prod=0,count=1,result=0;
        a[0]=1;
        for(unsigned long int i=1;i<=n;i++){
            carry =0;
            for(unsigned long int j =0 ;j<count;j++){
                prod = (a[j]*2)+carry;
                a[j]=prod%10;
                carry = prod/10;
            }
            while(carry){
                a[count]=carry%10;
                carry = carry/10;
                count++;
            }
        }
       // cout<<count;   
   for(unsigned long long int i=0;i<count;i++){
       result = result + a[i];
   }
    cout<<result<<endl;
        test--;
    }
    return 0;
        
}
