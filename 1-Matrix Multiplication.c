#include<stdio.h> 
int main(){  
int matA[10][10],matB[10][10],mul[10][10],r,c,i,j,k;     
printf("Enter the number of row=");    
scanf("%d",&r);    
printf("Enter the number of column=");    
scanf("%d",&c);    
printf("Enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&matA[i][j]);    
}    
}    
printf("Enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&matB[i][j]);    
}    
}    
    
printf("Multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{ 
mul[i][j]+=matA[i][k]*matB[k][j];    
}    
}    
}        
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}
