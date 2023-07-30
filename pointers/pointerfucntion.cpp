#include <iostream>

void Display();

using namespace std;
void sum(int a, int b)
{
    cout<<a+b<<endl;
}
void sub(int a, int b)
{
    cout<<a-b<<endl;
}

void Display(void *ptr(int,int))
{
    ptr(5,9);
}

int main()
{
    Display(reinterpret_cast<void *(*)(int, int)>(sum));
    Display(reinterpret_cast<void *(*)(int, int)>(sub));
}

