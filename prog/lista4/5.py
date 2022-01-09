# 5) Crie um programa que receba o tamanho de três lados de um triângulo e determine se
# as entradas representam um triângulo equilátero, escaleno ou isósceles.

l1, l2, l3 = float(input("Digite o primeiro lado: ")), float(input("Digite o segundo lado: ")), float(input("Digite o terceiro lado: "))

if l1 == l2 and l2 == l3:
    print("Triângulo equilátero.")
elif l1 != l2 and l2 != l3 and l1 != l3:
    print("Triângulo escaleno.")
else:
    print("Triângulo isósceles.")
