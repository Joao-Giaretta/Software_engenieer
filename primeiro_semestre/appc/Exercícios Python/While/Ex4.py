n = int(input("Digite o número de carros vendidos no Mês: "))

i=1
vt = 0
while (i <= n):
    v = float(input(f"Digite o valor de venda do {i} carro: "))
    i+=1
    vt = (vt+v)

cm = float(200*n)
ad = float(vt*0.05)
st = float(1500+cm+ad)

print("Salario base: R$1500,00")
print(f"Numero de carros vendidos: {n}")
print(f"Total de Vendas: {vt}")
print(f"Total de Comissão: {cm}")
print(f"Total de Adicional: {ad}")
print(f"Salario a RECEBER: R$ {st}")