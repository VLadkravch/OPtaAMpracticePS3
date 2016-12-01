#include <iostream.h>

using namespace std;
int main()
{     int m,h=0;
      char str[100];
      cin.getline(str,100);
      m=strlen(str);
      for (int i=m;i>0;i--)
      {
          if (str[i] == ' ')
          { break;}
          else 
            if (str[i] == 'k')
                     {h++;}
                  
       }
      cout<<"amount of 'k'="<<h<<endl;
      system("pause");
      return 0;
      }
