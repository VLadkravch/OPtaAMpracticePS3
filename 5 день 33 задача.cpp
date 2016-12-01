#include<iostream.h>
struct student{
       int subject[8];       
       float Sum_marks;
       };

int main(){
    student s[15];
    float max=s[0].Sum_marks;
       
    float GPA_group;
for (int i=0;i<15;i++)
    {s[i].Sum_marks=0;       
     for (int j=0;j<8;j++)
       {
        s[i].subject[j]=2+rand()%4;
        s[i].Sum_marks= s[i].Sum_marks+s[i].subject[j];       
       }
     }
   for (int i=0;i<15;i++)
    {
    cout<<"student\t"<<i+1<<endl;    
    cout<<"math\t\t"<<s[i].subject[0]<<endl;
    cout<<"physic\t\t"<<s[i].subject[1]<<endl;
    cout<<"ukr_language\t"<<s[i].subject[2]<<endl;
    cout<<"ukr_literatura\t"<<s[i].subject[3]<<endl;
    cout<<"economic\t"<<s[i].subject[4]<<endl;
    cout<<"programing\t"<<s[i].subject[5]<<endl;
    cout<<"history\t\t"<<s[i].subject[6]<<endl;
    cout<<"eng_language\t"<<s[i].subject[7]<<endl;
    cout<<"----"<<endl;
    cout<<"Sum_marks\t"<<s[i].Sum_marks<<endl<<endl;
    }   
    for (int i=1;i<15;i++)
    {if(max<s[i].Sum_marks)
    {max=s[i].Sum_marks;}}
    cout<<"max Sum marks "<<max<<endl;         
    system("pause");
    return 0;
    }
