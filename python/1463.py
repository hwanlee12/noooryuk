target = int(input())

dp = [0, 0, 1, 1]

for i in range(4, target+1):
    temp = dp[i-1]
    if i % 3 == 0:
        temp = min(temp, dp[i//3])
    if i % 2 == 0:
        temp = min(temp, dp[i//2])
    dp.append(temp + 1)

print(dp[target])
