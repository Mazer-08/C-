# 5. Write a python program which considers the result (mark) of 10 students 
# and give top 3 results.

l=list()
for i in range(10):
    b=int(input("Enter the marks: "))
    l.append(b)

l.sort()

print("Top 3 marks are :")
for i in range(0,3):
    print(l[9-i])