#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int j=10, k=20;
  int *adr1 = &j;
  int *adr2;

  adr2 = &k;
  *adr1 = 5;
  cout<<*adr1<<" = "<<j<<endl;

  adr2=adr1;
  if(adr2 == adr1)
    cout<<"Les deux pointeurs pointent sur la même adresse"<<endl;
  if(*adr2 == *adr1)
    cout<<"Les deux pointeurs ont le même contenu"<<endl;

  adr2++;
  cout<<"La variable j à pour adresse "<<adr1<<endl
      <<"La case suivante à pour adresse "<<adr2<<endl;

  /*
    Sortie :
    5 = 5
    Les deux pointeurs pointent sur la même adresse
    Les deux pointeurs ont le même contenu
    La variable j à pour adresse 0x61ff04
    La case suivante à pour adresse 0x61ff08
  */

  return EXIT_SUCCESS;
}
