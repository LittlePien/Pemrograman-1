inputs = []

while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())
inputs = list(map(float, inputs))

jr, t = inputs

v = 22 * jr * jr * t / 7
l = 2 * 22 * jr * (jr + t) / 7
k = 2 * 22 * jr / 7

print(f"Volume = {v:.2f}")
print(f"Luas = {l:.2f}")
print(f"Keliling = {k:.2f}")