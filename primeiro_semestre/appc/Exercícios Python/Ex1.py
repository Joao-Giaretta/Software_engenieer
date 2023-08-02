def imprimir(a,b,c):
    print(f"O antesessor e sucessor de {a} são respectivamente {b}, {c}")
    
def calculo_ant(a): 
    ant = a-1
    return ant

def calculo_suc(a): 
    suc = a+1
    return suc

num = int(input("Digite um número: "))

ant = calculo_ant(num)
suc = calculo_suc(num)
imprimir(num, ant, suc)