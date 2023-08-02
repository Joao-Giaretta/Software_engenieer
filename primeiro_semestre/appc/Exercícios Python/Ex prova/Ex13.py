n = int(input("Insira um numero inteiro: "))
x = 0

for i in range(1, n+1):
    div = n%i
    if div == 0:
        x += 1

if x > 2:
    print(f"{n} não é primo")
else: 
    print(f"{n} é primo")
