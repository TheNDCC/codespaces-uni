while True:
    numero = int(input("Escriba un numero positivo: "))
    if numero > 0:
        break
    elif numero.isalnum():
        break
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