idade = []
altura = []
alunos = []
qntmedia = []

for i in range(4):
    idade.append(int(input(f"Digite a idade do aluno {i+1}: ")))
    altura.append(float(input(f"Digite a altura do aluno {i+1} em centimetros: ")))

for i in range(len(idade)):
    if idade[i] > 13:
        alunos.append(altura[i])

media = sum(alunos) / len(alunos)

for i in range(len(alunos)):
    if alunos[i] < media:
        qntmedia.append(alunos[i])

print(f"A quantidade de alunos que possuem altura inferior a media é {len(qntmedia)}")





    