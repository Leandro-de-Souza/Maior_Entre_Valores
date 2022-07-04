#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

       int N, i, Pmaior;
       double maior;

       cout << "Quanto numeros voce vai digitar? ";
       cin >> N;

       double vet[N];

       for (int i = 0; i < N; i++) {
            cout << "Digite um numero: ";
            cin >> vet[i];
       }

       maior = vet[0];
       Pmaior = 0;

       cout << endl;
       for (int i = 1; i < N; i++) {
            if (vet[i] > maior) {
            maior = vet[i];
            Pmaior = i;
            }
       }

       cout << fixed << setprecision(1);
       cout << "MAIOR VALOR = " << maior << endl;
       cout << "POSICAO DO MAIOR VALOR = " << Pmaior << endl;


    return 0;
}
