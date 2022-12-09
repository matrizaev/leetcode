# Write your MySQL query statement below
select name, sum(amount) balance
from users inner join transactions on users.account = transactions.account
group by name
having sum(amount) > 10000
