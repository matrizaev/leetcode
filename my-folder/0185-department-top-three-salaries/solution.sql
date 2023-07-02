# Write your MySQL query statement below
select d.name Department, e.name Employee, e.salary Salary from 
(
  select 
  name, salary, departmentId,
  DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary desc) salary_rank  
  from employee
) e
inner join department d
on e.departmentId = d.id
where e.salary_rank <= 3
order by e.departmentId, e.salary desc, e.name 
