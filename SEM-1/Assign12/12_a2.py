# Q2. Write a python program to check whether a number is armstrong number.

n = int(input("Enter a number: "))

order = len(str(n))  
sum = 0
t = n
while t > 0:
   digit = t % 10
   sum += digit ** order
   t //= 10
if n == sum:
   print(n,"is an Armstrong number")
else:
   print(n,"is not an Armstrong number")
   