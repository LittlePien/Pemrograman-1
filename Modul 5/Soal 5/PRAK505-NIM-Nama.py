def Bio(birth, name, place):
    now: int = 2020

    print(f"Perkenalkan Nama Saya : {name}")
    print(f"Umur Saya : {now - birth}")
    print(f"Saya Adalah Angkatan : {now}")
    print(f"Asal Saya dari : {place}")

birth = int(input())
name = input()
place = input()

print("")

Bio(birth, name, place)