#include <stdio.h>

int main(void) {
	int num, i, j, e;

	printf("Digite o número máximo do triângulo:\n\n");
	printf("*****====== ATENÇÃO: o número DEVE ser ímpar ======*****\n");
	scanf("%d", &num);
	printf("\n");

	if (num%2 == 0) {
		printf("Número inválido!\n");
		return 1;
	}

	else  {
	for (i=0; i <= (num/2) +1; i++) {
        e = i;
		if (i > 0) {
		for (e= 1; e <= i; e++) {
			printf(" ");
		}
		}
		for (j= i+1; j <= num-i; j++) {		
		printf("%d", j);
		}
		printf("\n");	
	}
	}
	return 0;
}
