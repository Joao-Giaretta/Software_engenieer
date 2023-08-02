n = int(input("Insira a quantidade de números a serem lidos: "))
par = 0
imp = 0
for cont in range(n):
    num = int(input(f"Digite o valor do número {cont}: "))
    if (num%2 == 0):
        par += num
    else:
        imp += 1

print(f"Soma dos pares é igual a: {par}")
print(f"A quatidade de numero impar é: {imp}")    