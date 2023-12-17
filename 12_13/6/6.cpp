#include<iostream>

using namespace std;

int a;

double b=3.2;

int main(){

int b=3;

double c=2.3;

cout<<a<<","<<b<<","<<c<<endl;

a=a+b;

b++;

c=::b;

cout<<a<<","<<b<<","<<c<<endl;

return 0;

}