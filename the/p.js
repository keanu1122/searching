const nilai = [60, 85, 40, 90, 75, 50, 95];
const idx = nilai.indexOf(85);
console.log(idx !== -1 ? `85 ditemukan di index ${idx}` : "Tidak ditemukan");
console.log("Lulus:", nilai.filter(n => n >= 75));