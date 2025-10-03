assunti_primoanno1 = float(input("Assunti Lavoro 1: "))
stipendio1 = float(input("Guadagni Lavoro 1: "))
assunti_primoanno2 = float(input("Assunti Lavoro 2: "))
stipendio2 = float(input("Guadagni Lavoro 2: "))
if(stipendio1>stipendio2 and assunti_primoanno1>assunti_primoanno2):
    print("Lavoro 1 è sicuramente meglio")
elif(stipendio1<stipendio2 and assunti_primoanno1<assunti_primoanno2):
    print("Lavoro 2 è sicuramente meglio")
else:
    print("Lavori equivalenti considerano assunti dopo primo anno e stipendi")
