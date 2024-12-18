select lName,Price from item order by price;
select SNO,SName from store where Area="CP";
select lName,Min(Price),Max(Price)
from item
group by lName;
select lName,price,SName
from item,store
where item.Sno=store.SNO;