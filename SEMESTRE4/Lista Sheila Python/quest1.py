#a soma de todos os números IMPARES: múltiplos de três e no conjunto dos números de 1 até 500.#
soma = 0

for i in range(1, 501):
    if i % 2 != 0:
        if i % 3 == 0:
            soma += i
        
print(f"A soma resulta em: {soma}")
