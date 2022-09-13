n = int(input())

for i in range(1, 2*n):
    for j in range(1, abs(n-i)+1):
        print(" ", end='')
    for j in range(1, n - abs(n-i)+1):
        print("*", end='')
    print()