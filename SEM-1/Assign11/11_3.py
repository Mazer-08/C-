#  Q3. Given an integer, n, perform the following conditional actions:
#   If n is odd, print Weird  
# If n is even and in the inclusive range of 2 to 5, 
# print Not Weird  If n is even and in the inclusive range of 6 to 20,
#  print Weird  If n is even and greater than 20, print Not Weird

a=int(input("Enter your number: "))
if(a%2==1):
    print("Weird")
else:
    if(2<=a<=5):
        print("Not Weird")
    elif(6<=a<=20):
        print("Weird")
    elif(a>20):
        print("Not Weird")     