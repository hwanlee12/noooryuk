months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
days = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]

x, y = map(int, input().split())

sum = 0
for i in range(x - 1):
    sum += months[i]
sum += y-1

print(days[int(sum % 7)])