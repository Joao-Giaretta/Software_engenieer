premio = float(input("Digite o valor da quantia: "))
p = premio*0.46
s = premio*0.32
t = premio-(p+s)

print(f"Valor recebido pelo primeiro colocado: {p}")
print(f"Valor recebido pelo segundo colocado: {s}")
print(f"Valor recebido pelo terceiro colocado: {t}")