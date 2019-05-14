#include<stdio.h>
#include "espl_lib.h"

int main() {
	int n = 0, dummy = 1;
	while (dummy){
	
		printf("choose a nunber \n");
		scanf("%d",&n);
		printf("%s \n",num_to_words(n));
		printf("press 1 to continue or 0 to stop \n");
		scanf("%d", &dummy);
	}	
	return 0;
}
