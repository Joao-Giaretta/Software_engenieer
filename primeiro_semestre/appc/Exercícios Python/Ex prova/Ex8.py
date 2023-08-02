list_numeros = []
n = 0
for i in range (20):
    list_numeros.append(int(input("Insira um número: ")))
    if list_numeros[i] %3 == 0:
        n += 1

print(n)  