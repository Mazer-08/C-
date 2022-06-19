# 1E. Swap two numbers using third variable and without using third variable.

a=int(input("Enter your first number: "))
b=int(input("Enter your second number: "))
print("Numbers before swaping: ",a,b)
c=a
a=b
b=c
print("Numbers after swaping: ",a,b)
a,b=b,a
print("Number after again swaping: ",a,b)
