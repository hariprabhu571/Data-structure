#include<stdio.h>
int main(){
	int i,f,temp=1;
	printf("Enter the No: ");
	scanf("%d",&f);
	for(i=1;i<f+1;i++){
		temp=temp*i;
	}
	printf("Factorial of given no:%d ",temp);
}
