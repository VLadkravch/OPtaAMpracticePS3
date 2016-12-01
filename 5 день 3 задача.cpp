#include<iostream.h>
struct student{
       int math;
       int physic;
       int ukr_language;
       float GPA_student;
       };

int main(){
    student s[15];
    float f=0; 
    float GPA_group;
    for (int i=1;i<=15;i++)
    {
        s[i].math=2+rand()%4;
        s[i].physic=2+rand()%4;
        s[i].ukr_language=2+rand()%4;
        s[i].GPA_student=(s[i].math+s[i].physic+s[i].ukr_language)/3;
        cout<<"student"<<i<<"\nmath-"<<s[i].math<<"\nphysic-"<<s[i].physic<<"\nukr_language-"<<s[i].ukr_language<<"\nGPA-"<<s[i].GPA_student<<endl<<endl;
        f=s[i].GPA_student+f;
        GPA_group=f/15;         
        }
        cout<<"GPA group="<<GPA_group<<endl<<endl;
        for (int i=1;i<=15;i++)
        { if(s[i].GPA_student>GPA_group)
        {cout<<"student"<<i<<"-GPA>GPA group  "<<s[i].GPA_student<<endl;}}
    
    system("pause");
    return 0;
    }
