# Write your MySQL query statement below
select sell_date, count(distinct product) num_sold,
group_concat(DISTINCT product ORDER BY product ASC SEPARATOR ',') products
from activities
group by sell_date
order by sell_date
