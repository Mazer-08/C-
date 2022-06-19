# 1C. Find a maximum of 2 numbers and 3 numbers.

a,b,c=input("Enter your 3 numbers by giving spaces: ").split()
a,b,c=[int(a),int(b),int(c)]

if c>b and c>a:
    print(c," is maximum")
elif b>a and b>c:
    print(b, " is maximum")
elif a==b and b==c:
    print("All three numbers are equal.")
else:
    print(a," is maximum")