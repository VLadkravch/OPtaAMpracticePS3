#include<iostream.h>
#include<conio.h>
using namespace std;


  int main(){

  string t;
  int c=0;
  int f=0;

  for(int i=0;i<t.size();i++)
     {
      if(t[i]==')')c--;
      if(t[i]=='(')c++;
      if(c<0)f=1;
     }
     
     
   if(c==0)
     {
      if(f)cout<<"True\n";
      else cout<<"Faulse\n";
     }
     else cout<<"Faulse\n";
     
     system("pause");
     return 0;
     }
     
