#include<iostream>

using namespace std;

int a=3;

double b=1.5;

int main(){

int c;

cin>>c;

if(c>3) {

   int b=3;

   cout<<a<<","<<b<<endl;

}

else{

   double a = 5.6;

   b = a + b;

  cout << a << "," << b << endl;

}

a=a+b;

char b='b';

cout<<a<<","<<b<<endl;



return 0;

}