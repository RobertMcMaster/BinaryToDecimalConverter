/* This work is mine unless otherwise cited -Robert McMaster */
#include <stdio.h>
#include <math.h>
void printDashes(){
	for (int i =0; i < 50; i++)
		printf("-");
	printf("\n");
}

int binaryToDecimal(){
	printf("Welcome to binary to decimal converter...\n");
	unsigned long binary = 0;
   	int decimal = 0, i = 0, rem;
	printf("Enter a binary:\n");
	scanf("%lu", &binary);

	while (binary != 0){
		rem = binary % 10;
        binary /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
	return decimal;
}

unsigned long decimalToBinary(){
	printf("Welcome to decimal to binary converter...\n");
	int decimal = 0;
	int rem, i = 1;
	unsigned long binary = 0;

	printf("Enter a decimal:\n");
	scanf("%d", &decimal);

    while (decimal != 0) {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem * i;
        i *= 10;
    }
	return binary;
}
int main(){
	int choice = 0;
	while(1){
		printDashes();
		printf("Enter (1) to convert binary to decimal,\n(2) to convert decimal to binary,(3) for exit:");
		scanf("%d", &choice);
		getchar();
		if (choice == 1){
			int res = binaryToDecimal();
			printf("%d\n", res);
			printDashes();
			printf("\n");
		}
		else if (choice == 2){
			unsigned long res = decimalToBinary();
			printf("%lu\n", res);
			printDashes();
			printf("\n");
		}
		else
			break;

	}
	return 0;
}