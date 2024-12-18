create table Worker1(
        Wcode int8 not null primary key,
        Wname varchar(20) not null,
        sex varchar(1) not null,
        grade varchar(2) default 'E1',
        gross decimal check(gross>2000)
        );