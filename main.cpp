#include <iostream>
//definimos el tamaño
#define n 26

using namespace std;

int main()
{

//Parte de arriba. Creamos n filas con el contador j. Cada vez que sube j se pasa a la siguiente fila.
    for(int j=1;j<=n;j=j+1)
    {
        //Imprimimos las letras en orden ascende (ABC...)
        //El contador de las letras es i, este esta asociado con la fila j que se esta construyendo.
        //En la 1era fila es una letra, en la 2da son dos letras, y asi sucesivamente. Luego es mientras i<=j.
        //El caracter a imprimir comienza en A=65 es ASCII, se le quita 1 ya que sino se imprimiria el siguiente.

        for(int i = 1;i<=j;i=i+1)
        {
           char a= 65+i-1;
           cout<<a;
        }

        //Imprimimos espacios
        //Se usa el contador s (de "spaces").
        //El numero de espacios viene asociado a la fila en que estemos.
        //Analizando el problema se llego a la conclusion de que #espacios=2n-1-2j.
        //Depende de la fila actual j y del tamaño total n.

        for(int s = 1;s<=2*n-1-2*j;s++)
        {
            cout<<" ";
        }

        //Imprimimos las letras en reverso (GFEDCBA...)
        //Implementamos un contador decreciente ahora.
        //j es la fila donde estamos y esta relacionada con la ultima letra que se alcanza: 65+j-1
        //Decrecemos el contador hasta llegar a la primera letra: 65+1-1

        if (j<n)
        {
            for (int m = j;m>=1;m=m-1)
            {
                char a= 65+m-1;
                cout<<a;
            }
        }

        //Se evalua el caso particular de la ultima fila (la enesima--> j=n)
        //En este caso la ultima letra solo se imprime una vez (lo que ya se hizo cuando se imprimieron las letras es orden).
        //Por lo que las letras en reverso en la ultima fila se relacionan es con j-1 que es donde empieza el contador.
        //Lo demas queda igual

        else
        {
            for (int m = j-1;m>=1;m=m-1)
            {
                char a= 65+m-1;
                cout<<a;
            }
        }

        //Se imprime salto de linea para pasar a la siguiente fila
        cout << endl;
    }

//Parte de abajo
// El proceso es exactamente igual, solo cambia que ahora imprimimos la penultima fila primero y despues la antepenultima,etc.
// Ademas no se vuelve a imprimir la ultima fila por lo que j empieza en n-1
// Decrecemos la filas con el decremento de j en 1
// Cambiando asi solo el for mas externo toda la parte interna del algoritmo queda exactamente igual

    for(int j=n-1;j>=1;j=j-1)
    {
        for(int i = 1;i<=j;i=i+1)
        {
           char a= 65+i-1;
           cout<<a;
        }

        for(int s = 1;s<=2*n-1-2*j;s++)
        {
            cout<<" ";
        }

        if (j<n)
        {
            for (int m = j;m>=1;m=m-1)
            {
                char a= 65+m-1;
                cout<<a;
            }
        }
        else
        {
            for (int m = j-1;m>=1;m=m-1)
            {
                char a= 65+m-1;
                cout<<a;
            }
        }

        cout << endl;
    }

    cout << endl;
    cout << "yjmantilla";
    cout << endl;
}
