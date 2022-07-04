
N = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = float(input("Digite um numero: "))

maior = vet[0]
Pmaior = 0

print()
for i in range(1, N):
    if vet[i] > maior:
        maior = vet[i]
        Pmaior = i

print(f"MAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {Pmaior}")