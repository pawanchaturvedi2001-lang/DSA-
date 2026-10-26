
SELECT
    d.name AS Department,
    ranked.name AS Employee,
    ranked.salary AS Salary
FROM (
    SELECT
        e.*,
        DENSE_RANK() OVER (
            PARTITION BY e.departmentId
            ORDER BY e.salary DESC
        ) AS salary_rank
    FROM Employee e
) AS ranked
JOIN Department d
    ON ranked.departmentId = d.id
WHERE ranked.salary_rank <= 3;
