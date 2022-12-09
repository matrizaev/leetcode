# Write your MySQL query statement below
with data as
(select buyer_id, count(*) orders_in_2019 from orders
where year(order_date) = 2019
group by buyer_id)
select user_id buyer_id, join_date, coalesce(orders_in_2019, 0) orders_in_2019
from data
right join users on users.user_id = data.buyer_id
