# Write your MySQL query statement below
select e.employee_id
FROM employees e LEFT JOIN salaries s ON e.employee_id = s.employee_id
WHERE salary IS NULL
UNION
select s.employee_id
FROM salaries s LEFT JOIN employees e ON e.employee_id = s.employee_id
WHERE name IS NULL
ORDER BY employee_id
