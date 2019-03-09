#include <stdio.h>

int main(void)

{

int num1, num2;
printf("How old are you?\n");
scanf("%d", &num1);
num2=num1 * 365;
printf("It's mean, that you are %d years and %d days old\n", num1, num2);
return 0;

}