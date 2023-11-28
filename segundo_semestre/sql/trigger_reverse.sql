-- JOÃO PEDRO GIARETTA 23008717
-- FILIPE DANIEL MEDEIROS T MOTA 23002322

CREATE TABLE PALAVRAS (
    CODIGO INTEGER NOT NULL PRIMARY KEY,
    PALAVRA VARCHAR2(500) NOT NULL,
    REVERSA VARCHAR2(500)
);

CREATE SEQUENCE SEQ_PALAVRAS START WITH 1000 INCREMENT BY 1;

-- CRIAR UM TRIGGER QUE AO DAR UM INSERT NA PALAVRA TEM QUE INVERTE ELA E INSERE NO CAMPO REVERSO

CREATE OR REPLACE TRIGGER TRG_REVERTE
BEFORE INSERT ON PALAVRAS
FOR EACH ROW
BEGIN
    :NEW.PALAVRA := UPPER(:NEW.PALAVRA);
    :NEW.REVERSA := UTL_RAW.CAST_TO_VARCHAR2(UTL_RAW.REVERSE(UTL_RAW.CAST_TO_RAW(:NEW.PALAVRA)));
END;


-- CRIAR OUTRO TRIGGER CHAMADO TRG_CODIGO_PALAVRA QUE ATRIBUI AUTOMATICAMENTE O CODIGO DA SEQUENCE DESEJADA NO MOMENTO DO INSERT (BEFORE)

CREATE OR REPLACE TRIGGER TRG_CODIGO_PALAVRA
BEFORE INSERT ON PALAVRAS
FOR EACH ROW
BEGIN
  SELECT SEQ_PALAVRAS.NEXTVAL
  INTO :NEW.CODIGO
  FROM DUAL;
END;


