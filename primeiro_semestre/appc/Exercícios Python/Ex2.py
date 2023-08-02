def read():
    num = int(input("Digite um valor: "))
    return num

def soma(a,b,c):
    asw = a+b+c
    return asw

a = read()
b = read()
c = read()
result = soma(a,b,c)

print(f"A soma dos valores inseridos é: {result}")