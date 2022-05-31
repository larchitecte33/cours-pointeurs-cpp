#include<iostream>
#include<cstdlib>

using namespace std;

void changer(int *c, int *d)
{
  int a=*c;
  *c=*d;
  *d=a;
}

void fonctionQuiFaisRien()
{
  int first=3;
  int *add;
  cout<<"&first = "<<&first<<endl; // 0x61fec8
  cout<<"add = "<<add<<endl; // 0x6ff01a40
  add=&first;
  cout<<"&first = "<<&first<<endl; // 0x61fec8
  cout<<"add = "<<add<<endl; // 0x61fec8
  cout<<"*add = "<<*add<<endl; // 3
  *add=9;
  cout<<"&first = "<<&first<<endl; // 0x61fec8
  cout<<"add = "<<add<<endl; // 0x61fec8
  cout<<"*add = "<<*add<<endl; // 9
  cout<<"first = "<<first<<endl; // 9
}

int main()
{
  int c=1,d=2;

  cout<<"Avant, a vaut "<<c<<" et b vaut "<<d<<endl;

  changer(&c,&d);

  cout<<"Après, a vaut "<<c<<" et b vaut "<<d<<endl;

  fonctionQuiFaisRien();

  return EXIT_SUCCESS;
}
