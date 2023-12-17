#include <iostream>

using namespace std;

 

int k=1;

void fun(int);

int main()

{

   int i=4;

   fun(i);

   cout<<i<<' '<<k<<endl;

  return 0;

}

 

void fun(int m)

{  m+=k;

   k+=m;

   {char k='B';

   cout<<k-'A'<<endl;}

   cout<<m<<' '<<k<<endl;

}