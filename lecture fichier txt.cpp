#include <iostream>
#include<fstream>
using namespace std; 

int main()
{

      string s;
      ifstream f("C:/Users/Othman/Desktop/Zakaria/S2/Programmation orient� objet/Projets/Projet matlab c++/testt.txt");
      if (!f.is_open())
          {
  	                  cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
  	                  exit(-1);
          }      
         
      else
      /*
          {
          f >> s; //Les espaces constituent des s�parateurs pour l�op�rateur >>. 
          }
      */
    

 
 while(getline(f,s)) //Tant qu'on n'est pas � la fin, on lit
      {
         cout << s<< endl;
         //Et on l'affiche dans la console
      }
      
      f.close();
      cout<<"\n\n";
  cout<<"FIN DE PROGRAMME"<<endl;
}





