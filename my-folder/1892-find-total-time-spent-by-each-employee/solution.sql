# Write your MySQL query statement below
select event_day "day", emp_id,
sum(out_time - in_time) total_time
from employees
group by 1,2
