def mdc(a, b):
    if a < b: a, b = b, a
    if b == 0: return a
    return mdc(b, a % b) 

n, m = input().split(" ")
n, m = int(n), int(m)
x = 0

for i in range(m, 0, -1):
    if mdc(i, n) == 1:
        x = i
        break

print(x)

# 170 3127