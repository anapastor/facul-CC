valores = []
positivos = []
negativos = []
contador_positivo= 0
contador_impar = 0
contador_negativo = 0
contador_par = 0
soma_positivos = 0
soma_impares = 0
soma = 0
soma_pares = 0
soma_negativos = 0
media_par = 0
media_impar = 0
media_positivo = 0
media_negativo = 0
entrada = input("Digite os valores desejados (separados por espaço):")
valores= [int (x) for x in entrada.split()]

for i in valores:
    if i>0:
        positivos.append(i)
        soma_positivos += i
        contador_positivo = contador_positivo + 1
        
    elif i<0:
        negativos.append(i)
        soma_negativos += i
        contador_negativo = contador_negativo + 1
        
for i in valores:
    if i%2 ==0:
        soma_pares +=i
        contador_par = contador_par +1
    elif i %2 != 0:
        soma_impares += i
        contador_impar = contador_impar +1

soma = sum(valores)
media = soma / len(valores) if len(valores) > 0 else 0

media_par = soma_pares / contador_par if contador_par > 0 else 0
media_impar = soma_impares / contador_impar if contador_impar > 0 else 0

media_positivo = soma_positivos / contador_positivo if contador_positivo > 0 else 0
media_negativo = soma_negativos / contador_negativo if contador_negativo > 0 else 0
        
print(f"A média geral dos números foram: {media}")
print(f"A quantidade de números positivos foram = {contador_positivo}")
print(f"A média dos números positivos foram = {media_positivo}")
print(f"A quantidade de números negativos foram = {contador_negativo}")
print(f"A média de números negativos forma = {media_negativo}")
print(f"A quantidade de números ímpares foram = {contador_impar}")
print(f"A média de números ímpares foram = {media_impar}")
print(f"A quantidade de números pares foram = {contador_par}")
print(f"A média de números pares foram = {media_par}")