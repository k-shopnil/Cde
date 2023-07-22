N = int(input())
fact = 1
j = -4
for i in range(1, N+1):
    fact = fact*i
rem = fact % 10000
print(rem)
