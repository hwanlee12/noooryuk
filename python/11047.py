import sys
input = sys.stdin.readline

n, cost = map(int, input().split())
coins = []

for i in range(n):
    coins.append(int(input()))
coins.sort(reverse=True)

ans = 0
for i in coins:
    if cost == 0:
        break

    if cost // i != 0:
        ans += (cost // i)
        cost %= i

print(ans)