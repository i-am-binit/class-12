SELECT * FROM empdetails;
select EmpNo, Empname,Sal from empdetails;
select distinct job from empdetails;
select all job from empdetails;
select * from empdetails where Sal>2900;
select EmpNo, Empname, Job, Sal, DeptNo from empdetails where (DeptNo = 30 OR DeptNo = 20);
select * from empdetails where Sal between 1200 and 2500;
select * from empdetails where Empname like "%a%";
select * from empdetails order by EmpNo DESC;
select job, count(*), sum(comm) from empdetails group by job; 
select job, count(*) from empdetails group by job having count(*)<3;
select Empname, comm*100,'%' from empdetails ;


