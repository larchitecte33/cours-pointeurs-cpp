#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int t[10];
  for(int i=0 ; i<10 ; i++)
    t[i]=i;
  cout<<*t<<endl; // 0
  cout<<*(t+1)<<endl; // 1
  cout<<*(t+2)<<endl; // 2
  cout<<*(t+3)<<endl; // 3

  int *p = t;
  cout<<*p<<endl; // 0
  p++;
  cout<<*p<<endl; // 1
  p++;
  cout<<*p<<endl; // 2

  return EXIT_SUCCESS;
}
