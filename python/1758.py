import sys

input = sys.stdin.readline

N = int(input())
arr = []
for _ in range(N):
    arr.append(int(input()))

arr.sort(reverse=True)
sum = 0
for i in range(N):
    cur = arr[i] - i;
    if cur < 0:
        break
    sum += cur

print(sum)