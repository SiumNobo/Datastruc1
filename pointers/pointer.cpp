#include<iostream>
using namespace std;
int main()
{
int a[10]={10,20,20,30,40};
int *p=&a[2];
p=p+2;
cout<<*p<<endl;
}