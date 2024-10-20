import math

A = 12
C = 5
B = math.sqrt(A**2 + C**2)
Keliling = A + B + C
Luas = (A * C) / 2

print("Diketahui :")
print(f"Alas = {C} cm")
print(f"Tinggi = {A} cm")

print()

print("Jawab :")
print(f"Sisi A = {A} cm")
print(f"Sisi B = {B:.0f} cm")
print(f"Sisi C = {C} cm")
print(f"Keliling = {Keliling:.0f} cm")
print(f"Luas = {Luas:.0f} cm")