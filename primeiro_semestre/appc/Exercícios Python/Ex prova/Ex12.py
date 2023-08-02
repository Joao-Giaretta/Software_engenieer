num = []
ndois = []
nmedia = []
media = 0
n = 0

for i in range(4):
    num.append(float(input(f"Aluno {i+1}\nInsira o valor da 1 nota: ")))
    ndois.append(float(input(f"Insira o valor da 2 nota: ")))

for i in range(len(num)):
    media = (num[i] + ndois[i]) / 2
    nmedia.append(media)

for i in range(len(nmedia)):
    if nmedia[i] >= 7:
        n += 1

print(n)