#include<iostream.h>
struct Dens{
       float mass;
       float volume;
       float density;
       };

int main(){
    Dens d[30];
    float min;
    for (int i=0;i<=30;i++)
    {
        d[i].mass=1+rand()%100;
        d[i].volume=1+rand()%100;
        d[i].density=d[i].mass/d[i].volume;
        cout<<"Mass"<<i<<"="<<d[i].mass<<"\tVolume"<<i<<"="<<d[i].volume<<endl<<endl;
        cout<<"Density"<<i<<"="<<d[i].density<<endl<<endl<<endl;
        min=d[0].density;
        for (int i=1;i<=30;i++)
           {if(min>d[i].density) 
           min=d[i].density;}
           
         }
         cout<<"min density="<<min;
    system("pause");
    return 0;
    }
