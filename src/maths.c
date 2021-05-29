#include"../inc/header_files.h"

int add_2numbers() {

	int num1, num2;

        printf(" \n Enter the 2 numbers to be added :   \n");
        scanf("%d %d", &num1, &num2);


	int sum=0;

	sum = num1 + num2;

	printf(" \n Sum = %d \n\n",sum);

	return 0;

}
