# Q3. Write a python program to find factorial of a number.

a=int(input("Enter the no. to calculate factorial: "))
i=1
while a>0:
    i=a*i
    a=a-1
print("Factorial of given number is ",i)