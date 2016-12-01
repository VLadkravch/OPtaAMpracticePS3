#include<iostream>
using namespace std;
 
int main() 
{
    const int n=20;
        int i,k,c=0,R;
        char str1[R], *p=str1, fl=0;
        char str[n];
        cout<<"Input number:\n\t1)Before\n\t2)After\n\t3)Between\n\n";
        cin>>k;
    switch(k)
    {
//1      
      case 1:
           
    cout<<"\n"; 
    for (i=0; i<n; i++)
       cin>>str[i];
    for(i=0; i<n; ++i)
      {
    if(str[i]==':')
              break;
       cout<<str[i];
      }
       cout<<endl; 
     
//2      
      case 2:    
    cout<<"\n";       
    for (int i=0;i<10;i++)
    {
       cin>>str[i];
       c++;
       if (c!=1)
       if (str[n]==':')
    {      
       for (int j=i;j<10;j++)
       cout<<str[j];
    }
    }
      
    cout<<"\n";
    
     
//3
       case 3:
       cout<<"\n"; 
       char str1[R];
       cin>>R;
       for(; *p; ++p)
       {
        if(*p==':') ++fl;
        else if(fl==1) printf("%c", *p);    
       }
       
       default:
    if((k>3) && (k<1))
            {
            cout<<"Error! Input correct number(1-3)";
            }      
    }
    
    
    system("pause");
    return 0;
}
