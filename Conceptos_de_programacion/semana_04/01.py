def IMC(kg, mt):
    return kg / mt**2

def Clasificacion_IMC(IMC):
    if IMC < 18.5:
        return "bajo peso"
    if IMC <= 24.9:
        return "normal"
    if IMC <= 29.9: 
        return "sobrepeso"
    return "obesidad"

def validar_numero_positivo(mensaje):
    while True:
        try:
            valor = float(input(mensaje))
            if valor > 0:
                return valor
            else:
                print("El valor debe ser un número positivo.")
        except ValueError:
            print("Por favor, ingrese un número.")

numero = validar_numero_positivo("¿Cuántos usuarios se les va a calcular el IMC? ")

for i in range(numero):
    print(f"\nUsuario {i + 1}:")
    
    mt = validar_numero_positivo("Introduce la altura en metros: ")
    kg = validar_numero_positivo("Introduce el peso en kg: ")

    indice_imc = IMC(kg, mt)
    clasificacion = Clasificacion_IMC(indice_imc)
    
    print(f"Tu IMC es {indice_imc:.2f}, lo que indica que tienes {clasificacion}.")