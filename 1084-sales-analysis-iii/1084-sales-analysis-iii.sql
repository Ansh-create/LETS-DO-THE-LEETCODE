SELECT product_id, product_name 
FROM Product
WHERE product_id NOT IN
(
SELECT product_id FROM Sales WHERE sale_date < "2019-01-01" OR sale_date > "2019-03-31"
);