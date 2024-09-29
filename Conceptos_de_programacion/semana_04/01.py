def IMC(kg,mt):
    IMC = kg/mt
    
def Clasificacion_IMC(IMC):
    if IMC < 18.5:
        categoria = "bajo peso"
    elif 18.5 <= IMC <= 24.9:
        categoria = "normal"
    elif 25.0 <= IMC <= 29.9:
        categoria = "sobrepeso"
    else:
        categoria = "obesidad"
    return categoria

while True:
    entrada = input("Cuanto usuario se les va a calcular el IMC? ")

    if entrada.isdigit() and int(entrada) > 0:
        numero = int(entrada)
        break
    else:
        print("Entrada inválida. Por favor, ingresa la cantidad de usuario, otra vez.")

for i in numero:
    mt = 0
    kg = 0
    mt = input(" el valor de la altura metros")
    mt = input("el peso en kg")
    
    print(f"Tu IMC es {IMC(kg,mt):.2f}, lo que indica que tienes {Clasificacion_IMC(IMC)}.")
