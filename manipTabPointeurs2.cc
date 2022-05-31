#include<iostream>
#include<cstdlib>

using namespace std;

void augmenter(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    *t=*t+1;
    t++;
  }
}

void additionSoustraction(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
  {
    if(i%2==0)
      *t=*t+1;
    else
      *t=*t-1;
    t++;
  }
}

void afficher(int *t, int n)
{
  for(int i=0 ; i<n ; i++)
    cout<<t[i]<<" ";
  cout<<endl;
}

int main()
{
  int n=5;
  int t[]={5,8,3,9,1};

  augmenter(t,n);
  afficher(t,n); // 6 9 4 10 2
  additionSoustraction(t,n);
  afficher(t,n); // 7 8 5 9 3
  
  return EXIT_SUCCESS;
}
