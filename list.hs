--ist of prime numbers..
Prelude> primes n = [x |x<- [ 2..n], prime x]
Prelude> primes 40
[2,3,5,7,11,13,17,19,23,29,31,37]
Prelude> primes 60
[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59]

--List zip or combinh..
Prelude> zip['a','b','c'][1,2,3,4]
[('a',1),('b',2),('c',3)]

--Using zip we can define a function returns the list of all pairs of adjacent elements from a list..
Prelude> pair xs = zip xs ( tail xs)
Prelude> pair [1,2,3,4]
[(1,2),(2,3),(3,4)]
