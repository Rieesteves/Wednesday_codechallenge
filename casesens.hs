--count he no o lettr case sensitive 
Prelude> count x xs = length [x'| x'<-xs, x ==x']
Prelude> count 'i' "Mississippi"
4
Prelude> count 'e' "Riean Esteves"
3
Prelude> count 'e' "RieanEsteves"
3
