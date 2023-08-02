import oracledb

connection = oracledb.connect(
user="SYSTEM",
password="1212",
dsn="localhost/xe")

cursor = connection.cursor()

while True:
    print('-'*50)
    print('Menu'.center(37))  
    print('Sistema De Qualidade Do Ar'.center((37)))
    print('1 - Adicionar Amostras')
    print('2 - Alterar Amostras')
    print('3 - Excluir Amostras') 
    print('4 - Classificar Amostras')
    print('5 - Sair Do Programa')
    print('-'*50)

    while True:
        try:
            Resp = int(input('Digite a função desejada: '))
            break
        except Exception:
            print('Digite um número inteiro...')

    
    if Resp == 1:
        while True:
            print('-'*50)
            print('\nAdicionar Amostras'.center((37))) 
            print('Sistema De Qualidade Do Ar'.center((37)))

            pi = float(input('Digite o valor de MP10: ')) 
            pif = float(input('Digite o valor de MP25: '))
            oz = float(input('Digite o valor de O3:  '))
            co = float(input('Digite o valor de CO:  '))
            nit = float(input('Digite o valor de N2:  '))
            enx = float(input('Digite o valor de SO2:  '))

            cursor.execute(f"INSERT INTO gases (pi,pif,oz,co,nit,enx) VALUES ({pi},{pif},{oz},{co},{nit},{enx})") 
            connection.commit()

            Resp == 0 
            break
    
    if Resp == 2:
        while True:
            print('-'*50)
            print('Alterar Amostras'.center((37)))
            print('Sistema De Qualidade Do Ar\n'.center((37)))
            print('-'*80)
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format('ID', 'MP10', 'MP25', 'O3', 'CO', 'N2', 'SO2'))
            print('-'*80)

            cursor.execute(f'SELECT * FROM gases')
            linhasBD = cursor.fetchall()

            for linhas in linhasBD:
                id_bd, pi_bd, pif_bd, oz_bd, co_bd, nit_bd, enx_bd = linhas #enzo
                print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format(id_bd, pi_bd, pif_bd, oz_bd, co_bd, nit_bd, enx_bd))  
            
            print('-'*80)

            while True:
                try:
                    id = int(input('Digite o ID que deseja alterar: ')) 
                    break
                except Exception:
                    print('Digite um número inteiro...\n')

            pi = float(input('Digite o valor de MP10: ')) 
            pif = float(input('Digite o valor de MP25: '))
            oz = float(input('Digite o valor de O3:  '))
            co = float(input('Digite o valor de CO:  '))
            nit = float(input('Digite o valor de N2:  '))
            enx = float(input('Digite o valor de SO2:  '))

            cursor.execute(f'UPDATE gases SET pi = {pi},pif = {pif},co = {co},oz = {oz},nit = {nit},enx = {enx} WHERE id_gases = {id}')
            connection.commit()

            cursor.execute(f'SELECT * FROM gases WHERE id_gases = {id}')
            linhalterada = cursor.fetchone()
            id_bda, pi_bda, pif_bda, oz_bda, co_bda, nit_bda, enx_bda = linhalterada

            print('-'*80)
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format('ID', 'MP10', 'MP25', 'O3', 'CO', 'N2', 'SO2'))
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format(id_bda, pi_bda, pif_bda, oz_bda, co_bda, nit_bda, enx_bda)) 
            print('-'*80)

            Resp == 0
            break

    if Resp == 3:
        while True:
            print('-'*50)
            print('Excluir Amostras'.center((37)))
            print('Sistema De Qualidade Do Ar\n'.center((37)))
            print('-'*80)
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format('ID', 'MP10', 'MP25', 'O3', 'CO', 'N2', 'SO2'))
            print('-'*80)

            cursor.execute(f'SELECT * FROM gases')
            linhasBDx = cursor.fetchall()

            for linhas in linhasBDx:
                id_bdx, pi_bdx, pif_bdx, oz_bdx, co_bdx, nit_bdx, enx_bdx = linhas 
                print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format(id_bdx, pi_bdx, pif_bdx, oz_bdx, co_bdx, nit_bdx, enx_bdx))  
            
            print('-'*80)

            while True:
                try:
                    id = int(input('Digite o ID que deseja excluir: ')) 
                    break
                except Exception:
                    print('Digite um número inteiro...\n')

            cursor.execute(f'SELECT * FROM gases WHERE id_gases = {id}')
            linhaExcluir = cursor.fetchone()
            id_bdax, pi_bdax, pif_bdax, oz_bdax, co_bdax, nit_bdax, enx_bdax = linhaExcluir
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format(id_bdax, pi_bdax, pif_bdax, oz_bdax, co_bdax, nit_bdax, enx_bdax))  

            RespX = input('Deseja realmente excluir(S/N)? ').upper()

            if RespX == 'S':
                cursor.execute(f"DELETE FROM gases WHERE id_gases = {id}")
                connection.commit()
                print('Amostra excluida com sucesso!')
            
            Resp = 0
            break

    if Resp == 4:
        while True:
            print('-'*50)
            print('Classificar Amostras'.center((37)))
            print('Sistema De Qualidade Do Ar\n'.center((37)))
            print('-'*80)
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format('MP10', 'MP25', 'O3', 'CO', 'N2', 'SO2'))

            cursor.execute("SELECT AVG(pi), AVG(pif), AVG(oz), AVG(co), AVG(nit), AVG(enx) FROM gases")
            connection.commit()
            linhaAlterada2 = cursor.fetchone()
            pi_bdaxa, pif_bdaxa, oz_bdaxa, co_bdaxa, nit_bdaxa, enx_bdaxa = linhaAlterada2
            print('{:>10} {:>10} {:>10} {:>10} {:>10} {:>10}'.format(pi_bdaxa, pif_bdaxa, oz_bdaxa, co_bdaxa, nit_bdaxa, enx_bdaxa))  
            print('-'*80)

            print('\033[m\n\033[32mN1 - Boa\033[m\n\033[33mN2 - Moderada\033[m\n\033[34mN3 - Ruim\033[m\n\033[31mN4 - Muito ruim\033[m\n\033[35mN5 - Péssima\033[m\n')

            if pi_bdaxa > 250 or pif_bdaxa > 125 or oz_bdaxa > 200 or co_bdaxa > 15 or nit_bdaxa > 1130 or enx_bdaxa > 800:
                print('Classificação: A qualidade do ar é \033[1;35mN5 - Péssima\033[m.\n')
                print("Efeito À Saude: Toda a população pode apresentar sérios riscos de manifestações de doenças respiratórias e cardiovasculares.\nAumento de mortes prematuras em pessoas de grupos sensíveis.")
            elif pi_bdaxa > 150 or pif_bdaxa > 75 or oz_bdaxa > 160 or co_bdaxa > 13 or nit_bdaxa > 320 or enx_bdaxa > 365:
                print('Classificação: A qualidade do ar é \033[1;31mN4 - Muito ruim\033[m.\n')
                print("Efeito À Saude: Toda a população pode apresentar agravamento dos sintomas como tosse seca, cansaço, ardor nos olhos, nariz e garganta e ainda falta de ar e respiração ofegante.\nEfeitos ainda mais graves à saúde de grupos sensíveis (crianças, idosos e pessoas com doenças respiratórias e cardíacas). ")
            elif pi_bdaxa > 100 or pif_bdaxa > 50 or oz_bdaxa > 130 or co_bdaxa > 11 or nit_bdaxa > 240 or enx_bdaxa > 40:
                print('Classificação: A qualidade do ar é \033[1;34mN3 - Ruim\033[m.\n')
                print("Efeito À Saude: Toda a população pode apresentar sintomas como tosse seca, cansaço, ardor nos olhos, nariz e garganta.\nPessoas de grupos sensíveis (crianças, idosos e pessoas com doenças respiratórias e cardíacas) podem apresentar efeitos mais sérios na saúde.")
            elif pi_bdaxa > 50 or pif_bdaxa > 25 or oz_bdaxa > 100 or co_bdaxa > 9 or nit_bdaxa > 200 or enx_bdaxa > 20:
                print('A qualidade do ar é \033[1;33mN2 - Moderada\033[m.\n')
                print("Efeito À Saude: Pessoas de grupos sensíveis (crianças, idosos e pessoas com doenças respiratórias e cardíacas) podem apresentar sintomas como tosse seca e cansaço.\nA população, em geral, não é afetada.")
            else:
                print('Classificação: A qualidade do ar é \033[1;32mN1 - BOA\033[m.\n')
                print("Efeitos À Saude: Não há riscos para a saúde\n")
            
            anw = input("\nDeseja Sair?(S/N)").upper()
            if anw == 'S':
                Resp == 0
                break

    if Resp == 5:
        break


    

