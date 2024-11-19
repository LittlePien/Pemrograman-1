inp = int(input("Input: "))

if inp == 0:
    print("Nol")
elif inp >= 1 and inp <= 9:
    print("Satuan")
elif inp == 10:
    print("Puluhan")
elif inp >= 11 and inp <= 19:
    print("Belasan")
elif inp >= 20 and inp <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")