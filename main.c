#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("input a number : ");
	int sum=0;
	int x;
	scanf("%d",&x);// 이게 받은 숫자 
	int i;
	for(i=0;i<=x;i++)
	    sum=sum+i;
	
	printf("The result is %d", sum); 
	
	   
	
	
	
	    	
	return 0;
}
