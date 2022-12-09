# Write your MySQL query statement below
select distinct a1.author_id id
from views a1
where a1.author_id = a1.viewer_id
order by id
