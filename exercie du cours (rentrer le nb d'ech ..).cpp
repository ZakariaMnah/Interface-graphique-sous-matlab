#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std; 


int echantillon(float *Sig,int TailleSignal)
{   int i;
    // on veux rentrer les échantillons
    for(i=0;i<TailleSignal;i++)
    {
	     cout<<"Entrer l'echantillon  "<<i+1<<" :\t";cin>>Sig[i];
	}
	cout<<"****************Affichage des echantillons*********************"<<endl<<endl;
	 // Maintenant on veux stocker les echantillons
	 for(i=0;i<TailleSignal;i++)
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

float Energie(float *Sig,int TailleSignal)
{
	int i;
	float som=0;
	for(i=0;i<TailleSignal;i++)
	{
	     Sig[i]=pow(Sig[i],2);
	      som+=Sig[i];
	}
	return som;
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


int main (){
	int TailleSignal;float som;
	float *Sig;float T[100];
	Sig=new float;
	cout<<"Entrer le nombre des echantillons:\t";cin>>TailleSignal;
	echantillon(Sig,TailleSignal);
	
	for(int i=0;i<TailleSignal;i++)
	T[i]=Sig[i];
	
	cout<<"la moyenne est:"<<Moyenne(Sig,TailleSignal)<<endl;
	cout<<"le maximum est :"<<Maximum(Sig,TailleSignal)<<endl;
	cout<<"le minimum est :"<<Minimum(Sig,TailleSignal)<<endl;
	cout<<"l'energie est :"<<Energie(Sig,TailleSignal)<<endl;
	cout<<"la puissance est :"<<Puissance(T,TailleSignal)<<endl;
	delete[] Sig;
  cout<<"fin du programme";
  
}




