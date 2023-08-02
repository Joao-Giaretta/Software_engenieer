list = [1, 19, 3, 17, 5, 15, 7, 13, 9, 11, 10, 12, 8, 14, 6, 16, 4, 18, 2, 20]
listpar = []
maior = 0
menor = 0

for i in range(len(list)):
    if list[i] %2 == 0:
        listpar.append(list[i])
    else:
        print(list[i])
    
    if list[i] > maior:
        maior = list[i]
    elif list[i] < menor:
        menor = list[i]

print(listpar)
print(f"O maior numero é {maior} e o menor é {menor}")

