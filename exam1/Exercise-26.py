vpersona = float(input("Velocità persona (m/s): "))
G = 6.67e-11
M = 2.2e14
R = 9.4e3
V = (2*G*M/R)**0.5
if(V>=vpersona):
    print("La persona torna a terra")
if(V<vpersona):
    x = (((vpersona**2)/2)*R)/G
    print(f"Il pianeta dovrebbe pesare {x-M}kg in più ")

#La notazione {valore:g} o {Valore:G} lo stampa in NOTAZIONE SCIENTIFICA