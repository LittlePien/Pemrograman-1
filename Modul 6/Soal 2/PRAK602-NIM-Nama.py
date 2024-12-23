n = int(input())
angka = list(map(int, input().split()))

for i in range(n):
    print(angka[i] * (i + 1), end=" ")