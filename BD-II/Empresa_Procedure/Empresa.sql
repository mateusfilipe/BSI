#drop database companhia;
create database  if not exists  Companhia;
use Companhia; 
CREATE TABLE if not exists FUNCIONARIO
(
PNome varchar(15) NOT NUll,
CPF char (11) NOT NUll,
DataNasc Char(10),
Logra varchar (30) ,
Sexo char,
Salario decimal(10,2),
CPF_Supervisor char (11),
Dnr int,
primary key (CPF)
);

select * from Funcionario;
desc Funcionario;



CREATE TABLE if not exists DEPARTAMENTO( 
DNome varchar(15) NOT NUll,
DNumero int NOT NULL,
CPF_Gerente char (11) NOT NUll,
Data_Inicio_gerente char(10), 
PRIMARY KEY (DNumero),
UNIQUE (DNome),
foreign key (CPF_Gerente) references FUNCIONARIO (CPF)
);


CREATE TABLE if not exists LOCALIZACAO_DEP( 
DNumero int NOT NULL,
DLocal varchar (15) NOT NUll,
PRIMARY KEY (DNumero, DLocal),
foreign key (DNumero) references DEPARTAMENTO (DNumero)
);


CREATE TABLE if not exists PROJETO( 
ProjNome varchar(15) NOT NUll,
ProjNumero int NOT NULL,
ProjLocal varchar (15),
DNum int NOT NULL,
PRIMARY KEY (ProjNumero),
UNIQUE (ProjNome),
foreign key (DNum) references DEPARTAMENTO (DNumero)
);

CREATE TABLE if not exists TRABALHA_EM( 
FCPF char (11) NOT NUll,
PNR int NOT NUll,
Horas decimal (3,1) NOT NUll,
PRIMARY KEY (FCPF, PNR),
foreign key (FCPF) references FUNCIONARIO (CPF),
foreign key (PNR) references PROJETO (ProjNumero)
);

CREATE TABLE if not exists DEPENDENTE( 
FCPF char (11) NOT NUll,
Nome_Dependente varchar (15) NOT NUll,
Sexo char,
DataNasc char (10),
Parentesco varchar (8),
PRIMARY KEY (FCPF, Nome_Dependente),
foreign key (FCPF) references FUNCIONARIO (CPF)
);

show tables;

insert funcionario value ('João','12345678966','09-01-1965','rua das flores','M', 30000,'33344555587', 5);
insert funcionario value ('Alice','33344555587','08-12-1965','rua da lapa','F', 40000,'8886555576', 5);
insert funcionario value ('Alice','99988777707','19-01-1968','rua Souza lima','F', 25000,'98765432168', 4);
insert funcionario value ('Jennifer','98765432168','20-06-1941','Av. arthur de lima','F', 43000,'8886555576', 4);
insert funcionario value ('Ronaldo','66688444476','15-09-1962','rua rebouças','M', 38000,'33344555587', 5);
insert funcionario value ('Joice','45345345376','31-07-1972','av Lucas Obes','F', 25000,'33344555587', 5);
insert funcionario value ('André','98798798733','29-03-1969','rua timbira','M', 25000,'98765432168', 4);
insert funcionario value ('Jorge','8886555576','10-11-1937','rua do hirto','M', 55000,'33344555587', 1); 


Select * from funcionario;

desc departamento;


insert DEPARTAMENTO values ('Pesquisa', 5, '33344555587', '22-05-1988' );
insert DEPARTAMENTO values ('Administração', 4, '98765432168', '01-01-1995' );
insert DEPARTAMENTO values ('Matriz', 1, '8886555576', '21-06-1981' );


insert LOCALIZACAO_DEP values(1, 'São Paulo');
insert LOCALIZACAO_DEP values(4, 'Mauá');
insert LOCALIZACAO_DEP values(5, 'Santo André');
insert LOCALIZACAO_DEP values(5, 'Itu');
insert LOCALIZACAO_DEP values(5, 'São Paulo');

insert Projeto values ('Produtox', 1, 'Santo André', 5);
insert Projeto values ('Produtoy', 2, 'itu', 5);
insert Projeto values ('Produtoz', 3, 'São Paulo', 5);
insert Projeto values ('Informatização', 10, 'Mauá', 4);
insert Projeto values ('Reorganização', 20, 'São Paulo', 1);
insert Projeto values ('NovosBenefícios', 30, 'Mauá', 4);

desc trabalha_em;

insert Trabalha_em values ('12345678966', 1, 32.5);
insert Trabalha_em values ('12345678966', 2, 7.5); 
insert Trabalha_em values ('66688444476', 3, 40);
insert Trabalha_em values ('45345345376', 1, 20);
insert Trabalha_em values ('45345345376', 2, 20);
insert Trabalha_em values ('33344555587', 2, 10);
insert Trabalha_em values ('33344555587', 3, 10);
insert Trabalha_em values ('33344555587', 10, 10);
insert Trabalha_em values ('33344555587', 20, 10);
insert Trabalha_em values ('99988777707', 30, 30);
insert Trabalha_em values ('99988777707', 10, 10);
insert Trabalha_em values ('98798798733', 10, 35);
insert Trabalha_em values ('98798798733', 30, 5);
insert Trabalha_em values ('98765432168', 30, 20);
insert Trabalha_em values ('98765432168', 20, 0);

insert dependente values ('33344555587', 'Alice', 'F', '05-04-1986', 'filha' );
insert dependente values ('33344555587', 'João', 'M', '25-10-1983', 'filho' );
insert dependente values ('33344555587', 'Janaina', 'F', '03-06-1958', 'esposa' );
insert dependente values ('98765432168', 'Antonio', 'M', '28-02-1942', 'Marido' );
insert dependente values ('12345678966', 'Michael', 'M', '04-01-1988', 'filho' );
insert dependente values ('12345678966', 'Alice', 'F', '30-12-1988', 'filha' );
insert dependente values ('12345678966', 'Elizabeth', 'F', '05-05-1967', 'esposa' );



