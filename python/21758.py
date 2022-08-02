n = int(input())
a = list(map(int, input().split()))

ans = 0
s = []
s.append(a[0])

for i in range(1, n):
    s.append(s[i - 1] + a[i])

for i in range(1, n-1):
    ans = max(ans, s[n-2] + s[i-1] - a[i])

for i in range(1, n-1):
    ans = max(ans, s[n-1] - a[0]-a[i] +s[n-1] - s[i])

for i in range(1, n-1):
    ans = max(ans, s[n-2] - a[0] + a[i])

print(ans)