create table ITEM(
    lNO varchar(3) primary key,
    lname varchar(25) not null,
    Price int8 not null,
    Sno varchar(3),
    foreign key(Sno) references Store(Sno)
    );