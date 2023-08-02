list_par = []
list_imp = []


n = 1
while n > 0:
    n = int(input("Digite um numero inteiro: "))
    if n %2 == 0:
        list_par.append(n)
    elif n > 0:
        list_imp.append(n)

print(list_par)
print(list_imp)
