create table EMP(
   EmpNo int4 not null primary key,
   Empname varchar(10) not null,
   JOb varchar(19) not null,
   Mgr int4,
   Hiredate date not null,
   Sal int not null,
   Comm int ,
   DeptNo int 
   )