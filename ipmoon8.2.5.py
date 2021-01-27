def comb(n,r):
    if r==0:
        return 1
    elif n==r:
        return 1
    elif n>r:
        answer=comb(n-1,r-1)+comb(n-1,r)
        return answer

input_n = int(input())
input_r = int(input())

print(comb(input_n, input_r))

