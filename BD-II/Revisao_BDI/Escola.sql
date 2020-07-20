create database escola;
use escola;

create table aluno(
	nome_aluno varchar(32),
    numero_aluno int,
    tipo_aluno int,
    curso varchar(32),
    primary key(numero_aluno)
);
describe aluno;

create table disciplina(
	nome_disciplina varchar(64),
    numero_disciplina varchar(12),
    creditos int,
    departamento varchar(5),
    primary key(numero_disciplina)
);
describe disciplina;

create table turma(
	id_turma int,
    turma_numero_disciplina varchar(12),
    semestre varchar(12),
    ano int,
    professor varchar(32),
    primary key(id_turma),
    foreign key (turma_numero_disciplina) references disciplina(numero_disciplina)
);
describe turma;

create table historico_escolar(
	he_numero_aluno int,
    he_id_turma int,
    nota varchar(2),
    primary key(he_numero_aluno, he_id_turma),
    foreign key (he_numero_aluno) references aluno(numero_aluno),
    foreign key (he_id_turma) references turma(id_turma)
);
describe historico_escolar;