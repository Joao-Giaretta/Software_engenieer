
i=0
while(i<6):
    a = int(input("Digite um numero A: "))
    b = int(input("Digite um numero B: "))
    c = int(input("Digite um numero C: "))

    if (a > b):
        if (a > c):
            print(f"{a} é o maior")
        else:
            print(f"{c} é o maior")
    elif (b > c):
        print(f"{b} é o maior")
    else:
        print(f"{c} é o maior")
    i+=1
