n = 1
i = 0
maior = 0
maiorant = 0
sgmaior = 0
while n != 0:
    n = int(input("insira um numero: "))
    if n > maior:
        sgmaior = maior
        maior = n
    elif n > sgmaior:
        sgmaior = n
    if n == 0:
        i-= 1
    i+= 1
    
print(maior)
print(sgmaior)
print(i)
