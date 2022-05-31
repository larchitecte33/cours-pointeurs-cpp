#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int *t;
  int i;

  t = new int[5];
  
  if( t == NULL )
    cout<<"Pas assez de place"<<endl;
  else
  {
    for(int i=0 ; i<5 ; i++)
	    t[i] = i*i;
      
    for(int i=0 ; i<5 ; i++)
      cout<<t[i]<<" ";
    cout<<endl;

    delete[] t;

    t = new int[10];
    
    if( t == NULL )
	    cout<<"Pas assez de place"<<endl;
    else
    {
      for(int i=0 ; i<10 ; i++)
        t[i] = i*i;
      for(int i=0 ; i<10 ; i++)
        cout<<t[i]<<" ";
      cout<<endl;
      
      delete[] t;
    }
  }
  return EXIT_SUCCESS;
}
