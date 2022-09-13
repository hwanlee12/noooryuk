n = int(input())

for i in range(1, 2*n):
    for j in range(1, -abs(i-n)+n):
        print(" ", end='')
    for j in range(1, abs(2*(i-n)) + 2):
        print("*", end='')
    print()
