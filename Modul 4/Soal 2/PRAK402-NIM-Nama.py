max = int(input(""))

for i in range (1, max + 1, 2):
    print(i, end=" ")
print("")

for i in range (max, 1, -1):
    if i %2 == 0:
        print(i, end=" ")