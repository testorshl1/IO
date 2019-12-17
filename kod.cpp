#include<iostream>
#include<cmath>
#include<cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int suma = 0;
	int iloczyn = 1;
    int suma_nieparzysta = 0;
    double srednia_arytmetyczna = 0.0;
    int suma_parzysta = 0;
    int x = 0;
    int i = 0;
    int min = 0;
    int max = 0;
    const short STALA = 10;
	int Tablica[ STALA ];
     
     system("cls");
      
    srand((unsigned) time(NULL));
      
   
     cout <<"\n";
     
    for( i = 0; i < STALA; i++ ){
    	
    	x=rand()%10 +1;
    	Tablica[i] = x;
    	
    	cout << Tablica[i]<<" ";
    	
    	suma=suma+ Tablica[i];
    	iloczyn=suma*Tablica[i];
    	
    	if(Tablica[i]%2==0)
		{
    		suma_parzysta=suma_parzysta+Tablica[i];
		}
		
		else
		{
			suma_nieparzysta=suma_nieparzysta+Tablica[i];
		}
	}
	
	
	srednia_arytmetyczna=suma/STALA;
	
	min = Tablica[0];
	
	for(int i=1;i<10;i++)
	{
	dsds
		if(min>Tablica[i])
		{
			min = Tablica[i];
		}
	}
	
	max = Tablica[0];
	
	for(int i=1;i<10;i++)
	{
	
		if(max<Tablica[i])
		{
			max = Tablica[i];
		}
	}
	
     cout <<"\n";
     cout <<"Suma elementow Tablicy wynosi: "<<suma<<"\n";
     cout <<"Suma parzystych elementow Tablicy wynosi: "<<suma_parzysta<<"\n";
     cout <<"Suma nieparzystych elementow tablicy wynosi: "<<suma_nieparzysta<<"\n";
     cout <<"Srednia arytmetyczna elementow tablicy wynosi: "<<srednia_arytmetyczna<<"\n";
     cout <<"Najmniejszy element tablicy wynosi: "<<min<<"\n";
     cout <<"Najwiekszy element tablicy wynosi: "<<max<<"\n";
     cout <<"Srednia geometryczna elementow tablicy wynosi: "<<max<<"\n";
     
    
    return 0;
}

stop
