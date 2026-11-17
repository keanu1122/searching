produk = ["laptop", "mouse", "keyboard", "monitor", "headset"]
if "keyboard" in produk:
  print("produk keyboard ditemukan")
else:
  print("tidak ditemukan")
filter = [x for x in produk if len(x) >5]
print("hasil filter", filter)