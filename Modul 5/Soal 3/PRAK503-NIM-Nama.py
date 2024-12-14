def maks(a, b):
    if(a > b):
        return a
    else:
        return b
    
def mins(a, b):
    if(a < b):
        return a
    else:
        return b
    
batas = []
max = -100000
min = 100000

bilangan = int(input())

while len(batas) < bilangan:
    nilai = list(map(int, input().split()))
    batas.extend(nilai)

for i in range (len(batas)):
    max = maks(batas[i-1], max)
    min = mins(batas[i-1], min)

print(max, min)