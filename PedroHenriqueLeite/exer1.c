#include <stdio.h>
#define QUAD 3

int main(void) 
{
	int matriz[QUAD][QUAD], i, j;
	int menornumero, menorlinha;

	for (i=0;i<QUAD;i++) {
		for (j=0; j<QUAD; j++) {
		printf("Digite o valor da linha %i e da coluna %i:\n", i+1, j+1);
		scanf("%i", &matriz[i][j]); 
		}
	}
	
	menornumero = matriz[0][0];
	printf("\n");

	for (i=0;i<QUAD;i++) {
		for (j=0; j<QUAD; j++) {
		if (menornumero >= matriz[i][j]) {
				menornumero = matriz[i][j];
				menorlinha = i;
			}
		}
	}

	printf("O menor número da matriz é %i e a linha em que ele se encontra é %i.\n", menornumero, menorlinha+1);
	
	return 0;
}
