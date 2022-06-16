#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int x, y;

    printf("#### Descubra o fatorial ####\n\n");
	printf("Digite um numero: ");
	scanf("%d", &y);
	

	for (x=y-1; x>0; x--) {
 		y = y * x;
	}
	printf("Resultado: %d", y);

	return 0;
}
