st = input()

up = 0
lo = 0

for i in st:
    if i.islower():
        lo+=1
    elif i.isupper():
        up+=1

if up > lo:
    print(st.upper())
else:
    print(st.lower())