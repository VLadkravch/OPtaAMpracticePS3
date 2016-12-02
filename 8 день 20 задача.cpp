#include <iostream.h>
#include <conio.h>
 struct biblioteka
  {
char Avtor[200];
int Kilkist;
char Kniga[200];
  };
int main()
   {
  int n;
  cout<<"Dobavte knigu v BD:\n";
  cout<<"Kilkist knig :";
  cin>>n;        
 biblioteka s[n];
 for (int i=0;i<n;i++)
    { 
       cout<<"\n Avtor "<<i+1<<" knigi : ";
        cin>>s[i].Avtor;
        cout<<"\n Nazva "<<i+1<<" knigi : ";
        cin>>s[i].Kniga;          
        cout<<"\n Kilkist "<<i+1<<" primirnikov : ";
        cin>>s[i].Kilkist;
        cout<<endl;          
     }   
    cout<<"\n Avtor \tNazva\t Kilkist"<<endl;
    for (int i=0;i<n;i++)
    { 
      
       cout<<s[i].Avtor<<"\t"<<s[i].Kniga<<"\t"<<s[i].Kilkist<<endl;         
         
     }   
system("pause");
return 0;
}
