SELECT id,
CASE WHEN p_id is NULL then 'Root'
WHEN id not in (SELECT DISTINCT(p_id) from Tree WHERE p_id is not NULL) THEN 'Leaf'
ELSE 'Inner'
END AS type
FROM Tree;