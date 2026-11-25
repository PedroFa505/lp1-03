#include <stdio.h>
// Questao 3

int main (void) {
	short temps[50];
	int a, soma, quantidade;
    float media;
    soma = 0;
    media = 0;
    quantidade = 0;
	for(int i = 0; i < 50; i++){
		printf("Digite uma temperatura entre 100 e -100: ");
		scanf("%d", &a);
		if (a > 100 || a < -100){
			printf("Valor inválido\n");
            i--;
		}
		else{
			temps[i] = a;
            soma += a;
			printf("Salvo em temps[%d]: %d\n", i, temps[i]);
		}
	}
    media = soma / 50.0;
    printf("A média das temperaturas é: %.2f\n", media);
    printf("Temperaturas acima da media: ");
    for(int j = 0; j < 50; j++){
            if(temps[j] > media){
                quantidade++;
                printf("%d ", temps[j]); 
            }
    }
    printf("\n");   
    printf("Quantidade de temperaturas acima da media: %d\n", quantidade);
    return 0;
}

