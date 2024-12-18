select distinct lName  from item where price>=5000;
select area,count(*) from store group by area;
select count(distinct area) from store;
select lName,price*0.05 discount from item where Sno in ('S02','S03');