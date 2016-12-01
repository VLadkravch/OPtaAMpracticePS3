#include <iostream>
using namespace std;
 
unsigned long int factorial(unsigned long int);
int i = 1; 
unsigned long int result; 
 
int main(int argc, char* argv[])
{    
       int n; 
       cout << "Enter n!: ";
       cin >> n;
       cout << n << "!" << "=" << factorial(n) << endl; 
       
       system("pause");
       return 0;
}
 unsigned long int factorial(unsigned long int f) 
{
       if (f == 1 || f == 0)
             return 1; 
        
      
       result = f * factorial(f - 1);
       cout << "Result= " << result << "\n" << endl;
       
       return result;
}
