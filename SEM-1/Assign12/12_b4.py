# Q4. Write a python program that accepts a sentence and calculates the number of letters
# and digits.
# Suppose the following input is supplied to the program: hello world! 123
# Then, the output should be: LETTERS 10 DIGITS 3
# Note: In case of input data being supplied to the question, it should be assumed to be a
# console input.
# Hints: Use dictionary, isdigit(), isalpha()
# L-Letters D-Digits
s=input("Enter your string: ")
d={"Letters are ": 0, "Digits are ": 0}
for i in s:
    if i.isdigit():
        d["Digits are "]+=1
    elif i.isalpha():
        d["Letters are "]+=1
for i in d:
    print(i,' ',d[i])