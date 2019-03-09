#include <stdio.h>

int main (void)

    {
	   float weight;
	   float value;
	   
	   printf("Do you want to know your weight in platinum eqivalente?\n");
	   printf("Let's count.\n");
	   printf("Please, enter your weight, lb.: ");
	   scanf("%f", &weight);
	   value = 1700.0 * weight * 14.5833;
	   printf("Your weight in platinum eqivalente is $%.2f.\n", value);
	   printf("You can easily become worthy of it! If platinum prices fall,\n");
	   printf("Eat more to maintain its value.\n");
	   
	   return 0;
	}