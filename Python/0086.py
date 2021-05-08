a, b = input().split(" ")
a, b = float(a), float(b)
average = (a + b) / 2

print("Aprovado" if average >= 7 else "Recuperacao" if average >= 4 else "Reprovado")