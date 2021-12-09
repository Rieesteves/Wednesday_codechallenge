Prelude> fibo a b = a:fibo b (a+b)
Prelude> take 10 (fibo 0 1)
