#include<iostream>
#include<cstdlib>

using namespace std;

int *ajout(int *t, int &n)
{
  n++;
  cout<<"Entrez une valeur"<<endl;
  cin>>t[n-1];
  return t;
}

int main()
{
  int n=5;
  int *t=new int[n];
  for(int i=0 ; i<n ; i++)
  {
    t[i]=i;
  }
  ajout(t,n);
  for(int i=0 ; i<n ; i++)
    cout<<t[i]<<endl;;

  delete[] t;

  return EXIT_SUCCESS;
}
