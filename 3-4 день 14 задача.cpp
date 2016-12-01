#include<iostream.h>
#include<math.h>
 
int fact(long int n)
 {
	 int result;
	 if (n==1) 
		result=1;
	 else
	 result=n*fact(n-1);
	 return result;
 }
int function(int n, int m, float f)

  {if ((n<0) || (m<0))
    {cout<<"error"<<endl;} 
   else
    {return  f=fact(n+m)/fact(n)*fact(m);}
   }   
int main(){
 int n,m,f;
 
 cout<<"Please enter n,m>0\n"<<"n=";
 cin>>n;
 cout<<"m=";
 cin>>m;
 cout<<"\nf="<<function(n,m,f);

 

 
    
    
    
    system("pause");
    return 0;    
    }
