rows, cols = map(int, input().split())
elements = list(map(int, input().split()))

for i in range(rows):
    print(*elements[i * cols: (i + 1) * cols])