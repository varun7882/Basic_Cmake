#include<iostream>
#include "sum.h"
#include "sub.h"
using namespace std;
int main()
{
double a,b;
cout<<"Enter two numbers\n";
cin>>a>>b;
cout<<"The addition is "<<add(a,b)<<endl;
cout<<"The subtraction is "<<sub(a,b)<<endl;
return 0;
}
