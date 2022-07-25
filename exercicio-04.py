
def porc (estado, t):
    return round(((100*estado)/t),2)

sp = 67836.43
rj = 36678.66
mg = 29229.88
es = 27165.48
outros = 19849.53

t = sp + rj + mg + es + outros

print("Faturamento do estado de São Paulo:" + str(porc(sp, t)) + '%')
print("Faturamento do estado do Rio de Janeiro:" + str(porc(rj, t)) + '%')
print("Faturamento do estado de Minas Gerais:" + str(porc(mg, t)) + '%')
print("Faturamento do estado do Espirito Santo:" + str(porc(es, t)) + '%')
print("Faturamentos dos outros estados:" + str(porc(outros, t)) + '%')
