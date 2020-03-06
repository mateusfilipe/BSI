use companhia;

# 1. Criar uma stored procedure que irá atualizar o salário de um determinado funcionário
delimiter $$
create procedure AumentarSalario (in cpf char(11))
begin
	update funcionario f set salario = salario +300 where f.cpf = cpf;
end $$
delimiter ;

select * from funcionario;
call AumentarSalario('12345678966');

#2. Criar uma stored procedure para diminuir o salário.
delimiter $$
create procedure DiminuirSalario(in cpf char(11))
begin
	update funcionario f set salario = salario -500 where f.cpf = cpf;
end $$
delimiter ;

call DiminuirSalario('12345678966');
/*
3. Criar stored procedures para inclusão das seguintes tabelas:
• Projeto;
• Dependente;
• Trabalha_Em
Inserir registros através da chamada a essas tabelas
*/
#Inserir em Projetos
delimiter $$
create procedure inserirProjeto(in projNome varchar(15), in projNumero int, in projLocal varchar(15), in dNum int)
begin
	insert Projeto values (projNome, projNumero, projLocal, dNum);
end $$
delimiter ;

#Inserir em Dependente
delimiter $$
create procedure inserirDependente(in fcpf varchar(11), in nome_dependente varchar(15), in sexo char, in dataNasc char(10), in parentesco varchar(8))
begin
	insert Projeto values (fcpf, nome_dependente, sexo, dataNasc, parentesco);
end $$
delimiter ;

#Inserir em Trabalha_Em
delimiter $$
create procedure inserirTrabalha_em(in fcpf varchar(11), in pnr int, in horas decimal(3,1))
begin
	insert Projeto values (fcpf, pnr, horas);
end $$
delimiter ;

#4. Criar uma store procedure que receba o cpf do funcionário e uma variável de opcão.
delimiter $$
create procedure AlterarSalario(in cpf char(11), in op int)
begin
	if op = 1 then
		update funcionario f set salario = salario +300 where f.cpf = cpf;
    elseif op = 2 then
		update funcionario f set salario = salario -500 where f.cpf = cpf;
	else
		select 'Opção inválida';
	end if;
end $$
delimiter ;

select * from funcionario;

call AlterarSalario('12345678966',1);
call AlterarSalario('12345678966',2);

#5. Criar uma consulta com o cógido do funcionário e retorne o número médio de horas que o mesmo trabalhou em projetos. 
delimiter $$
create function mediaProjeto (somatorio int, tamanho int) returns float
deterministic
	return somatorio/tamanho;
end $$
delimiter ;

select mediaProjeto(10,5);

delimiter $$
create procedure horasMedia (cpf char(11))
begin
	declare somaHoras int;
    declare qtdProjetos int;
    if qtdProjetos = 0 then select '0';
    end if;
	select sum(horas) into somaHoras from trabalha_em t where cpf = t.fcpf;
	select count(horas) into qtdProjetos from trabalha_em t where cpf = t.fcpf;
	select mediaProjeto(somaHoras, qtdProjetos);
end $$
delimiter ;

select * from trabalha_em;
call horasMedia('12345678966');

#6. Considerando que a empresa gasta 200 reais por dependente, criar uma function que retorne o total 
#de gasto da empresa para um determinado funcionário em dependentes.
#drop function gastoDependente;
delimiter $$
create function gastoDependente(cpf char(11)) returns int
	return (select count(*) from dependente d where cpf = d.fcpf)*200;
end $$
delimiter ;
 
select * from dependente;
select gastoDependente('12345678966');