while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    list = int(input("Masukkan pilihan : "))

    if list == 5:
        print("Terimakasih, telah menggunakan kalkulator A. MALIK FAJAR PUTRA SYAMSI")
        break

    elif list >= 1 and list <= 5:
        
        first = float(input("Masukkan nilai pertama : "))
        second = float(input("Masukkan kedua pertama : "))

        if list == 1:
            result = first + second
            print(f"Hasil perjumlahan antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
            print("")

        elif list == 2:
            result = first - second
            print(f"Hasil pengurangan antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
            print("")

        elif list == 3:
            result = first * second
            print(f"Hasil perkalian antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
            print("")

        elif list == 4:
            result = first / second
            print(f"Hasil pembagian antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
            print("")

    else:
        print("Input Anda salah, silahkan coba lagi")
        print("")
        continue