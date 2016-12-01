#include<iostream.h>
using namespace std;

struct Event 
{int day;
int month;
int year;};


int main(){
    Event e[3];
    for (int i=0;i<=2;i++)
    {   cout<<"event"<<i<<":\nday-";
        cin>>e[i].day;
          if((e[i].day<=0)||(e[i].day>=31))
                       {cout<<"error";
                        break;}
          
        cout<<"month-";
        cin>>e[i].month;
          if((e[i].month<=0)||(e[i].month>=13))
                       {cout<<"error";
                        break;}
          
        cout<<"year-"; 
        cin>>e[i].year;
          if((e[i].year<=1930)||(e[i].year>=2016))
                       {cout<<"error";
                        break;}        
          cout<<endl; 
    }

if (e[0].year>e[2].year)
     {cout<<"event"<<e[0].day<<"."<<e[0].month<<"."<<e[0].year<<"."<<"it was later";}
  else{if(e[0].year<e[2].year)
         {cout<<"event"<<e[2].day<<"."<<e[2].month<<"."<<e[2].year<<"."<<"it was later";}           
      else{if(e[0].month>e[2].month)
             {cout<<"event"<<e[0].day<<"."<<e[0].month<<"."<<e[0].year<<"."<<"it was later";}
          else {if(e[0].month<e[2].month)
                   {cout<<"event"<<e[2].day<<"."<<e[2].month<<"."<<e[2].year<<"."<<"it was later";}
                  else{if(e[0].day>e[2].day)
                          {cout<<"event"<<e[0].day<<"."<<e[0].month<<"."<<e[0].year<<"."<<"it was later";}
                       else{if(e[0].day<e[2].day)
                               {cout<<"event"<<e[2].day<<"."<<e[2].month<<"."<<e[2].year<<"."<<"it was later";}
                            else{cout<<"these dates are the same"<<endl;}
                            }
                       }                      
                   }            
               } 
          }
    
  
    system("pause");
    return 0;    
    }
