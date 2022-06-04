SELECT employee_id from Employees WHERE employee_id not in (SELECT employee_id FROM Salaries)

UNION

Select employee_id FROM Salaries WHERE employee_id not in (SELECT employee_id FROM Employees)
ORDER BY employee_id ASC;