def somaImposto(taxaImposto, custo):
    ans = custo * (1+(taxaImposto/100))
    return ans

taxaImposto = int(input("Digite o valor da taxa em porcentagem: "))
custo = float(input("Digite o valor de custo do produto: "))

result = somaImposto(taxaImposto, custo)
print(f"O valor de venda é R${result}")