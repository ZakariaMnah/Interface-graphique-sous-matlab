#include <iostream>
#include<fstream>
#include<math.h>
#define pi 3.14


using namespace std; 


 Affechantillon(float *Sig,int TailleSignal)
{
	 for(int i=0;i<TailleSignal;i++)
	 {
	 	cout<<"l'echantillon  "<<i+1<<" :\t"<<Sig[i]<<endl;	 	
	 }		
}

float Moyenne(float *Sig,int TailleSignal)
{
	int i;
	float som=0;
	for(i=0;i<TailleSignal;i++)
	{
		som+=Sig[i];
	}
	som=(som/TailleSignal);
	
	return som;
}

float Maximum(float *Sig,int TailleSignal)
{
	int i;
	int max=0;
	for(i=1;i<TailleSignal;i++)
	{
	        if(Sig[i]>Sig[max])
	        max=i;
	}
	return Sig[max];
}

float Minimum(float *Sig,int TailleSignal)
{
	int i;
	int min=0;
	for(i=1;i<TailleSignal;i++)
	{
	        if(Sig[i]<Sig[min])
	        min=i;
	}
	return Sig[min];
}

float Puissance(float *Sig,int TailleSignal)
{
	int i;
	float som=0;
	for(i=0;i<TailleSignal;i++)
	{
	      Sig[i]=pow(Sig[i],2);
	      som+=Sig[i];
	}
	
	return som/TailleSignal;
}

float Energie(float *T,int TailleSignal)
{
	int i;
	float som=0;
	for(i=0;i<TailleSignal;i++)
	{
	     T[i]=pow(T[i],2);
	      som+=T[i];
	}
	
	return som;
}

void tf(float *tab,int nbLignes)
{
	float real,img;

	ofstream f("C:/Users/Othman/Desktop/tfcpp.txt");
	        if (!f.is_open())
          {
  	                  cout << "Impossible d'ouvrir le fichier en ecriture !" << endl;
  	                  exit(-1);
          }      
    else
	{
        for(int i=0;i<nbLignes;i++)
        {
        float real=0,img=0;
        for(int j=0;j<nbLignes;j++)
          {
		real+=tab[j]*cos(((float)2*pi*i*j)/(float)nbLignes);
		img+=tab[j]*sin(((float)(-2)*pi*i*j)/(float)nbLignes);
		  }   
           f<<sqrt(pow(real,2)+pow(img,2))<<endl; 
        }   
    }
           f.close();
	
	

}

////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

int main (){
	
	
      int TailleSignal;
	  int i=0;
	  float T[300],tab[300];
	  int nbLignes;
    
	  cout<<"****************** Bienvenue  , ce programme permet d'afficher les echantillons d'un signal a partir ******************************";
	  cout<<"*************** d'un fichier txt et de calculer la moyenne ,le maximum , le minimum...**********************"<<endl<<endl;
	  
	    ifstream f("C:/Users/Othman/Desktop/signal.txt");
        if (!f.is_open())
          {
  	                  cout << "Impossible d'ouvrir le fichier en ecriture !" << endl;
  	                  exit(-1);
          }      
        else{
        f>>T[i];
        cout<<T[i]<<endl;  
        while(!f.eof())           //Affichage de contenu de fichier
                  { 
		           i++; 
                   nbLignes=i;
                   nbLignes++;
                   f>>T[i];
                   cout<<T[i]<<endl;
                  }
               	
	        }
	    f.close();
	float *Sig;
	Sig=new float(nbLignes);
      
      /////////////////////////////
     cout<<"******************Affichage des echantillons*************************"<<endl<<endl;
              for(int i=0;i<nbLignes;i++)
       	cout<<"l'echantillon  "<<i+1<<" :\t"<<T[i]<<endl;	
      cout<<"\n\n";
       cout << "votre fichier contient " << nbLignes << " ligne(s)." <<endl;
      ///////////////////////////
    for(int i=0;i<nbLignes;i++)    
      {
	  Sig[i]=T[i];
      }
    for(int i=0;i<nbLignes;i++)    
      {
	  tab[i]=T[i];
      }
	TailleSignal=nbLignes;
	cout<<"\n\n";
	cout << "votre fichier contient " << nbLignes << " ligne(s)." <<endl;
	cout<<"la moyenne est:"<<Moyenne(T,TailleSignal)<<endl;
	cout<<"le maximum est :"<<Maximum(T,TailleSignal)<<endl;
	cout<<"le minimum est :"<<Minimum(T,TailleSignal)<<endl;
	cout<<"l'energie est :"<<Energie(T,TailleSignal)<<endl;
	cout<<"la puissance est :"<<Puissance(Sig,TailleSignal)<<endl;
	tf(tab,nbLignes);
    cout<<"fin du programme"<<endl;
    delete[] Sig;
  
}




