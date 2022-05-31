#include<iostream>
#include<cstdlib>

using namespace std;

int *saisir(int *t, int &n)
{
  n++;
  
  if(n>1)
  {
    for(int i=1 ; i<n ; i++)
	    t++;
  }

  cout<<"Entrez un nombre"<<endl;
  cin>>*t;

  return t;
}

void afficher(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<*t<<endl;
    t++;
  }
}

int main()
{
  int n=0,rep;
  int *t = new int [n];
  bool quit=false;

  while(!quit)
  {
    saisir(t,n);
    afficher(t,n);
    cout<<"Voulez vous quitter ? 1=oui 2=non"<<endl;
    cin>>rep;
    if(rep==1)
    {
      quit=true;
      delete[] t;
    }
  }

  return EXIT_SUCCESS;
}
