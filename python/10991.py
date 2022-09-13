n = int(input())

cnt = 1
blk = n-1

for i in range(0, n):
    for j in range(0, blk):
        print(" ", end='')
    for j in range(0, cnt):
        if n%2 == 1:
            if (n-j)%2 ==0:
                print(" ", end='')
            else:
                print("*", end='')
        else:
            if (n-j)%2 == 0:
                print("*", end='')
            else:
                print(" ", end='')

    cnt += 2
    blk -= 1
    print()