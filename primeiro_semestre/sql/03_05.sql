CREATE TABLE ITENS(
    Codigo_itens INTEGER PRIMARY KEY,
    Codigo_pedido INTEGER,
    Qtde_itens INTEGER,
    Subtotal NUMBER(38) NOT NULL,
    CONSTRAINT FK_Codigo_pedido FOREIGN KEY (Codigo_pedido)
    REFERENCES PEDIDO(Codigo_pedido)
);



DESC ITENS

INSERT INTO ITENS VALUES(001, 3005, 10, 1200.00)
INSERT INTO ITENS VALUES(002, 3008, 12, 720.00)
INSERT INTO ITENS VALUES(003, 3008, 2, 240.00)
INSERT INTO ITENS VALUES(004, 3010, 1, 500.00)
INSERT INTO ITENS VALUES(005, 3010, 2, 335.00)
INSERT INTO ITENS VALUES(006, 3010, 1, 185.00)
INSERT INTO ITENS VALUES(007, 3015, 1, 125.00)
INSERT INTO ITENS VALUES(008, 3015, 1, 630.00)
INSERT INTO ITENS VALUES(009, 3023, 1, 400.00)
INSERT INTO ITENS VALUES(010, 3023, 1, 300.00)

SELECT Nome_consumidor FROM Consumidor ORDER BY Nome_consumidor, Telefone_consumidor

SELECT MAX(Valor_pedido) FROM PEDIDO WHERE Data_compra BETWEEN '15-04-2023' AND '30-04-2023'