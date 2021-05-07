times = []

for _ in range(0, 3):
    times.append(int(input()))

ords = times.copy()
ords.sort()

for i in range(0, 3):
    for j in range(0, 3):
        if times[j] == ords[i]:
            print(j + 1)
            break