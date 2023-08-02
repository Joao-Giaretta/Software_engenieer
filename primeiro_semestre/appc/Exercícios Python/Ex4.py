def fatorial(a):
    while True:
        i=2
        nf=1
    
        if a <= 0:
            break

        while i <= a:
            nf*= i
            i+= 1
        return nf

num = int(input("Digite o número que deseja saber seu fatorial: "))
nf = fatorial(num)

print(f"O fatorial de {num} é: {nf}")