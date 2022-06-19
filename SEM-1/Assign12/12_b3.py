# Q3. Write a program, which will find all such numbers between 1000 and 3000 
# (both included) such that each digit of the number is an even number.
# The numbers obtained should be printed in a comma-separated sequence on a
# single line.
for i in range(1000,3001):
    n=i
    flag=0
    for j in range(4):
        rem=i%10
        if rem%2==0:
            i=i//10
            flag=1
            continue
        else:
            flag=0
            break
    if flag==1:
        print(n, end=", ")