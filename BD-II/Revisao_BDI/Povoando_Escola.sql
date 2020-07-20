use escola;
insert into aluno
	(nome_aluno, numero_aluno, tipo_aluno, curso)
values
	("Silva", 17, 1, "Ciência da Computação"),
	("Braga", 8, 2, "Ciência da Computação");

insert into disciplina
	(nome_disciplina, numero_disciplina, creditos, departamento)
values
	("Introdução a Ciência da Computação", "CC1310", 4, "CC"),
	("Estrutura de Dados", "CC3320", 4, "CC"),
	("Matemática Discreta", "MAT2410", 3, "MAT"),
	("Banco de Dados", "CC3380", 3, "CC");

insert into turma
	(id_turma, turma_numero_disciplina, semestre, ano, professor)
values
	(85, "MAT2410", "Segundo", 2015, "Kleber"),
	(92, "CC1310", "Segundo", 2015, "Anderson"),
	(102, "CC3320", "Primeiro", 2016, "Carlos"),
	(112, "MAT2410", "Segundo", 2016, "Chang"),
	(119, "CC1310", "Segundo", 2016, "Anderson"),
	(135, "CC3380", "Segundo", 2016, "Santos");

insert into historico_escolar
	(he_numero_aluno, he_id_turma, nota)
values
	(17, 112, "B"),
	(17, 119, "C"),
	(8, 85, "A"),
	(8, 92, "A"),
	(8, 102, "B"),
	(8, 135, "A");

select * from aluno;
select * from disciplina;
select * from turma;
select * from historico_escolar;