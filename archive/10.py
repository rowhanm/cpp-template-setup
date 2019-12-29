st = int(input())
count = 1
last_mm = ""
for i in range(st):
    mm = input()
    if i == 0:
        last_mm = mm
        continue
    if mm[-1] == last_mm[0]:
        count += 1
    last_mm = mm


print(count)