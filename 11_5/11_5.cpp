#include<iostream>

   #include<iomanip>

   using namespace std;

   int main(){

     int a=2,b=3;

     float x=3.5,y=2.5;

     a+=6;

     cout<<setprecision(3)<<setiosflags(ios::fixed);

     cout<<(float)(a+b)/2+(int)x%(int)y<<endl;

     return 0;

  }