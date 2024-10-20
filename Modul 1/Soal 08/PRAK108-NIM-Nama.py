import math

jarak = 14
putaran = 5
keliling = jarak / putaran
radius = keliling / (2 * math.pi)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman =", putaran)
print("Jarak tempuh Pak Dengklek =", jarak)
print()
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah", f"{radius:.2}")