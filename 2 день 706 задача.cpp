#include<iostream>
#include<math.h>
using namespace std;

      int main()
{
    setlocale(LC_ALL,"RUS");
    int i,N,j,M,A[10][10],n,k,An[10][10];
    cout<<"������� ���������� �����\nN=";
    cin>>N;
    cout<<"������� ���������� ��������\nM=";
    cin>>M;
    cout<<"������� ������� A \n";

    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            cin>>A[i][j];
        
    cout<<"������� A:\n \n";
    for (i=0; i<N; i++)
      {
      for (j=0; j<M; j++)
          cout<<A[i][j]<<"\t"; 
      cout<<endl; 
       }  
                      
      cout<<"������� ����� n:";
      cin>>n;
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
                              
                       An[i][j]=(A[i][j]*A[i][j])*(A[i][j]*A[i][j]);
                       cout<<An[i][j];
                      
    
    
    system("pause");
    return 0;
}
