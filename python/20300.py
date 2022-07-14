import sys
input = sys.stdin.readline

n = int(input())
pt = list(map(int, input().split()))
pt.sort()

if n % 2:
    ans = pt[-1]
    for i in range((n-1)//2):
        ans = max(pt[i] + pt[n - 2 - i], ans)
else:
    ans = 0
    for i in range(n // 2):
        ans = max(ans, pt[i] + pt[n - 1 - i])

print(ans)

