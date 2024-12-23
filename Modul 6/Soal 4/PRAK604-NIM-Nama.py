code = input()
message = input()

if len(code) != len(message):
    print("Panjang Kalimat berbeda, pesan palsu")
else:
    star = 0
    hash = 0
    result = ""

for i, j in zip(code, message):
    if i == " " and j == " ":
        continue

    if i == j:
        result += "*"
        star += 1
    else:
        result += "#"
        hash += 1

print(result)
print(f"* = {star}")
print(f"# = {hash}")

if star >= hash:
    print("Pesan Asli")
else:
    print("Pesan Palsu")