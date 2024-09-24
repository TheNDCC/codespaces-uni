while True:
    entrada = input("Escriba un número positivo: ")

    if entrada.isdigit() and int(entrada) > 0:
        numero = int(entrada)
        break
    else:
        print("Entrada inválida. Por favor, ingresa solo números positivos mayores que 0.")

suma = 0
cantidad_pares = 0
cantidad_impares = 0    

for i in range(1, numero + 1):
    suma += i
    if i % 2 == 0:
        cantidad_pares += 1
    else:
        cantidad_impares += 1
        
promedio = suma / numero

print(f"Suma de los números del 1 al {numero}: {suma}")
print(f"Promedio de los números del 1 al {numero}: {promedio:.2f}")
print(f"Números pares del 1 al {numero}: {cantidad_pares}")
print(f"Números impares del 1 al {numero}: {cantidad_impares}")