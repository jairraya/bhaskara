#include <stdio.h>

int main (void)
{
	int a, b, c;
	float delta;
	
	printf("digite um numero para a: ");
	scanf("%d", &a);
	
	printf("digite um numero para b: ");
	scanf("%d", &b);
	
	printf("digite um numero para c: ");
	scanf("%d", &c);
	
	if (a==0)
	    printf("Reinicie o programa.\n\n");
	    
	delta=(b^2-4*a*c);
	
	printf("O valor de delta eh %.1delta", delta);
	
	return 0;
}
