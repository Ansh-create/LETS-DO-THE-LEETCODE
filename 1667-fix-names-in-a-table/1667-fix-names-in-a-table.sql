SELECT user_id, concat(UPPER(SUBSTR(name,1,1)) , LOWER(SUBSTR(name,2))) as name FROM Users ORDER BY user_id ASC;