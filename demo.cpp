#include<stdio.h>  
void increaseCount(int *n){
	*n=*n+1; 
} 
int main (){
	int count = 5;
	printf("Gia tri count truoc: %d \n",count);
	increaseCount(&count);
	printf("Gia tri count sau: %d\n",count);
	return 0;  
} 
