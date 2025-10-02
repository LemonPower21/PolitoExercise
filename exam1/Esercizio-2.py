distanza = float(input()) #distanza casa-lavoro
inizio = 100
fine = 4000
lavorativi = int(input()) #giorni lavorativi
kmtotali = fine-inizio

kmlavorativitotali = (distanza*lavorativi)*2   #Andata e ritorno
kmpersonali = kmtotali - (distanza*lavorativi)

perc_km_pers = kmpersonali/kmtotali
perc_km_lav = kmlavorativitotali/kmtotali

print("Personale: "+str(perc_km_pers*100)+"%")
print("Lavorativi: "+str(perc_km_lav*100)+"%")
print("Check:"+str(perc_km_lav+ perc_km_pers))