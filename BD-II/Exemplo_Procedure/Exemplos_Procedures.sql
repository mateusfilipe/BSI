create database teste;
use teste;

create table tabela1(
	valor int primary key
);

create table table1(
	salario decimal,
	tipo int
);

create table table2(
	somatorio decimal,
    tipo int
);

insert into table1 values (3000,1);
insert into table1 values (4000,1);
insert into table1 values (3000,2);

insert into table2 values (0,1);

insert into tabela1 values(3);
insert into tabela1 values(7);
insert into tabela1 values(1);
insert into tabela1 values(-2);

delimiter $$
create procedure teste2 (in quantidade int )
begin 
select * from tabela1 limit quantidade;
end $$
delimiter ;

call teste2(2);

delimiter $$
create procedure teste3 (out quantidade int)
begin
select count(*) into quantidade from tabela1;
end $$
delimiter ;

call teste3(@quantidade);
select @quantidade;

delimiter $$
create procedure teste4 (inout numero int)
begin
set numero = numero * numero;
end $$
delimiter ;

set @valor = 5;
call teste4 (@valor);
select @valor as 'valor';



#drop procedure teste5;
delimiter $$
create procedure teste5 ()
begin
	declare x int;
	declare y float;
	set y = 1.1;
	select count(*) into x from tabela1;
	select x,y;
end $$
delimiter ;

call teste5();

delimiter $$
create procedure teste6(in a int)
begin
	declare x float;
	if(a>=0) then set x = 10;
	else set x = 20;
	end if;
	select x;
end $$
delimiter ;

call teste6(0);


#drop procedure teste77;
delimiter $$
create procedure teste77(in a int, in b int)
begin
	if a > b then
		select concat(a," maior que ",b) as 'A > B';
	elseif a < b then
		select concat(b," maior que ",a) as 'B > A';
	else select "números iguais";
    end if;
end $$
delimiter ;

call teste77 (2,1);


delimiter $$
create procedure teste7(in a int, in b int)
begin
	if a > b then
		select "'A' maior";
	elseif a < b then
		select "'B' maior";
	else select "números iguais";
    end if;
    
end $$
delimiter ;

call teste7 (2,3);

delimiter $$
create procedure teste8()
begin
	declare str varchar (255) default '';
    declare x int default 1;
    while x <= 5 do
		set  str = concat(str,x,',');
        set x = x + 1;
	end while;
    select str;
end $$
delimiter ;

call teste8();

delimiter $$
create procedure teste9()
begin
	declare str varchar(255) default '';
    declare x int default 5;
    repeat
		set str = concat(str,x,',');
        set x = x - 1;
	until x <= 0
    end repeat;
    select str;
end $$
delimiter ;
call teste9();

delimiter $$
create procedure teste10()
begin
	declare str varchar(255) default '';
    declare x int default -5;
    loop_label: LOOP
		if x > 0 then leave loop_label;
		end if;
		set str = concat(str,x,',');
		set x = x+1;
    iterate loop_label;
    end loop;
    select str;
end $$
delimiter ;

call teste10();
delimiter $$
create function quadrado(numero int) returns int
deterministic
begin
	set numero = numero * numero;
    return numero;
end $$
delimiter ;
select quadrado (7);