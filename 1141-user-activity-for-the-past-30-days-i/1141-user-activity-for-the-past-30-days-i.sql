select A.activity_date day, count(distinct A.user_id) active_users from Activity A 
where A.activity_date<='2019-07-27' and A.activity_date> date_sub('2019-07-27',interval 30 day)
group by A.activity_date;