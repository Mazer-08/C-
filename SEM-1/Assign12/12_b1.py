# B 1. With a given integer number n, write a python program to generate a dictionary
#   that contains (i, i*i) such that i is an integer number between 1 and n (both included)
#   and then print the dictionary.
#   Suppose the following input is supplied to the program: 8
#   Then, the output should be:
#   {1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64}

a=int(input("Enter the value of n "))
dic1={}
for i in range (1,a+1):
    dic1[i]=i*i
print(dic1)