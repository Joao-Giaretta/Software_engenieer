'''Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.'''

lista = [10, 1.50, 13, 1.63, 14, 1.50, 13, 1.49, 16, 1.54, 13, 1.63, 12, 1.50, 11, 1.57, 16, 1.73, 11, 1.48]
qtd = 0
c = 1
media = 0
for c in range(1, len(lista)+1, 2):
    media += lista[c]

media = media/(len(lista)/2)
c = 0
for c in range(0, len(lista), 2):
    if lista[c] > 13:
        if lista[c+1] < media:
            qtd += 1
    c += 1

print('{:.2f} é a média de altura entre os alunos e {} alunos com idade superior a 13 anos são menores que a média'.format(media, qtd))
