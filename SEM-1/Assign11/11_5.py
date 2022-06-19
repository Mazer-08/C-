# Q5. Python Program to deposit and withdraw money in a Bank Account.
bnkamt=0
while(bnkamt>=0):
    a=input("Type 'deposit' to deposit inside inside the bank amount and Type 'withdraw' to withdraw inside inside the bank amount  :  ")
    if(a=='deposit'):
        b=int(input("Enter the amount to deposit inside the bankaccount : "))
        bnkamt=bnkamt+b
    elif(a=='withdraw'): 
        b=int(input("Enter the amount to withdraw from the bankaccount : "))
        if(b<bnkamt):
            bnkamt=bnkamt-b
        else:
            print("Insufficient funds")
    else:
        print("Invalid Choice ")
        break
    print("Bankamount inside the bank is:",bnkamt)