# include <stdio.h>
# include <stdlib.h>


main() 

{

FILE *f; 
int N=0; 
double number=0; 
double sa=0; 
double sum=0; 
int i; 


f=fopen ("out.txt", "w");


printf ("Enter N: "); 
scanf ("%d", &N);


for (i=1; i<=N; i++)
    {
    printf ("Enter next number: ");
    scanf ("%lg", &number);
    fprintf (f,"%g\n", number);
    }
fclose(f);

f=fopen ("out.txt", "r"); 

for (i=1; i<=N; i++)
    {
     fscanf (f,"%lg", &number);
     sum+=number;
     }
fclose(f); 


sa=sum/N; 

f=fopen ("input.txt", "w");
fprintf(f,"%g",sa);
fclose(f);

return 0;
}
