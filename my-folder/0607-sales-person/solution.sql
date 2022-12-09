# Write your MySQL query statement below
with sales as (
select sales_id, order_id from orders inner join company using(com_id) where name='RED'
)
select p.name
from salesperson p
left join sales s USING(sales_id)
group by p.name
having count(order_id) = 0


