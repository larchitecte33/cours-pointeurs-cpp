#include<iostream>
#include<cstdlib>

using namespace std;

int *saisir(int &taille)
{
  cout<<"Entrez la taille du tableau"<<endl;
  cin>>taille;

  int *t = new int[taille];
  
  for(int i=0 ; i<taille ; i++)
    cin>>t[i];

  return t;
}

void saisir2(int * &t, int &taille)
{
  cout<<"Entrez la taille du tableau"<<endl;
  cin>>taille;

  t=new int[taille];
  
  for(int i=0 ; i<taille ; i++)
    cin>>t[i];
}

void afficher(int *t, int taille)
{
  for(int i=0 ; i<taille ; i++)
    cout<<t[i]<<" ";
  cout<<endl;
}

int *ajoutEnFin(int *t, int &taille, int element)
{
  taille++;
  int *tmp = new int[taille];
  
  for(int i=0 ; i< taille-1 ; i++)
    tmp[i]=t[i];
  
  tmp[taille-1]=element;
  
  if(taille>1)
    delete[] t;
  
  return tmp;
}

void ajoutEnFin2(int * &t, int &taille, int element)
{
  taille++;
  int *tmp = new int[taille];
  
  for(int i=0 ; i< taille-1 ; i++)
    tmp[i]=t[i];
  
  tmp[taille-1]=element;
  
  if(taille>1)
    delete[] t;
  
  t=tmp;
}

void ajoutEnDebut(int *&t, int &taille, int elemDeb)
{
  taille++;
  int *tmp = new int[taille];
  
  for(int i=1 ; i<taille ; i++)
    tmp[i]=t[i-1];
  
  tmp[0]=elemDeb;
  
  if(taille>1)
    delete[] t;
  
  t=tmp;
}

int main()
{
  int *t;
  int taille=0;
  saisir2(t,taille);
  afficher(t,taille);
  ajoutEnFin2(t,taille,4);
  afficher(t,taille);
  ajoutEnDebut(t,taille,1);
  afficher(t,taille);

  return EXIT_SUCCESS;
}
