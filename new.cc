#include<iostream>
#include<cstdlib>

using namespace std;

void saisir(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<"Entrez une valeur"<<endl;
    cin>>*t;
    t++;
  }
}

void saisir2(int *t2, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<"Entrez une valeur"<<endl;
    cin>>*t2;
    t2++;
  }
}

void afficher(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<*t<<endl;
    t++;
  }
}

void fusion(int *t, int *t2, int *t3, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    *t3=*t+*t2;
    t++;
    t2++;
    t3++;
  }
}

void ajout(int *t3, int &n)
{
  n++;
  cout<<"Entrez une valeur à ajouter en fin"<<endl;
  cin>>t3[n-1];
}

void ajoutDebut(int *t3, int &n)
{
  n++;
  
  for(int i=n ; i>0 ; i--)
    t3[i]=t3[i-1];
        
  cout<<"Entrez une valeur à ajouter au début"<<endl;
  cin>>t3[0];
}

int main()
{
  int n=5;
  int *t=new int[n];
  int *t2=new int[n];
  int *t3=new int[n];

  cout<<"***** Saisie tableau 1 *****"<<endl;
  saisir(t,n);

  cout<<"***** Saisie tableau 2 *****"<<endl;
  saisir2(t2,n);

  cout<<"***** Affichage tableau 1 *****"<<endl;
  afficher(t,n);
  
  cout<<"***** Affichage tableau 2 *****"<<endl;
  afficher(t2,n);
  
  cout<<"***** Fusion tableau 1 et 2 *****"<<endl;
  fusion(t,t2,t3,n);
  
  cout<<"***** Affichage tableau 3 *****"<<endl;
  afficher(t3,n);
  ajout(t3,n);

  cout<<"***** Affichage tableau 3 *****"<<endl;
  afficher(t3,n);
  ajoutDebut(t3,n);

  cout<<"***** Affichage tableau 3 *****"<<endl;
  afficher(t3,n);

  delete[] t;
  delete[] t2;
  delete[] t3;

  return EXIT_SUCCESS;
}
