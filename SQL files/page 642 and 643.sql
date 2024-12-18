select Wno,Name,Gender 
from worker_d
order by Wno desc;

select name
from worker_d
where Gender="FEMALE";

select wno,name
from worker 
where DOB between 
"1987-01-01"and"1991-12-01";

select count(*)
from worker_D
where gender= "MALE" and DOJ> "1986-01-01";

select count(*),Dcode from worker_D
group by Dcode having count(*)>1;

select distinct department from dept;

select name,department,city from worker_D W,Dept D where
W.Dcode=D.Dcode and Wno<1003;

select max(doj),min(dob) from worker_d;


