#include"../inc/header_files.h"
#include"../inc/src_defn_files.h"

int main(void) {

	//printf(" Hello there! ");
	int a,b;

	printf(" \n Enter the 2 numbers to be added :   \n");
	scanf("%d %d", &a, &b);

	int sum = add_2numbers(a,b);

	printf(" \n Sum = %d \n\n",sum);

	return 0;

}

