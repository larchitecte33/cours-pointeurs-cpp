#include<iostream>
#include<cstdlib>

using namespace std;

int ajout(int *a)
{
  *a += 3;
}

int main()
{
  int b=2;
  
  cout<<"Avant, b vaut "<<b<<endl;

  ajout(&b);

  cout<<"Après, b vaut "<<b<<endl;

  return EXIT_SUCCESS;
}
