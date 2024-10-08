# Write your MySQL query statement below
select user_id, max(time_stamp) last_stamp
from logins
where year(time_stamp) = 2020
group by user_id
having last_stamp is NOT NULL
