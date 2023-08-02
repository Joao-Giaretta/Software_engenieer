list = []

i = 0
while i < 4:
    n = int(input("Insira um número Inteiro: "))
    if n != 0:
        list.append(n)
    else:
        print("Insira um numero diferente de 0")
        i -= 1
    i += 1

sumlist = 0
multlist = 1

for num in list:
    sumlist += num

#Utilizando sum()
'''sumlist = sum(list)'''

for num in list:
    multlist *= num

print(f"A soma dos números da lista é igual a:{sumlist}")
print(f"A multiplicação dos numeros da lista é igual a:{multlist}")
print(list)

