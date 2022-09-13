n = int(input())

for i in range(1, 2*n):
    for j in range(1, n-abs(i-n) + 1):
        print("*", end='')
    for j in range(1, abs(2*(n-i))+1):
        print(" ", end='')
    for j in range(1, n-abs(i-n) + 1):
        print("*", end='')
    print()