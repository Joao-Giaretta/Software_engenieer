a = int(input("Digite o valor de a: "))
b = int(input("Digite o valor de b: "))
c = int(input("Digite o valor de c: "))
d = int(input("Digite o valor de d: "))

z = b
b = a
a = z
z = d
d = c
c = z

print(f"Valor de a é: {a}")
print(f"Valor de b é: {b}")
print(f"Valor de c é: {c}")
print(f"Valor de d é: {d}")



