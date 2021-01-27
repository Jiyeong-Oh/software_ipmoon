def fibonacci(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    elif n>1:
        return (fibonacci(n-1)+fibonacci(n-2))

print("0보다 크거나 같은 정수 하나를 입력해주세요.")
number=int(input())
print(fibonacci(number))
