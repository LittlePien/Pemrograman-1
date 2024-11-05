import math

inputs = []

while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())
inputs = list(map(float, inputs))

A, B = inputs

C = math.sqrt((B * B) - (A * A))
kel = A + B + C
luas = (A * C / 2)

print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {kel:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")