

#include<iostream>dsdsfsfds
#include<cmath>
#include<cstdlib>
#include <time.h>
using namespace std;
 
 
    int Rs;
    int sekunda_1;
    int sekunda_2;
 
    struct czas { 
    int g;
    int m;
    int s;
    }Czas;
   
   
int przeliczanie(struct czas t1, struct czas t2)
{
//Przeliczenie czasów 
    sekunda_1 = t1.g*3600 + t1.m*60 +t1.s;
    sekunda_2 = t2.g*3600 + t2.m*60 +t2.s;
     
    //Co od czego odj1a
    if(sekunda_1<sekunda_2){
        Rs=sekunda_2-sekunda_1;
    }else{
        Rs=sekunda_1-sekunda_2;
    }
}
     
int main()
{
    struct czas t1; 
    struct czas t2; 
//-----------------------------------
    cout<<"Podaj godzine: ";
    cin>>t1.g;
     
    cout<<"Podaj minute: ";
    cin>>t1.m;
     
    cout<<"Podaj sekunde: ";
    cin>>t1.s;
     
//-----------------------------------
     
    cout<<"Podaj godzine: ";
    cin>>t2.g;
     
    cout<<"Podaj minute: ";
    cin>>t2.m;
     
    cout<<"Podaj sekunde: ";
    cin>>t2.s;    
     
//-----------------------------------   
 
    
    //Ró?nica 
    przeliczanie(t1,t2);
    cout<<"Roznica czasow wynosi "<<Rs<<"\n";
     
    //Przeliczanie ró?nicy na godziny minuty sekundy
     
    
     
    system("pause");
     
    return 0;
}

