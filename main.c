#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("put a string : \n");
	char c;
	scanf("%char",&c);
	int count=0;
	
	while ((c= getchar())!='\n')
	{
	if (c>='0'&&c<='9')
	   (count=count+1);
	else
	   (count=count);
	}
	
	printf("the number of digits is %d",count);
	
	
	    	
	return 0;
}
