
contraseña_guardada = input("Establece tu contraseña: ")

intentos_maximos = 3
intentos = 0

while intentos < intentos_maximos:
    
    entrada = input("Introduce la contraseña: ")
    intentos += 1
    
    if entrada == contraseña_guardada:
        print("¡Bienvenido!")
        break  
    else:
        print("Contraseña incorrecta.")

if intentos == intentos_maximos and entrada != contraseña_guardada:
    print("Has realizado todos los intentos permitidos.")
