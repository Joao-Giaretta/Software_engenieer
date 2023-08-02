def soma(a,b):
    ans = 0
    if a > b:
        x = b
        a = x
        b = a
    while a < b:
        ans += (a+1)
        a+1
    return ans

a = int(input("Digite um valor: "))
b = int(input("Digite um valor: "))

result = soma(a,b)
print(f"A soma dos valores do intervalo é igual a {result}")
