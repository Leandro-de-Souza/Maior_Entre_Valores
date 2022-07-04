#include <stdio.h>


int main()
{

      int N, i, Pmaior;
      double maior;

      printf("Quanto numeros voce vai digitar? ");
      scanf("%d", &N);

      double vet[N];

      for (int i = 0; i < N; i++) {
            printf("Digite um numero: ");
            scanf("%lf", &vet[i]);
      }

    maior = vet[0];
    Pmaior = 0;

    printf("\n");
    for (int i = 1; i < N; i++) {
       if (vet[i] > maior) {
        maior = vet[i];
        Pmaior = i;
        }
    }

    printf("MAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", Pmaior);


    return 0;
}
