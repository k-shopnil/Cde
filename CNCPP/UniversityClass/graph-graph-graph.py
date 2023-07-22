n = int(input())
l = list(map(int, input().split()))

mx = max(l)
graph = []

for i in l:
    s = "*" * i + " " * (mx - i)
    graph.append(s)

for i in range(mx - 1, -1, -1):
    for j in range(n):
        print(graph[j][i], end="")
    print()
