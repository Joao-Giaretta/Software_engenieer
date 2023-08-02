n = int(input("Digite o numero a receber o fatorial: "))

"""if (n > 0):
    i=n
    while (i > 1):
        nf = (n*(i-1))
        i-=1
        n = nf
    print(f"O fatorial é: {nf}")
else:
    nf = 1
    print(f"O fatorial é: {nf}")"""
i=2
nf=1
while (i <=n):
    nf *=i
    i+=1
print(f"O fatorial é: {nf}")
