#include<iostream>
#include<cstdlib>

using namespace std;

void minMax(int i, int j, int *min, int *max)
{
  if(i<j)
  {
    *min=i;
    *max=j;
  }
  else
  {
    *min=j;
    *max=i;
  }
}

int main()
{
  int a,b,w,x;

  cout<<"Entrez la valeur de a"<<endl;
  cin>>a;
  cout<<"Entrez la valeur de b"<<endl;
  cin>>b;

  minMax(a,b,&w,&x);
  cout<<"Le plus petit élément est "<<w<<endl;
  cout<<"Le plus grand élément est "<<x<<endl;

  return EXIT_SUCCESS;
}
