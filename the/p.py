nilai = [60, 85, 40, 90, 75, 50, 95]
if 85 in nilai:
    print("Nilai 85 ditemukan, posisi index:", nilai.index(85))
else:
  print("Tidak ditemukan")
filter = [x for x in nilai if x >= 75]
print("Hasil filter", filter)