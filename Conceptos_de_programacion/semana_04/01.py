def IMC(kg,mt):
    return kg/mt**2
    
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

for i in range(0,numero,1):
    mt = 0
    kg = 0
    mt = float(input(" el valor de la altura metros "))
    kg = float(input("el peso en kg "))
    
    indice_imc = IMC(kg,mt)
    
    print(f"Tu IMC es {indice_imc:.2f}, lo que indica que tienes {Clasificacion_IMC(indice_imc)}.")
