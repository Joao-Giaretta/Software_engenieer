
while True:
    n = int(input("Digite o numero a receber o fatorial: "))
    i=2
    nf=1
    
    if n <= 0:
        break

    while i <= n:
        nf*= i
        i+= 1
    print(f"O fatorial é: {nf}")
