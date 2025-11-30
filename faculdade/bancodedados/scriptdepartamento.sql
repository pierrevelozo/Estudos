create database nova;

/*
create table pessoa (
	codpessoa integer primary key not null,
    cpf integer not null,
    datanasc date not null
    ) ;
*/

create table departamento (
	coddepartamento int primary key not null auto_increment,
    nomedepartamento varchar(20),
    codpessoa integer,
    foreign key (codpessoa) references pessoa(codpessoa)
);

drop table departamento;
select * from pessoa