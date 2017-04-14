#include<iostream>
#include<fstream>
using namespace std;
#include <stdlib.h>

main(){
ofstream myfile;
myfile.open("input.txt");
cout<<"Enter the range of numbers to be generated\n";
int lower,upper;
cout<<"Enter the lower bound\n";
cin>>lower;
cout<<"Enter the upper bound\n";
cin>>upper;
int diff = upper-lower;
cout<<"Enter how many numbers you want to generate\n";
int limit;
cin>>limit;
for(int i=0;i<limit;i++){
int v = rand() % (diff+lower);
myfile<<v<<endl;  
}
myfile.close();
}
