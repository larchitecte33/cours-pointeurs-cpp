#include<iostream>
#include<cstdlib>

using namespace std;

void echange(int *&a, int *&b)
{
  int *c;
  c=a;
  a=b;
  b=c;
}

int main()
{
  int c=1, d=3;
  int *a=&c;
  int *b=&d;

  echange(a,b);
  cout<<"a="<<*a<<" b="<<*b<<endl;

  return EXIT_SUCCESS;
}
