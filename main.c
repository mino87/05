#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("정수를 하나 입력하시오, : \n");
	scanf ("%d", &i);
	
	if(i>=0)
	   printf("절대값은 %d 입니다.\n",i);
	else
	   printf("절대값은 %d 입니다.\n",-i);
	    	
	return 0;
}
