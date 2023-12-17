#include <iostream>

using namespace std;

 

int max(int,int);

int main()

{

   int a=3,b=10,c;

   c=max(a,b);

   cout<<c<<endl;

   return 0;

}

 

int max(int x,int y)

{ int z;

   z=x>y?x:y;

  return z;

}