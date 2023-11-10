-- JOÃO PEDRO GIARETTA DE OLIVEIRA - 23008717
CREATE TABLE ACCOUNTS (
    ID INTEGER NOT NULL PRIMARY KEY,
    NAME VARCHAR2(500) NOT NULL,
    EMAIL VARCHAR2(1024) NOT NULL UNIQUE,
    PWD VARCHAR2(64) NOT NULL,
    CREATED_AT DATE DEFAULT SYSDATE,
    UPDATED_AT DATE
);

/* 
    1 - Faça uma view que retorne uma lista de emails cadastrados na tabela accounts (quando invocada)
*/

CREATE OR REPLACE VIEW LISTA_EMAILS (EMAIL)
AS SELECT EMAIL
FROM ACCOUNTS;
    
SELECT * FROM LISTA_EMAILS;

/*
    2 - Em PL/SQL podemos criar blocos da seguinte maneira:
    DECLARE
        -- declarar variaveis
        SALARIO NUMBER := 1500
    BEGIN
        -- código do bloco / programa 
    END
    
    Sendo assi, faça um codigo que declara 3 variáveis, uma sendo SALARIO, inicializada com 1500, outra sendo DESCONTOS com 500 e uma terceira chamada 
    LIQUIDO que seja (SALARIO - DESCONTOS).
    Imprima o valor liquido ao final do programa
    Dica: para imprimir use o DBMS_OUTPUT.put_line
*/

DECLARE
    SALARIO NUMBER := 1500;
    DESCONTOS NUMBER := 500;
    LIQUIDO NUMBER := (SALARIO - DESCONTOS);
BEGIN
    DBMS_OUTPUT.put_line('Salário Líquido: ' || LIQUIDO);
END;

/*
    3 - Crie uma tabela chamada AUDITORIAS (DATA_OCORENCIA DATE DEFAULT SYSDATE, ACCOUNT_ID INTEGER NOT NULL);
        Sempre que houver uma atualização na tablea ACCOUNTS, registrar (INSERIR) na tablea AUDITORIAS um registro
        com a conta que foi modificada.
        
        CREATE TRIGGER - associado a tabela ACCOUNTS
        do tipo AFTER. 
        
        Dica: Consultar o site oracletutorial.com CREATE TRIGGER 
*/
CREATE TABLE AUDITORIAS (
    DATA_OCORENCIA DATE DEFAULT SYSDATE,
    ACCOUNT_ID INTEGER NOT NULL
);


CREATE OR REPLACE TRIGGER LOG_UPDATE
AFTER UPDATE ON ACCOUNTS 
FOR EACH ROW
BEGIN
    INSERT INTO AUDITORIAS(ACCOUNT_ID)
    VALUES (:OLD.ID);
END;

/*
    4 - Considere uma tabela chamada FUNCIONARIOS. Nesta tabela existe o campo SALARIO de cada funcionario. Se você deseja somar todos os salarios basta fazer o
    comando SELECT SUM(SALARIO) FROM FUNCIONARIOS. Construa um programa em PL/SQL que acrecente 30% no valor de todos os salarios somados e exiba este valor calculado 
*/

DECLARE 
    ACRECIMO  NUMBER := 1.30;
    FOLHA_PAGAMENTO NUMBER := 0;
BEGIN
    SELECT SUM(SALARIO) INTO FOLHA_PAGAMENTO
    FROM FUNCIONARIOS;
    
    FOLHA_PAGAMENTO := FOLHA_PAGAMENTO * ACRECIMO;
    
    DBMS_OUTPUT.put_line('Salário com acrécimo de 30%: ' || FOLHA_PAGAMENTO);
END;
    