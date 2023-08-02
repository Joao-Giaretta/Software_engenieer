n = int(input("Digite um numero: "))

for imp in range(n-1, 0, -1):
    if (imp %4 == 0):
        print(f"{imp}")
