#include<iostream>
#include<cstdlib>

using namespace std;

int manipTab(int *tab)
{
  tab[0]+=5;
}

int main()
{
  int t[5]={3,7,1,0,6};
  int *tab = new int[10];

  tab=t;

  manipTab(t);

  for(int i=0 ; i<5 ; i++)
    cout<<t[i]<<endl;

  cout<<"Affichage valeur inconnue : "<<*(tab+20)<<endl;

  return EXIT_SUCCESS;
}
