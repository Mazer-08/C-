# Write a python program which generates a list where the values are square of
#   numbers between 1 and 20 (both included). Print the first 5 elements in the list.
#   Hints:
#   Use ** operator to get the power of a number.
#   Use range() for loops.
#   Use list.append() to add values into a list.
#   Use [n1:n2] to slice a list

lst=list()
for i in range(1,21):
    lst.append(i*i)
print(lst[0:5])    