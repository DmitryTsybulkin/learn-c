#include <stdio.h>

void jolly(void);
void deny(void);
int main (void)

{

jolly();
jolly();
jolly();
deny();
return 0;

}
void jolly(void)
{
	printf("No one can deny it!\n");
}
void deny(void)
{
	printf("He is a cheerful fellow!\n");
}