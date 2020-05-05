#include <iostream>

using namespace std; 


int echantillon(int n,int *T)
{   int i;
    // on veux rentrer les échantillons
    for(i=1;i<=n;i++)
    {
	     cout<<"Entrer l'echantillon  "<<i<<" :\t";cin>>T[i];
	}
	cout<<"****************Affichage des echantillons*********************"<<endl<<endl;
	 // Maintenant on veux stocker les echantillons
	 for(i=1;i<=n;i++)
	 {
	 	cout<<"l'echantillon  "<<i<<" :\t"<<T[i]<<endl;
	 	
	 }
	
}



int main (){
	int n;
	int *T;
	T=new int;
	cout<<"Entrer le nombre des echantillons:\t";cin>>n;
	echantillon(n,T);
	delete[] T;
	
  cout<<"fin du programme";
  
}
