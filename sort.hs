--Sorting in acenf=ding order
Prelude> sorted xs = and [x<= y| (x,y)<- pair xs]
Prelude> sorted [1,2,3,4,5]
True
Prelude> sorted [1,5,3,2,4]
False
Prelude> sorted [4,3,2,1]
False
