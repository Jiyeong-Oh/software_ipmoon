def addAll(n):
    if n==0:
        return 0
    elif n!=0:
        n=n+addAll(n-1)
        return n

print("정수 하나를 입력해주세요")
num=int(input())
print(addAll(num))

