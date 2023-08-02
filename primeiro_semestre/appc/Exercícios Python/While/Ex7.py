i1=0
i2=0
i3=0
i4=0

while True:
    n = float(input("Digite o valor: "))
    if (n < 0):
        break
    elif (n <= 25):
        i1 += 1
    elif (n <= 50):
        i2 += 1
    elif (n <= 75):
        i3 += 1
    elif (n <= 100):
        i4 += 1
        

print(f"A quantidade de numéros que estma no intervalo de 0 a 25 é: {i1}")
print(f"A quantidade de numéros que estma no intervalo de 26 a 50 é: {i2}")
print(f"A quantidade de numéros que estma no intervalo de 51 a 75 é: {i3}")
print(f"A quantidade de numéros que estma no intervalo de 76 a 100 é: {i4}")
