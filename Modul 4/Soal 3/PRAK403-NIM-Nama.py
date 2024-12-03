first, second = map(int, input("").split())

i = first
j = second

if i < j:
    while i <= second and j >= first:
        print(f"{i} {j}", end=" ")

        if i < second or j > first:
            print("-", end=" ")
        i += 1
        j -= 1

elif i > j:
    while i >= second and j <= first:
        print(f"{i} {j}", end=" ")

        if i > second or j < first:
            print("-", end=" ")
        i -= 1
        j += 1