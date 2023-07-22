N = int(input())
fact = 1
j = -4
for i in range(1, N+1):
    fact = fact*i
num = fact
res = list(map(int, str(num)))
# print(res)
if len(res) < 4:
    print(num)
else:
    while True:
        print(res[j])
        j = j+1
        if j == 0:
            break
