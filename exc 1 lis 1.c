#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i=0, soma=0, cont=-1;
    float media;

    do{
        printf("Digite um n�mero (Para parar digite 0): ");
        scanf("%d", &i );
        cont++;
        soma += i;
    }
    while (i!= 0);

    media = soma/cont;
    printf("A soma dos vaores inseridos �: %d\nA m�dia �: %.2f", soma, media);

    return 0;
}
