#include<iostream>
#include<cstdlib>

using namespace std;

int *saisir(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<"Entrez une valeur"<<endl;
    cin>>t[i];
  }
  return t;
}

void afficher(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
    cout<<*(t+i)<<endl;
}

int *ajouter(int *t, int n)
{
  t++;
  for(int i=1 ; i<n ; i++)
  {
    *t=*t+*(t-1);
    t++;
  }
  return t;
}

int *ajouterCase(int *t, int &n)
{
  n++;
  cout<<"Entrez un nombre à ajouter"<<endl;
  cin>>t[n-1];
}

int main()
{
  int n;

  cout<<"Entrez la taille"<<endl;
  cin>>n;
  int *t=new int[n];

  saisir(t,n);
  afficher(t,n);
  ajouter(t,n);
  afficher(t,n);
  ajouterCase(t,n);
  afficher(t,n);

  delete[] t;

  return EXIT_SUCCESS;
}
