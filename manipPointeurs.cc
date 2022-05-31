#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int j = 10, i = 5;
  int *adr = &j, *adr2 = &i, *adr3;

  if(adr == adr2+1)
    cout<<"les pointeurs sont égaux"<<endl;
  else
    cout<<"Pas égaux"<<endl;

  // Affiche : les pointeurs sont égaux

  return EXIT_SUCCESS;
}
