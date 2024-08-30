#leia a altura de 15 pessoas e mostrar : a MENOR altura e a MAIOR altura;
altura = [0] * 15
for i in range(15):
    altura[i] = float(input(f"Altura da pessoa{i+1}:"))
    

menor = min(altura)
maior = max(altura)

print(f"\nA menor altura: {menor: .2f}\nA maior altura: {maior: .2f}")