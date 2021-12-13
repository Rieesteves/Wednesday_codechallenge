--chk nos pirme or no
Prelude> prime n = factors n ==[1,n]
Prelude> prime 15
False
Prelude> prime 17
True

--Factors
Prelude> factors n = [x |x <- [1..n],n `mod` x ==0]
Prelude> factors 50
[1,2,5,10,25,50]
