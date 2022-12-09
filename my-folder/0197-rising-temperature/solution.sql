# Write your MySQL query statement below
select wc.id
from weather wc
inner join weather wn on datediff(wc.recordDate, wn.recordDate) = 1
where wc.temperature > wn.temperature
