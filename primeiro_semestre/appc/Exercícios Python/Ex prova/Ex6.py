n = int(input("Digite a quantidade de habitantes: "))
salariototal = 0
numfilhostotal = 0
maior = 0
nsalariomin = 0

for i in range(n):
    salario = float(input(f"Digite o valor do salario do {i+1} habitante: "))
    numfilhos = int(input(f"Digite a quantidade de filhos do {i+1} habitante: "))
    if salario > maior:
        maior = salario
    if salario <= 100:
        nsalariomin += 1

    salariototal += salario
    numfilhostotal += numfilhos

mediasalario = (salariototal / n)
mediafilhos = (numfilhostotal / n)
percent = (nsalariomin * 100) / n

print(f"A média do salário da população é igual a: {mediasalario}")
print(f"A média do numero de filhos é igual a: {mediafilhos}")
print(f"O maior salário é igual a {maior}")
print(f"A porcentagem de pessoas com salário de até R$100,00 é de:{percent: .0f}%")


