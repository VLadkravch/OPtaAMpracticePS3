#include<iostream>
#include<math.h>
using namespace std;

      int main()
{
    setlocale(LC_ALL,"RUS");
    int i,N,j,M,A[10][10],n,k,An[10][10];
    cout<<"Введите количество строк\nN=";
    cin>>N;
    cout<<"Введите количество столбцов\nM=";
    cin>>M;
    cout<<"Введите матрицу A \n";

    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            cin>>A[i][j];
        
    cout<<"Матрица A:\n \n";
    for (i=0; i<N; i++)
      {
      for (j=0; j<M; j++)
          cout<<A[i][j]<<"\t"; 
      cout<<endl; 
       }  
                      
      cout<<"Введите число n:";
      cin>>n;
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
                              
                       An[i][j]=(A[i][j]*A[i][j])*(A[i][j]*A[i][j]);
                       cout<<An[i][j];
                      
    
    
    system("pause");
    return 0;
}
