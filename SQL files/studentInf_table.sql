create table Studentinfo (
   Reg_no varchar(5) primary key,
   SName varchar(30) not null,
   Phone_no int not null,
   city varchar(10),
   state varchar(10),
   DOB date,
   class int not null,
   section varchar(1) default 'A'
);