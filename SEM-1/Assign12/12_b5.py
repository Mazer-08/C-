# Write a python program which takes two strings as input and print the string with
# maximum length in the console. If two strings have the same length, then print the
# strings line by line.
# Hints:
# Use len() function to get the length of a string

a=input("Enter your 1st string: ")
b=input("Enter your 2nd string: ")
if(len(a)>len(b)):
    print(a)
elif((len(a)<len(b))):
    print(b)
else:
    print(a,"\n",b)        
