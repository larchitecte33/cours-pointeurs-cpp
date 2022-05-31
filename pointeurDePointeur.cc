#include<iostream>
#include<cstdlib>

using namespace std;

int **saisir(int &n)
{
  int **t = new int *[n];
  
  for(int i=0 ; i<n ; i++)
  {
    t[i]=new int;
    cin>>*t[i];
  }
  
  return t;
}

void afficher(int **t, int n)
{
  for(int i=0 ; i<n ; i++)
    cout<<*t[i]<<" ";
  cout<<endl;
}

int *tableauValeurs(int **t, int n)
{
  int *tab = new int[n];
  
  for(int i=0 ; i<n ; i++)
    tab[i]=*t[i];
  
  return tab;
}

void liberer(int **t, int n)
{
  for(int i=0 ; i<n ; i++)
    delete t[i];
  
  delete[] t;
}

int main()
{
  int n=4;
  int **t=saisir(n);
  afficher(t,n);

  int *tt=tableauValeurs(t,n);
  liberer(t,n);

  for(int i=0 ; i<n ; i++)
    cout<<tt[i]<<" ";
  cout<<endl;

  return EXIT_SUCCESS;
}
