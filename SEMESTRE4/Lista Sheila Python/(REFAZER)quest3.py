#leia um número n de valores e escreva a MÉDIA, a QUANTIDADE DE positivos e negativos, o PERCENTUAL de valores negativos e positivos.

positivos = []
negativos = []
vetor = []
#quantatidade_total = int(input(f"Quantos números gostaria de inserir?: "))
#for i in range(quantatidade_total):
numeros = input(f"Digite o números separados por espaço: ")
vetor = list(map(float, numeros.split()))

quantidade_total = len(vetor)

for i in range(quantidade_total):
    if vetor[i] >= 0:
        positivos[i] = vetor[i]
    elif vetor[i] < 0:
        negativos[i] = vetor[i]
    



print(f"total: {quantatidade_total}\n positivos: {positivos}\n negativos: {negativos}")



