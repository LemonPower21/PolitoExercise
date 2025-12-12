"""
11.1.3 Due stringhe. Scrivere un programma che chieda all’utente di fornire due stringhe, per poi
visualizzare (evitando ripetizioni di caratteri nella stampa):
I. i caratteri che compaiono in entrambe le stringhe;
II. i caratteri che compaiono in una stringa ma non nell’altra;
III. le lettere (alfabetiche) che non compaiono in nessuna delle due stringhe.
Suggeri
"""

s1 = input("Stringa 1: ")
s2 = input("Stringa 2: ")
alf = 'abcdefghijklmnopqrstuvwyxz'
setalf = set(alf)
sets1 = set(s1)
sets2 = set(s2)
print(f"Parole in entrambe: {sets1.union(sets2)}")
print(f"Parole in comuni: {sets1.intersection(sets2)}")
print(f"Parole non usate: {setalf.difference(sets1.union(sets2))}")