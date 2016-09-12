#include <stdio.h>

int main(void) {
	float ma, me, n1, n2, n3;

	printf("Digite a nota N1:\n");
	scanf("%f", &n1);
	printf("Digite a nota N2:\n");
	scanf("%f", &n2);
	printf("Digite a nota N3:\n");
	scanf("%f", &n3);
	printf("Digite a nota da média de exercícios:\n");
	scanf("%f", &me);

	ma = (n1 + n2*2 + n3*3 + me)/7;

	printf("\n");

	if (ma < 4) {
		printf("E\n"); }
		else if (ma < 6) {
			printf("D\n"); }
			else if (ma < 7.5) {
				printf("C\n"); }
				else if (ma < 9) {
					printf("B\n"); }
					else {
						printf("A\n");
	}
	
	return 0;
}
