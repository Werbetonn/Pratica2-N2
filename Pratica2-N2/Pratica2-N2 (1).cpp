#include <stdio.h>

int dobro(int num){
	int d = 2 * num;
	return d;
}
int main(){
	int n, x;
	printf("Digite o numero: ");
	scanf("%d", &n);
	x = dobro(n);
	printf("%d\n", x);
	printf("%d", dobro(10));
	
	return 0;
}
