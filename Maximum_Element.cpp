/*
You have an empty sequence, and you will be given queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

Input Format

The first line of input contains an integer,N . 
The next N lines each contain an above mentioned query. (It is guaranteed that each query is valid.)

Output Format

For each type 3 query, print the maximum element in the stack on a new line.

Sample Input

10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3

Sample Output

26
91
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    unsigned long  int count=0,b,res_count=0;
    unsigned long int a[100000],res[100000];
    for(int i=0;i<n;i++){
        cin>>b;
        if(b==1){
            cin>>a[count];
            count++;
        }
        else if(b==2){
            count--;
        }
        else{
           res[res_count] = *max_element(a,a+count);
            res_count++;
        }
    }
    for(int i=0;i<res_count;i++){
        cout<<res[i]<<endl;
    }
    
    return 0;
}
