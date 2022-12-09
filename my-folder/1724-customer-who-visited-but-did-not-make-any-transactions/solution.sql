# Write your MySQL query statement below
select customer_id,
sum(case when transaction_id is NULL then 1 else 0 end) count_no_trans
from visits left join transactions on visits.visit_id = transactions.visit_id
group by customer_id
having count_no_trans > 0
