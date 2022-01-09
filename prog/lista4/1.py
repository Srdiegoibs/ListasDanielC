n = int(input("Digite um numero: "))
sum = 0
aux = n
v = []

while n > 0:
    v.append(n % 10)
    n = n // 10

for i in range(0, len(v)):
    v[i] = v[i]**len(v)
    sum += v[i]

if (sum == aux):
    print(aux, "amstronsg")
    print("ordem", len(v))
else:
    print("Não é amstrong")

