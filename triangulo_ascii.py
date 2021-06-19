

def abc_triangle(n):
    """
    

    Parameters
    ----------
    n : TYPE -> int
        Representa el largo y ancho de la matriz generada, al llegar a la Z se
        reinicia a A.
        Nota: n puede ser mayor que 26. Si usa Spyder, visualizalo desde el
        explorador de variables

    Returns
    -------
    None.

    """
    lista = [chr(65) for i in range(n)]
    
    """
        Se divide la grafica en 4, generando solamente el triangulo superior
        izquierdo
    """
    for row in range(n):
        for column in range(1,n):
            if (column>row):
                lista[row] += ' '                
            else:
                lista[row] += chr(65+(column%26))
                
        """
            Este triangulo se duplica, a lo ancho. haciendo una vista de espejo y
            no usando el primer valor se genera la parte superior del grafico
            'abcd' + 'cba' = 'abcdcba'
        """
        lista[row] += lista[row][-2::-1]
        
    """
        Seguido se genera el resto de la matriz con el mismo principio anterior
        Solo que esta vez no se aplica a cada fila, si no a la matriz completa
    """
    lista += lista[-2::-1]
    return lista

if __name__ == "__main__":
    inst = abc_triangle(10)
    print(inst)
    print('NeuroCo')
print('Andres Ruiz')
