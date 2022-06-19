# Q7. Write a python program to alphabetically sort the words of a string provided by the
# user and count the no of vowels in that string.

s=input("Enter a word:")
count=0
l=sorted(s)
s="".join(l)

print(s)
l=('a','e','i','o','u','A','E','I','O','U')
for i in s:
    if i in l:
        count+=1
print(count)