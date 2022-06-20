import sys

input = sys.stdin.readline

N = int(input())
arr = []
for _ in range(N):
    arr.append(int(input()))

weight = 0
arr.sort(reverse=True)
for i in range(N):
    arr[i] = arr[i] * (i + 1)

print(max(arr))