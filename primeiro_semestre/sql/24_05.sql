CREATE TABLE DEPARTAMENTO (
	codigo  INTEGER PRIMARY KEY,
	nome VARCHAR2(50),
	cnpj VARCHAR2 (30)
)

CREATE TABLE PROFESSOR (
	Codigo INTEGER PRIMARY KEY,
	Nome VARCHAR2(50),
	Email VARCHAR(30),
	Telefone VARCHAR(20),
	Fk_prof_dep INTEGER
)

CREATE TABLE CURSO (
	Codigo INTEGER PRIMARY KEY,
	Nome VARCHAR2(50),
	Valor NUMBER,
	Fk_cur_dep INTEGER
)

CREATE TABLE ALUNO (
	Codigo INTEGER PRIMARY KEY,
	Nome VARCHAR2(50),
	Telefone VARCHAR2(20),
	Fk_aluno_cur INTEGER
)

CREATE TABLE DISCIPLINA (
	Codigo INTEGER PRIMARY KEY,
	Nome VARCHAR2(50),
	carga_horaria NUMBER,
    Fk_disc_prof INTEGER
)

CREATE TABLE CURSA (
	Fk_aluno_codigo INTEGER,
	Fk_disc_codigo INTEGER
)


ALTER TABLE PROFESSOR ADD CONSTRAINT Fk_prof_dep FOREIGN KEY (Fk_prof_dep) REFERENCES DEPARTAMENTO (codigo)

ALTER TABLE CURSO ADD CONSTRAINT Fk_cur_dep FOREIGN KEY (Fk_cur_dep) REFERENCES DEPARTAMENTO (codigo)

ALTER TABLE ALUNO ADD CONSTRAINT Fk_aluno_cur FOREIGN KEY (Fk_aluno_cur) REFERENCES CURSO (codigo)

ALTER TABLE DISCIPLINA ADD CONSTRAINT Fk_disc_prof FOREIGN KEY (Fk_disc_prof) REFERENCES PROFESSOR (codigo)

ALTER TABLE CURSA ADD CONSTRAINT Fk_aluno_codigo FOREIGN KEY (Fk_aluno_codigo) REFERENCES ALUNO (codigo)

ALTER TABLE CURSA ADD CONSTRAINT Fk_disc_codigo FOREIGN KEY (Fk_disc_codigo) REFERENCES DISCIPLINA (codigo)


INSERT INTO DEPARTAMENTO (codigo, nome) VALUES (1, 'CLC')
INSERT INTO DEPARTAMENTO (codigo, nome) VALUES (2, 'CEATEC')
INSERT INTO DEPARTAMENTO (codigo, nome) VALUES (3, 'CCHSA')
INSERT INTO DEPARTAMENTO (codigo, nome) VALUES (4, 'CCV')

INSERT INTO PROFESSOR (codigo, nome) VALUES (1, 'Isaias de Queiroz'),
INSERT INTO PROFESSOR (codigo, nome) VALUES (2, 'Rose Santos'),
INSERT INTO PROFESSOR (codigo, nome) VALUES (3, 'Lindolfo Augusto'),
INSERT INTO PROFESSOR (codigo, nome) VALUES (4, 'Marcelo Chacon'),
INSERT INTO PROFESSOR (codigo, nome) VALUES (5, 'Maria Lucia'),
INSERT INTO PROFESSOR (codigo, nome) VALUES (6, 'Ricardo José'),
INSERT INTO PROFESSOR (codigo, nome) VALUES (7, 'Alex Soares')

INSERT INTO CURSO (codigo, nome) VALUES (1, 'Jornalismo')
INSERT INTO CURSO (codigo, nome) VALUES (2, 'Mídias Digitais')
INSERT INTO CURSO (codigo, nome) VALUES (3, 'Engenharia de Software')
INSERT INTO CURSO (codigo, nome) VALUES (4, 'Direito')
INSERT INTO CURSO (codigo, nome) VALUES (5, 'Matemática')
INSERT INTO CURSO (codigo, nome) VALUES (6, 'Engenharia Química')
INSERT INTO CURSO (codigo, nome) VALUES (7, 'Sistemas de Informação')

INSERT INTO ALUNO (codigo, nome) VALUES (1, 'Joao Paulo')
INSERT INTO ALUNO (codigo, nome) VALUES (2, 'Maria Paula')
INSERT INTO ALUNO (codigo, nome) VALUES (3, 'Augusto Martins')
INSERT INTO ALUNO (codigo, nome) VALUES (4, 'Julieta Santos')
INSERT INTO ALUNO (codigo, nome) VALUES (5, 'Maristela Souza')
INSERT INTO ALUNO (codigo, nome) VALUES (6, 'Ricardo Souza')
INSERT INTO ALUNO (codigo, nome) VALUES (7, 'João Victor')
INSERT INTO ALUNO (codigo, nome) VALUES (8, 'Paula Martins')
INSERT INTO ALUNO (codigo, nome) VALUES (9, 'Francisco Oliveira')
INSERT INTO ALUNO (codigo, nome) VALUES (10, 'Marlucia Eunice')

delete from CURSO  wherego > 0






