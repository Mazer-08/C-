# 1H. Calculate compound interest. [Compound Interest = P(1 + R/100)^T]

p,t,r=input("Enter your 3 numbers by giving spaces: ").split()
p,t,r=[int(p),int(t),int(r)]
print(p*(1+r/100)**t)
