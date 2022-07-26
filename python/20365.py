import sys

input = sys.stdin.readline

n = int(input())
s = input()
bcnt, rcnt = 0, 0

for i in range(n - 1):
    f = s[i]
    if s[i] == s[i + 1]:
        if i == n - 2:
            if s[i + 1] == 'B':
                bcnt += 1
            else:
                rcnt += 1
    else:
        if f == 'B':
            bcnt += 1
        else:
            rcnt += 1
        if i == n - 2:
            if s[i + 1] == 'B':
                bcnt += 1
            else:
                rcnt += 1

print(min(rcnt, bcnt) + 1)