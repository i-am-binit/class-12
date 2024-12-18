create table Worker(
        Wcode int8 not null primary key,
        Wname varchar(20) not null,
        sex varchar(1) not null,
        grade varchar(2) not null,
        gross decimal check(gross>2000)
        );