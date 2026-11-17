suhu = [-3, 5, 0, -12, 8, 15, -1, 22]
if 0 in suhu:
  print("suhu ditemukan")
else:
  print("tidak ditemukan")
filter = [x for x in suhu if x >0]
print("hasil filter", filter)