import sys
input = sys.stdin.readline
n = float(input())
drink = list(map(float, input().split()))
drink.sort()
ans = drink[-1]
for i in range(len(drink) - 1):
    ans += drink[i] / 2
print(ans)