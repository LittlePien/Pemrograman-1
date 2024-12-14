def highest(number):
    return max(number)

a = list(map(float, input().split()))

result = highest(a)

print(f"{result:.0f}")