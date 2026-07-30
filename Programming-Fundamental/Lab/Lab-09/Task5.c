//A shop stores different data types; Product ID (int), Price (float), Category code (char).
// Write a single generic display function void printData(void *ptr, char type) that prints data
// according to the type code ('i', 'f', 'c'). 

#include<stdio.h>

void printData(void *ptr, char type);

int main(){
	char ctype;
	int productId = 2001;
	float Price = 2534.5689;
	char Category_code = 'B';
	printf("Enter character type: ");
	scanf(" %c", &ctype);
	if (ctype == 'i' || ctype == 'I'){
		printData(&productId, ctype);
	}
	else if (ctype == 'f' || ctype == 'F'){
		printData(&Price , ctype);
	}
	else if (ctype == 'c' || ctype == 'C'){
		printData(&Category_code , ctype);
	}
	else 
	printf("Invalid Data Type!"); 
	return 0;
}

void printData(void *ptr, char type){
	if (type == 'i' || type == 'I'){
		printf("Product ID: %d\n", *(int*)ptr);
	}
	else if (type == 'f' || type == 'F'){
		printf("Price: %.2f\n", *(float*)ptr);
	}
	else if (type == 'c' || type == 'C'){
		printf("Category code: %c\n", *(char*)ptr);
	}
	else 
	printf("Invalid Data Type!");	
}
