#include<iostream>

using namespace std;

int a;

void func(int);

int main(){

   char a='a';

   int b;

   for(b=1;b<=3;b++){

      func(a);

      a++;

   }

   cout<<a<<","<<::a<<endl;

  return 0;

}



void func(int b){

   static int c;

   a++;

   c=a+b;

   cout<<a<<","<<b<<","<<c<<endl;   

}