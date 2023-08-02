# <h1 align="center"> Caixa de Supermercado </h1>

### Description:
Nosso time possui a responsabilidade de criar uma versão de um Caixa Eletrônico de um supermercado. Algumas de suas funcionalidades são: Abrir o caixa através de uma senha especifica, receber uma quantia de caixa para troco divididos em diferentes cédulas especificas, registrar o valor e cada item que o cliente escolher, manipulação dos itens escolhidos no caixa pelo cliente (Retirar algum item ou finalizar sua compra), demonstrar o valor total da compra e quantidade de itens vendidos, devolver o troco para o cliente baseado no valor que o mesmo dar para o caixa (em quantidades de cédulas especificas que obtemos ao abrir o caixa) inserção de mais um cliente caso ainda o caixa não for fechado, fechar o caixa e demonstrar o valor total das vendas, número de clientes atendidos e o quanto sobrou no caixa em cédulas (caso haja sobra).
O código foi desenvolvido em quatro etapas, a etapa 1 se baseia em abrir o caixa digitando sua senha, caso senha errada 3 vezes, o sistema é reiniciado, além de receber o dinheiro para trocos (1280) dividido em cédulas especificas, 200, 100, 50, 10, 5, 1, (0,5). 
Já a etapa 2, temos a leitura de vendas e manipulação do seu carrinho de compras pelo cliente, através de um comando de repetição, colocamos os produtos a serem passados no caixa. Através de algumas condições que continua até que o número 0 seja digitado para finalizar, ou –1 para alterar algum item da lista de compras previamente escolhido.
Na etapa 3, temos a finalização de venda e cálculo do troco para o cliente. Utilizando as mesmas cédulas do troco (definidas na etapa 1), após informar o valor total da compra, o cliente entra com o valor pago e então, o caixa entende a diferença devolvendo o troco em dinheiro dividindo-as em cédulas e armazenando então seu novo valor que sobrou no caixa após essa operação.
Por último, o quarto passo, fechamento do caixa. Após efetuar a venda, pagamento e troco (caso tiver), o sistema manda número total de vendas efetuadas (clientes atendidos), valor total das vendas, quantidade de dinheiro existente no caixa (mesmo caixa para todas as vendas realizadas). Para finalizar, todo esse processo deve ser documentado em um documento word (nesse que vos fala) apresentando sua capa com identificação dos alunos, introdução, o decorrer do projeto em si, problemas e soluções, por fim sua referência bibliográfica.

### Apresentação do projeto – Como utilizar o programa

1.	Ao iniciar o programa, digite a senha correta (2987). Caso insira incorretamente, você terá mais 2 tentativas.
2.	Após a inserção da senha correta, você deverá inserir o valor do item a ser vendido.
3.	Digite o valor R$ 0 caso deseje finalizar a venda, e insira o valor R$ -1 caso tenha que alterar o valor anterior
4.	Ao finalizar a venda, o sistema mostrará o valor total da venda e pedirá pelo valor pago. Caso insira um valor pago maior que o valor da venda, o sistema retornará o troco, junto com a quantidade de cédulas utilizadas nele
5.	Após inserir o pagamento, o sistema perguntará se deseja fechar o caixa. Optando por sim, irá ser mostrado ao usuário, a quantidade de clientes atendidos, o valor total das vendas, o valor restante no caixa e a quantidade de cédulas restantes nele
6.	Do contrário, o sistema irá pedir novamente a inserção dos valores dos itens do novo cliente, repetirá esse processo até que o caixa seja fechado