'''Construa um programa que leia dois números inteiros: a e b e uma lista com N valores inteiros. O programa deverá imprimir quantos elementos pertencem ao intervalo [a;b]'''
lista = []
counter = 0
resposta = 'S'

a = int(input('Insira o primeiro número do intervalo: '))
b = int(input('Insira o segundo número do intervalo: '))

while resposta == 'S':
    n = int(input('Insira um valor: '))
    lista.append(n)
    resposta = input('Deseja continuar? (S/N) ').upper()

for c in range (len(lista)):
    if lista[c] > a:
        if lista[c] < b:
            counter += 1

print(f'{counter} números da lista pertecem ao intervalo fornecido')