def hitung(a, b):
    return a - b

def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

a, c, b, d = map(int, input().split())

result = mutlak(hitung(a,b)) + mutlak(hitung(c,d)) 

print(f"{mutlak(result)}")