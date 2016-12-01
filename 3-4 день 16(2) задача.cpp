#include<iostream.h>
#include<math.h>
double function (double x,double y)
{   
    return y=0.1*pow(tan(x),2)-sin(4*x);
    }

int main(){
    double a=-2*(3.14);
    double b=2*(3.14);
    double h=0.5;
    double y;
    while(a<=b)
    {        
             int q=0;
             q=q+1;               
               a+=h;               
               cout<<"F(x"<<q<<")=\t"<<function (a,y)<<endl<<"   x=\t"<<a<<endl<<endl;
               
               }
    
    system("pause");
    return 0;    
    }
