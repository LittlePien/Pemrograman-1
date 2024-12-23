def multiply(n, MatxA, MatxB):
    result = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += MatxA[i][k] * MatxB[k][j]
    return result

n = int(input())

print("Matriks A")
MatxA = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
MatxB = [list(map(int, input().split())) for _ in range(n)]

result = multiply(n, MatxA, MatxB)

print("Matriks AXB")
for row in result:
    print(" ".join(map(str, row)))