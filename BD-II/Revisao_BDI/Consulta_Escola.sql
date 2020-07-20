use escola;
show tables;
select * from aluno;

#1. Alterar o tipo do aluno de ‘Silva’ para segundo ano.
update aluno set tipo_aluno = 2 where nome_aluno = "Silva";

#2. Criar outra turma para a disciplina Banco de dados para este semestre.
insert into turma 
	(id_turma, turma_numero_disciplina, semestre, ano, professor)
values
	(133, "CC3380", "Quinto", 2020, "Cristiane");

#3. Inserir uma nota ‘A’ para ‘Silva’ na turma ‘Banco de dados’ do último semestre.
insert into historico_escolar
	(he_numero_aluno, he_id_turma, nota)
values
	(17, 135, "A");
    
#4. Recuperar uma lista de todas as disciplinas e notas de ‘Silva’.
select nome_disciplina, nota from 
(historico_escolar inner join turma on he_id_turma = id_turma)
inner join
disciplina on turma_numero_disciplina = numero_disciplina where he_numero_aluno = 17;

#5. Listar os nomes dos alunos que realizaram a disciplina ‘Banco de dados’ oferecida no segundo semestre de 2016.
select nome_aluno from 
(historico_escolar inner join aluno on he_numero_aluno = numero_aluno)
inner join
turma on id_turma = he_id_turma where semestre = "Segundo" and ano = 2016 and turma_numero_disciplina = "CC3380";

#6. Recupere os nomes de todos os alunos que estão formando em Ciência da Computação.
select nome_aluno from aluno where curso = "Ciência da Computação";

#7. Recupere os nomes de todas as disciplinas lecionadas pelo professor Kleber em 2015 e 2016.
select nome_disciplina from 
(disciplina inner join turma on numero_disciplina = turma_numero_disciplina)
where professor = "Kleber" and (ano = 2015 or ano = 2016);

#8. Para cada matéria lecionada pelo professor Kleber, recupere o número da disciplina, semestre, ano e número de alunos
#que realizaram a matéria.
select turma_numero_disciplina, semestre, ano, count(numero_aluno) from
(aluno inner join historico_escolar on numero_aluno = he_numero_aluno)
inner join
turma on id_turma = he_id_turma where professor = "Kleber";

#9. Recupere o nome e o histórico de cada aluno. O Histórico inclui nome da disciplina, número da disciplina, crédito,
#semestre, ano e nota para cada disciplina feita pelo aluno.
select nome_aluno, nome_disciplina, numero_disciplina, creditos, semestre, ano, nota from
((turma inner join disciplina on turma_numero_disciplina = numero_disciplina)
inner join historico_escolar on he_id_turma = id_turma)
inner join aluno on he_numero_aluno = numero_aluno;