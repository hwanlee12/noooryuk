import sys
input = sys.stdin.readline
n = int(input()) # 사람 수
arr = list(map(int,input().split())) # 인출 시간
arr.sort() # 정렬
for i in range(1,n):
    print(i)
    arr[i] += arr[i-1] # 인출 시간 갱신

print(sum(arr))