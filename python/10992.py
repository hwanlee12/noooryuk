n = int(input())
cnt =1

for i in range(0, n-1):
    for j in range(0, n-i-1):
        print(" ", end='')
    for j in range(0, 2*cnt-1):
        if j==0 or j==2*cnt-2:
            print("*", end='')
        else:
            print(" ", end='')
    cnt+=1
    print()

for i in range(0, 2*n-1):
    print("*", end='')