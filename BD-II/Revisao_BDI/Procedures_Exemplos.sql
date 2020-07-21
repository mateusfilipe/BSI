/*Banco de dados simples para teste com procedures*/
create database teste;
use teste;
create table testeTable(
	valor int primary key
);
insert into testeTable values(3);
insert into testeTable values(7);
insert into testeTable values(1);
insert into testeTable values(-2);
select * from testeTable;

#Primeira procedure de teste, select básico com um varchar armazenando 'hello'
delimiter $$
	create procedure teste()
		select 'hello'
	end$$
delimiter ;
call teste();

#Segunda procedure de teste, com valor 'in' do tipo 'int' definindo a quantidade de valores provirem do select
#drop procedure teste2;
delimiter $$
	create procedure teste2(in quantidade int)
    begin
		select * from testeTable limit quantidade;
    end$$
delimiter ;
call teste2(3);

#Terceira procedure trabalhando com parâmetros de saída do tipo inteiro
#drop procedure teste3;
delimiter $$
	create procedure teste3(out quantidade int)
    begin
		select count(*) into quantidade from testeTable;
    end $$
delimiter ;
call teste3(@quantidade);
select @quantidade;

#Quarta procedure trabalhando agora com parametros de entrada e saída do tipo inteiro
#drop procedure teste4;
delimiter $$
	create procedure teste4(inout numero int)
	begin
		set numero = numero * numero;
    end $$
delimiter ;
set @valor = 6;
call teste4(@valor);
select @valor;

#Quinta procedure testando declarações de varíaveis
#drop procedure teste5;
delimiter $$
	create procedure teste5()
    begin
		declare x int;
        declare y float;
        set y = 1.1;
        select count(*) into x from testeTable;
		select x,y;
    end $$
delimiter ;
call teste5();

#Sexta procedure testando condicional
#drop procedure teste6;
delimiter $$
	create procedure teste6(in a int)
    begin
		declare x float;
        if (a >= 0) then 
			set x = 10;
		else
			set x = 20;
        end if;
        select x;
    end $$
delimiter ;
call teste6(-7);

#Sétima procedure ainda testando condicionais
#drop procedure teste7;
delimiter $$
	create procedure teste7(in a int, in b int)
    begin
		if a > b then
			select 'A maior';
		elseif b > a then
			select 'B maior';
		else
			select 'Iguais';
		end if;
    end $$
delimiter ;
call teste7(3,2);

#Oitava procedure agora com loop while
#drop procedure teste8;
delimiter $$
	create procedure teste8()
    begin
		declare str varchar(255) default '';
        declare x int default 0;
        set x = 1;
        while x <= 5 do
			set str = concat(str,x,',');
            set x = x + 1;
		end while;
        select str;
    end $$
delimiter ;
call teste8();

#Nona procedure com loop, agora trabalhando com repeat
#drop procedure teste9;
delimiter $$
	create procedure teste9()
    begin
		declare str varchar(255) default '';
        declare x int default 0;
        set x = 5;
        repeat
			set str = concat(str,x,',');
			set x = x - 1;
		until x <= 0
        end repeat;
        select str;
    end $$
delimiter ;
call teste9();

#Décima procedure testando a função leave dentro de uma repetição
#drop procedure teste10;
delimiter $$
	create procedure teste10()
    begin
		declare str varchar(255) default '';
        declare x int default -5;
        loop_label: Loop
			if x > 0 then
				leave loop_label;
			end if;
            set str = concat(str, x, ',');
            set x = x + 1;
		iterate loop_label;
        end loop;
        select str;
    end $$
delimiter ;
call teste10();
/* 
	Estes foram os testes com as funções básicas para se utilizar numa procedure
	agora começa a parte com functions 
*/
#Primeiro exemplo de function
#drop function quadrado;
delimiter $$
	create function quadrado(numero int) returns int
    deterministic
    begin
		set numero = numero * numero;
		return numero;
	end $$
delimiter ;
select quadrado(33)