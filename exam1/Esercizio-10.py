cost = float(input())
kmannui = float(input())
carb = float(input())
kmlitr = float(input())
rivendita = float(input())


totanni = 5
cost5years = (cost + (totanni*(carb*(kmannui / (kmlitr))))) - rivendita

print(f"L auto a benzina costa: {cost5years:.2f}")