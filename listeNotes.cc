#include<iostream>
#include<cstdlib>
#include<limits>

using namespace std;

void ajouterNote(int t[], int &n)
{
  int *note, a;
  cout<<"Entrez une note"<<endl;
  cin>>a;
  note=&a;
  n++;
  t[n-1]=*note;
}

void afficherNotes(int t[], int n)
{
  for(int i=0 ; i<n ; i++)
    cout<<t[i]<<endl;
}

void supprimerNote(int *t, int &n)
{
  int note,comp;
  cout<<"Quelle note voulez-vous supprimer"<<endl;
  cin>>note;
  comp=*t;
  while(comp!=note)
  {
    t++;
    comp=*t;
  }
  note=*t;
  *t=t[n-1];
  n--;
}

int main()
{
  int choix;
  int n = 0;
  int *t;
  bool quit = false;

  while(!quit)
  {
    if (cin.fail())
    {
      // On se débarasse de l'état d'échec
      cin.clear();

      // On supprime les mauvais caractères
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout<<"1. Ajouter une note"<<endl;
    cout<<"2. Afficher les notes"<<endl;
    cout<<"3. Supprimer une note"<<endl;
    cout<<"4. Quitter"<<endl;
    cout<<"Votre choix"<<endl;
    cin>>choix;
    switch(choix)
    {
      case 1:
        ajouterNote(t,n);
        break;
      case 2:
        afficherNotes(t,n);
        break;
      case 3:
        supprimerNote(t,n);
        break;
      case 4:
        quit=true;
        break;
      default:
        cout<<"Choix invalide."<<endl;
        break;
    }
  }
  return EXIT_SUCCESS;
}
