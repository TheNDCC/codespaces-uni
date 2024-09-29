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

def validar_numero_positivo(valor):
    numero = float(valor)
    if numero > 0:
        return numero
    else:
        return print("Ingrese un numero valido")

while True:
    entrada = input("Cuanto usuario se les va a calcular el IMC? ")

    if entrada.isdigit() and int(entrada) > 0:
        numero = int(entrada)
        break
    else:
        print("Entrada inválida. Por favor, ingresa la cantidad de usuario, otra vez.")

for i in range(0,numero,1):
    mt = None
    kg = None
    entrada_01 = float(input(" el valor de la altura metros "))
    entrada_02 = float(input("el peso en kg "))
    
    mt = validar_numero_positivo(entrada_01)
    kg = validar_numero_positivo(entrada_02)
    
    if mt is None and kg is None:
        print("El valor debe ser un número positivo.")
    
    indice_imc = IMC(kg,mt)
    
    print(f"Tu IMC es {indice_imc:.2f}, lo que indica que tienes {Clasificacion_IMC(indice_imc)}.")
