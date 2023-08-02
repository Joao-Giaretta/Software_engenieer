DROP TABLE DEPARTAMENTO cascade constraints;
DROP TABLE PROFESSOR cascade constraints;
DROP TABLE DISCIPLINA cascade constraints;
DROP TABLE CURSO cascade constraints;
DROP table ALUNO cascade constraints;
DROP table CURSA cascade constraints;

CREATE TABLE DEPARTAMENTO (
    codigo integer PRIMARY KEY,
    nome varchar2(50),
    cnpj varchar2(20)
);

CREATE TABLE PROFESSOR (
    codigo  integer PRIMARY KEY,
    nome varchar2(50),
    telefone varchar(14),
    email varchar2(40),
    FK_DEPARTAMENTO_codigo integer
);

CREATE TABLE DISCIPLINA (
    codigo integer PRIMARY KEY,
    nome varchar2(40),
    carga_horaria integer,
    FK_PROFESSOR_codigo  integer
);

CREATE TABLE CURSO (
    codigo integer PRIMARY KEY,
    nome varchar2(50),
    valor float,
    FK_DEPARTAMENTO_codigo integer
);

CREATE TABLE ALUNO (
    codigo integer PRIMARY KEY,
    nome varchar2(50),
    telefone varchar2(14),
    FK_CURSO_codigo integer
);

CREATE TABLE cursa (
    fk_ALUNO_codigo integer,
    fk_DISCIPLINA_codigo integer
    
);

ALTER TABLE PROFESSOR ADD CONSTRAINT FK_PROFESSOR_1
    FOREIGN KEY (FK_DEPARTAMENTO_codigo)
    REFERENCES DEPARTAMENTO (codigo);
    
ALTER TABLE DISCIPLINA ADD CONSTRAINT FK_DISCIPLINA_1
    FOREIGN KEY (FK_PROFESSOR_codigo )
    REFERENCES PROFESSOR (codigo );
    
ALTER TABLE CURSO ADD CONSTRAINT FK_CURSO_1
    FOREIGN KEY (FK_DEPARTAMENTO_codigo)
    REFERENCES DEPARTAMENTO (codigo);
  
 
ALTER TABLE ALUNO ADD CONSTRAINT FK_ALUNO_1
    FOREIGN KEY (FK_CURSO_codigo)
    REFERENCES CURSO (codigo);
   
 
ALTER TABLE cursa ADD CONSTRAINT FK_cursa_1
    FOREIGN KEY (fk_ALUNO_codigo)
    REFERENCES ALUNO (codigo);

ALTER TABLE cursa ADD CONSTRAINT FK_cursa_2
    FOREIGN KEY (fk_DISCIPLINA_codigo)
    REFERENCES DISCIPLINA (codigo);
    
INSERT INTO departamento VALUES (100,'CEATEC','12.345.678.0001-00');
INSERT INTO departamento VALUES (110,'CLC','22.333.444.0001-11');
INSERT INTO departamento VALUES (120,'CCV','33.333.555.0001-22');
INSERT INTO departamento VALUES (130,'CCHSA','44.555.666.0001-33');

INSERT INTO professor VALUES (300,'Isaias de Queiroz','19-3343-5060','isaias@puc-campinas.edu.br',100);
INSERT INTO professor VALUES (310,'Rose','19-9920-5080','rose@puc-campinas.edu.br',110);
INSERT INTO professor VALUES (320,'Lindolfo','19-2050-2580','lindolfo@puc-campinas.edu.br',110);
INSERT INTO professor VALUES (330,'Marcelo Chacon','11-8888-3333','chacon@puc-campinas.edu.br',100);
INSERT INTO professor VALUES (340,'Maria Lucia','12-8788-3355','lucia@puc-campinas.edu.br',110);
INSERT INTO professor VALUES (350,'Ricardo José','10-6655-2587','ricardo@puc-campinas.edu.br',100);
INSERT INTO professor VALUES (360,'Alex Soares','19-9856-2587','alex@puc-campinas.edu.br',110);

INSERT INTO disciplina VALUES (400,'Fundamentos Jornalismo',84,320);
INSERT INTO disciplina VALUES (410,'Introdução Midias Digitais',38,310);
INSERT INTO disciplina VALUES (420,'Banco de Dados',60,300);
INSERT INTO disciplina VALUES (430,'Teorias da Comunicação',80,350);
INSERT INTO disciplina VALUES (440,'Teologia e Fenômeno Humano',19,360);
INSERT INTO disciplina VALUES (450,'Projeto Integrador',120,330);
INSERT INTO disciplina VALUES (460,'Lógica de Programação',56,340);

INSERT INTO curso VALUES (200,'Jornalismo',2000.00,110);
INSERT INTO curso VALUES (210,'Midias Digitais',1800.00,110);
INSERT INTO curso VALUES (220,'Matematica',1200.00,100);
INSERT INTO curso VALUES (230,'Sistemas de Informação',2200.00,100);
INSERT INTO curso VALUES (240,'Engenharia de Software',2400.00,100);
INSERT INTO curso VALUES (250,'Direito',1900.00,130);

INSERT INTO aluno VALUES (500,'Joao Paulo','19-1122-3344',200);
INSERT INTO aluno VALUES (510,'Maria Paulo','21-2233-4455',250);
INSERT INTO aluno VALUES (520,'Augusto Martins','11-3344-5566',230);
INSERT INTO aluno VALUES (530,'Julieta Santos','19-4455-6677',240);
INSERT INTO aluno VALUES (540,'Maristela Souza','23-5566-7788',240);
INSERT INTO aluno VALUES (550,'Ricardo Souza','17-6677-8899',240);
INSERT INTO aluno VALUES (560,'João Paulo','19-7788-9910',240);
INSERT INTO aluno VALUES (570,'Paula Martins','11-8899-1101',230);
INSERT INTO aluno VALUES (580,'Francisco Oliveira','19-6688-6677',230);
INSERT INTO aluno VALUES (590,'Marlucia Eunice','11-4455-6699',220);

INSERT INTO cursa VALUES (500,400); 
INSERT INTO cursa VALUES (510,430); 
INSERT INTO cursa VALUES (520,460); 
INSERT INTO cursa VALUES (530,420);
INSERT INTO cursa VALUES (540,420); 
INSERT INTO cursa VALUES (550,420); 
INSERT INTO cursa VALUES (560,420); 
INSERT INTO cursa VALUES (570,460); 
INSERT INTO cursa VALUES (580,460); 
INSERT INTO cursa VALUES (590,440);

SELECT aluno.nome, curso.nome
FROM aluno JOIN curso
ON aluno.fk_curso_codigo = curso.codigo
AND aluno.codigo = 510;

SELECT aluno.nome, curso.nome, disciplina.nome
FROM aluno JOIN curso
ON aluno.fk_curso_codigo = curso.codigo
JOIN cursa ON cursa.fk_aluno_codigo = aluno.codigo
JOIN disciplina ON disciplina.codigo = cursa.fk_disciplina_codigo;

SELECT disciplina.nome, professor.nome
FROM DISCIPLINA JOIN PROFESSOR
ON disciplina.fk_professor_codigo = professor.codigo;

SELECT aluno.nome, curso.nome, departamento.nome
FROM aluno JOIN curso 
ON aluno.fk_curso_codigo = curso.codigo
JOIN departamento ON curso.FK_DEPARTAMENTO_codigo = departamento.codigo;
 