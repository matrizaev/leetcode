# Write your MySQL query statement below
select employee_id, 
CASE
WHEN MOD(employee_id, 2) = 1  AND name NOT LIKE 'M%'
THEN salary
ELSE 0 
END as bonus
FROM employees order by employee_id;
