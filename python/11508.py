import sys

input = sys.stdin.readline

N = int(input())

arr = []

for _ in range(N):
    arr.append(int(input()))

arr.sort(reverse=True)

sum = 0
for i in range(N):
    if i % 3 == 2:
        continue
    else:
        sum += arr[i]

print(sum)