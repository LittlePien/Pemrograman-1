sec = int(input("Masukkan Detik: "))

hari = sec // 86400
sec %= 86400
jam = sec // 3600
sec %= 3600
menit = sec // 60
sec %= 60

if hari > 0:
    print(f"{hari} hari", end = " ")
print(f"{jam:02}:{menit:02}:{sec:02}")