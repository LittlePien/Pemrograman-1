inp1, inp2, inp3 = map(int, input().split())

if inp1 > inp2 and inp1 > inp3:
    if inp2 > inp3 : print(inp3, inp2, inp1)
    else: print (inp2, inp3, inp1)
elif inp2 > inp1 and inp2 > inp3:
    if inp1 > inp3 : print(inp3, inp1, inp2)
    else: print(inp1, inp3, inp2)
else:
    if inp1 > inp2 : print(inp2, inp1, inp3)
    else: print(inp1, inp2, inp3)