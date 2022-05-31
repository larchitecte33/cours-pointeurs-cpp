#include<iostream>
#include<cstdlib>

using namespace std;

void fct1(int *t)
{
  *t=5;
}

int main()
{
  int *t=new int;
  *t=3;
  cout<<*t<<endl;
  fct1(t);
  cout<<*t<<endl;

  delete t;
  return EXIT_SUCCESS;
}
