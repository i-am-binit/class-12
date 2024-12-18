create table Worker_D(
 Wno int4 primary key,
 Name char(18) not null,
 DOJ date not null,
 DOB date not null,
 Gender varchar(10) not null,
 Dcode varchar(3) not null,
 Dcode varchar(3) not null,
 foreign key(Dcode) references Dept(Dcode)
 );