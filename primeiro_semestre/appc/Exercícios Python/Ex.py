# JOAO PEDRO GIARETTA RA:23008717
# ENZO CINTO QUATROCHI RA:23015904

livros = {}
livro = []
while True:
    try:
        N = int(input("Digite quantos valores serão inseridos: "))
        break
    except ValueError:
        print("Digite um numero Inteiro")

count = 0      
while count < N:
    while True:
        try:
            codigo = int(input("Digite o Código do livro: "))
            break
        except ValueError:
            print("Digite um numero Inteiro")

    if codigo in livros.keys():
        print('Codigo já Existe')
    else:
        titulo = input("Digite o Título do livro: ").upper()
        while True:
            try:
                nautores = int(input("Digite o número de autores desse livro: "))
                break
            except ValueError:
                print("Digite um numero Inteiro")
        n = 1
        autores = []
        while n <= nautores:
            autor = input("Digite o nome do Autor: ")
            autores.append(autor)
            n += 1
        preco = float(input("Digite o preço do livro: "))
        livros[codigo] = [titulo, nautores, autores, preco]
        print(livros)
        count += 1

#Buscar pelo Título
titulo = input("Digite o titulo do livro que deseja buscar: ").upper()
n = 0
for key, values in livros.items():
    if values[0] == titulo:
        print(key, values)
        n += 1

if n == 0:
    print("Não Existe Um Livro com Esse Título")


#Buscar pelo Código
i = 0
codigo = int(input("Digite o codigo do livro que deseja buscar: "))
for keys,values in livros.items():
    if codigo in livros.keys():
        print(keys, values)
        i += 1
if i == 0:
    print("Não Existe Um Livro Com Esse Código")

# Imprimir os livros com valor superior a 50
print("Livros com valor superior a R$50,00")
print('{:<10} {:<20} {:<15} {:<10} {:<10}'.format('Codigo', 'Titulo', 'Num Autores', 'Autores', 'Preço'))
for keys, values in livros.items():
    if values[3] > 50:
        codigo = keys
        titulo = values[0]
        nautores = values[1]
        autores = values[2]
        preco = values[3]
        print(f'{codigo}    {titulo}            {nautores}    {autores}     {preco}')
        