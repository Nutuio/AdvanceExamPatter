a = int(input("Enter a first number :"))
b = int(input("Enter a second number :"))
c = int(input("Enter a third number :"))

if a > b:
    if a > c:
        print("a is greatest number")
    else:
        print("c is greatest number")
else:
    if b > c:
        print("b is greatest number")
    else:
        print("c is greatest number")
