s = input()

cnt = 1
temp = ""
for i in range(len(s)):
    if cnt < 11:
        temp += s[i]
        cnt += 1
    else:
        print(temp)
        temp = s[i]
        cnt = 2

print(temp)