n = int(input("Insira a quantidade de numeros a serem lidos: "))
sumpar = 0
contimp = 0

for i in range(n):
    if i %2 == 0:
        sumpar += n
    else:
        contimp +=1

print(f"A soma dos numeros pares é igual a {sumpar} e a quantidade de numeros impares é igual a {contimp}")