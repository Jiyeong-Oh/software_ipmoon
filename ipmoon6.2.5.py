print("Enter three integers, one by one.")
num1=input()
num2=input()
num3=input()

if num1<=num2 and num1<=num3:
    minimum=num1
    if num2>=num3:
        maximum=num2
    else:
        maximu=num3
elif num2<=num3:
    minimum=num2
    if num1>=num3:
        maximum=num1
    else:
        maximum=num3
else:
    minimum=num3
    if num1>=num2:
        maximum=num1
    else:
        maximum=num2
print("min: ", minimum)
print("max: ", maximum)

