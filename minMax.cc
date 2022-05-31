#include<iostream>
#include<cstdlib>

using namespace std;

void minMax(int taille, int tableau[], int *min, int *max)
{
    *min = tableau[0];
    *max = tableau[0];
 
    for(int i=0; i < taille; i++)
    {
        if(*min > tableau[i]) 
          *min = tableau[i];

        if(*max < tableau[i]) 
          *max = tableau[i];
    } 
}

int main()
{
  const int tailleTableau = 4; 
  int tableau[tailleTableau] = {5, 8, 3, 1}, min(0), max(0);
 
  minMax(tailleTableau, tableau, &min, &max);

  cout << "Le minimum du tableau est " << min << endl;
  cout << "La maximum du tableau est " << max << endl;

  return EXIT_SUCCESS;
}
