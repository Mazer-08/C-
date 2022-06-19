#  2. Write a program which accepts a sequence of comma-separated numbers from the
#     console and generate a list and a tuple which contains every number.
#     Suppose the following input is supplied to the program:
#     34,67,55,33,12,98
#     Then, the output should be:
#     ['34', '67', '55', '33', '12', '98']
#     ('34', '67', '55', '33', '12', '98')
#     Note:
#     In case of input data being supplied to the question, it should be assumed 
#     to be a console input.

# l=list(input("Enter commma separated elements: ").split(","))
a=input("Enter commma separated elements: ").split(",")
# l=list(a)
print("List :")
print(a)
t=tuple(a)
print("Tuple :")
print(t)