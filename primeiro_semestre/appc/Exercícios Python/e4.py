'''Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
"Telefonou para a vítima?"
"Esteve no local do crime?"
"Mora perto da vítima?"
"Devia para a vítima?"
"Já trabalhou com a vítima?" O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, 
ele será classificado como "Inocente".'''

lista = []
counter = 0

r = input("Telefonou para a vítima? (S/N) ").upper()
if r == 'S':
    lista.append(r)
r2 = input("Telefonou para a vítima? (S/N) ").upper()
if r2 == 'S':
    lista.append(r2)
r3 = input("Telefonou para a vítima? (S/N) ").upper()
if r3 == 'S':
    lista.append(r3)
r4 = input("Telefonou para a vítima? (S/N) ").upper()
if r4 == 'S':
    lista.append(r4)
r5 = input("Telefonou para a vítima? (S/N) ").upper()
if r5 == 'S':
    lista.append(r5)

qtd = lista.count('S')

if qtd == 2:
    print('Suspeita')
elif qtd >= 3:
    if qtd <= 4:
        print('Cúmplice')
    else:
        print('Assassino')
else:
    print('Inocente')