def reverse(a):
    b = 0
    
    while a != 0:
        last = a % 10
        b = b * 10 + last
        a = a//10
    return b

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(f"{reverse(C)}")