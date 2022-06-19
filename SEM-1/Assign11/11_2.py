#  Q2. During the curriculum of B.Tech 1st Semester,
#  3 quizzes are conducted as part of the internal evaluation.
#  Write a python program to calculate the average of the best two quizzes’ marks.
#  Prompt the user for marks.

array = []
a = int(input("Enter your numbers of quizzes : "))
for i in range(a) :
    ele = int(input("Enter your marks : "))
    array.append(ele)
array.sort()
sum = 0
for j in range(a-2,a):
    sum = sum+array[j]
print("your average in best 2 is",sum/2)