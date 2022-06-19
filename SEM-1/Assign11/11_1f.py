# 1F. Swap multiple numbers in clock-wise direction. [For example: a=10 , b=20, c=30 then after swapping a=30, b=10, c=20]

a,b,c=input("Enter your 3 numbers by giving spaces: ").split()
a,b,c=[int(a),int(b),int(c)]
for i in range(1):
    a,b,c=c,a,b
    print("Your 3 numbers in sequence are: ",a,b,c)
