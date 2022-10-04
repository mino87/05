#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=59;
	int i;
	int trial=1;
	
	do
	{
		printf("input a number : ");
		scanf("%d",&i);
		if(i>a)
		{
		    printf("high!\n");
		    trial=(trial+1);
		}

		else if(i<a)
		{
			printf("low!\n");
		    trial=(trial+1);
		}    
	
	}
	while (i!=a);
	printf("answer!\n");
	printf("trial is %d\n",trial);    
	
	
	 
	
	    	
	return 0;
}
