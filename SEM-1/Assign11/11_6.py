# Q6. Write a python program to calculate the electricity bill (accept number of unit from user) according to the following criteria :
# Unit Price
# First 100 units no charge
# Next 100 units Rs 5 per unit
# After 200 units Rs 10 per unit
# (For example if input unit is 350 than total bill amount is Rs2000)

a=int(input("Enter your unit of electricity used : "))
if(a<=100):
    print("Electricity Bill for the amount of unit used is :",0)
elif(100<a<=200):
    print("The bill of amount of electricity used is: ",(a-100)*5)
else:
    print("The bill of amount of electricity used is:",(a-200)*10+500)