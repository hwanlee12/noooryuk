n, k = map(int, input().split())
student = list(map(int, input().split()))

costs = []

for i in range(n-1):
    costs.append(student[i+1] - student[i])
costs.sort(reverse=True)

ans = sum(costs)
for i in range(k - 1):
    ans -= costs[i]

print(ans)
#print(sum(costs[:n-k]))