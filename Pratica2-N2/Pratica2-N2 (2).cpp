#include <stdio.h>
#include <locale.h>

int dobro (int num1, int num2) {
	int d;
	if (num2 > num1) {
		d = 2 * num1;
	} else{
		d = 2 * num1;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n1, n2, d;
	printf("Digite o 1� n�mero ");
	scanf("%d", &n1);
	
	printf("\nDigite o 2� n�mero: ");
	scanf("%d", &n2);
	
	d = dobro(n1, n2);
	printf("\nO dobro do maior n�mero lido �: %d", dobro(n1, n2));
	
	return 0;
}

