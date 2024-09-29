def IMC(kg, mt):
    return kg / mt**2

def Clasificacion_IMC(IMC):
    if IMC < 18.5:
        return "bajo peso"
    elif 18.5 <= IMC <= 24.9:
        return "normal"
    elif 25.0 <= IMC <= 29.9:
        return "sobrepeso"
    else:
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
            print("Entrada no válida. Por favor, ingrese un número.")

# Solicitar la cantidad de usuarios
while True:
    entrada = input("¿Cuántos usuarios se les va a calcular el IMC? ")
    if entrada.isdigit() and int(entrada) > 0:
        numero = int(entrada)
        break
    else:
        print("Entrada inválida. Por favor, ingresa la cantidad de usuarios otra vez.")

# Calcular el IMC para cada usuario
for i in range(numero):
    print(f"\nUsuario {i + 1}:")
    
    # Validar entrada para la altura y el peso
    mt = validar_numero_positivo("Introduce la altura en metros: ")
    kg = validar_numero_positivo("Introduce el peso en kg: ")

    # Calcular el IMC y clasificar
    indice_imc = IMC(kg, mt)
    clasificacion = Clasificacion_IMC(indice_imc)
    
    # Mostrar resultados
    print(f"Tu IMC es {indice_imc:.2f}, lo que indica que tienes {clasificacion}.")

