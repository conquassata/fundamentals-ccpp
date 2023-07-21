
La recursión implica la capacidad de una función o procedimiento para llamarse a sí mismo durante su propia ejecución. Para quienes estamos al lado matemático de las cosas, sabremos las similitudes correspondientes con lo que denominamos inducción matemática. En términos más simples, es como si una función resolviera un problema dividiéndolo en instancias más pequeñas del mismo problema, y resolviéndolas de forma repetitiva hasta alcanzar una solución para el caso más sencillo. Para entender mejor la recursión, imaginemos una caja que contiene otras cajas, y cada una de esas cajas puede a su vez contener más cajas, creando así una estructura en forma de árbol o cadena. Cada caja representa un subproblema que es similar al problema original, pero más simple. La función recursiva se encarga de abrir cada caja, resolver el contenido y, si es necesario, abrir más cajas (es decir, llamarse a sí misma) para resolver las instancias más pequeñas.

```c
def funcion_recursiva(parametros):
    # Caso base: Condición que detiene la recursión
    if condicion_base:
        return valor_base
    
    # Progreso hacia el caso base: Se divide el problema en subproblemas más pequeños
    subproblema = dividir_problema(parametros)
    
    # Llamada recursiva: Se llama a la función con los subproblemas
    resultado = funcion_recursiva(subproblema)
    
    # Combinar resultados: Se combinan los resultados de los subproblemas
    solucion = combinar_resultados(resultado)
    
    return solucion
```





