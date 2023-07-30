#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int s=0;
    int(*ptr)(int,int)=&sum;
    s=(*ptr)(1,2);
    cout<<s<<endl;
}