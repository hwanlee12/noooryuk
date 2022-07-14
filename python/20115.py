import sys
input = sys.stdin.readline
n = float(input())
drink = list(map(float, input().split()))
drink.sort()
ans = drink[-1]
for item in drink[:int(n) - 1]:
    ans += item / 2
print(ans)