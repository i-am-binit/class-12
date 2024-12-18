create table CUSTOMER647(
C_ID int2 primary key,
CustomerName varchar(20) not null,
City varchar(14) not null,
i_ID varchar(4) not null,
foreign key(i_ID) references ITEM647(i_ID)
);