import sys
input = sys.stdin.readline

s = input().rstrip()
m = 0
maxi = ''
mini = ''

for i in s:
    if i == 'M':
        m += 1
    else:
        if m > 0:
            maxi += str(5*(10**m))
            mini += str(10**m + 5)
        else:
            maxi += '5'
            mini += '5'
        m = 0

if m > 0:
    maxi += '1' * m
    mini += str(10**(m - 1))

print(maxi)
print(mini)