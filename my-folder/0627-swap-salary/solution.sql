# Write your MySQL query statement below
update salary
set sex = CASE sex
WHEN 'm' THEN 'f'
WHEN 'f' THEN 'm'
END
