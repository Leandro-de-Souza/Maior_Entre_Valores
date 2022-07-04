using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_MAIOR_POSICAO {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, i, Pmaior;
            double maior;

            Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            double[] vet = new double[N];

            for (i = 0; i < N; i++) {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }

            maior = vet[0];
            Pmaior = 0;

            Console.WriteLine();
            for (i = 1; i < N; i++) {
                if (vet[i] > maior) {
                    maior = vet[i];
                    Pmaior = i;
                }
            }

            Console.WriteLine("MAIOR VALOR = " + maior.ToString("F1", CI));
            Console.WriteLine("POSICAO DO MAIOR VALOR = " + Pmaior);

        }
    }
}
