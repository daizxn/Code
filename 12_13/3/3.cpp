#include <iostream>

using namespace std;

 

int w=3;

int fun(int);

int main()

{

   int w=10;

   cout<<fun(5)*w<<endl;

  return 0;

}

 

int fun(int k)

{ if(k==0) return w;

  return fun(k-1)*k;

}