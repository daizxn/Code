#include <iostream>

using namespace std;

 

int f(int,int);

int main()

{

   int a=3,b=4,c=5,d;

   d=f(f(a,b),f(a,c));

   cout<<d<<endl;

   return 0;

}

 

int f(int x,int y)

{

  return (y-x)*x;

}