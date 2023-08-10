i = list(map(int, input().split()))
k = int(input())
f = (i[1] + (k%i[0]) + i[0]) % i[0]
print(f)
