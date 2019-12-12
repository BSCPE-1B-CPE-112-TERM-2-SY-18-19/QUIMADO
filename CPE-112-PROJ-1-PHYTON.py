#INPUT A NUMBER
numbers = int(input("ENTER NUMBER:"))

#COUNTING NUMBER OF DIGITS
n = numbers
x = n
digit = 0
while n!=0:
    n = n/10
    digit = digit+1

#GETTING THE NUMBER OF FACTORS       
t=0
j=2
factor=0
while x!=0:
    if x%j==0:
        x=x/j
        rem=j
        t=t+1
        factor=factor+1
        if x==1:
            break
        else:
            j=j+1

#DECISION - MAKING
if factor<=digit:
    print("NON-WASTEFUL NUMBER(S):")
    print(numbers)
if factor>digit:
    print("WASTEFUL NUMBER(S):")
    print(numbers)

