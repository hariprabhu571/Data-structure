#include<stdio.h>
int main(){
//fibonacci Series
	int i,j,f,a=0,b=1,c;
	printf("Enter No of fibonacci Series: ");
	scanf("%d",&f);
	printf("%d %d ",a,b);
	for(i=0;i<f-2
	;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}
