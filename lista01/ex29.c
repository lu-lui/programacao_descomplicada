//29. Leia quatro notas, calcule a media aritmética e imprima o resultado. ´

#include<stdio.h>

int main(){
    float n[4];
    int soma = 0;

    for(int i = 0; i < 4; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &n[i]);
        soma += n[i];
    }
    
    printf("Média final: %.2f\n", (float) soma/4);
    
    return 0;
}