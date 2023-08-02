c = float(input("Digite o valor do comprimento da parede: "))
l = float(input("Digite o valor da largura da parede: "))
a = float(input("Digite o valor da altura da parede: "))

p1 = (a*l)
p2 = (a*c)

q1 = (p1/1.5)
q2 = (p2/1.5)
qt = (q1 + q2)

print(f"A quantidade de azulejos necessários será: {qt}")