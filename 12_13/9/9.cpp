#include<iostream>

using namespace std;

int a=3;

double b=1.5;

void func(int,int);

int main(){

int b=3;

cout<<a<<","<<b<<endl;

func(b,a);

cout<<a<<","<<b<<","<<::b<<endl;

return 0;

}



void func(int a,int c)

{

    a=a+b+c;

    b=a+b+c;

    cout<<a<<","<<b<<","<<c<<endl;

}