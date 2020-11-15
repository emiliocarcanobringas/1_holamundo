/*Primer programa en c++, este programa muestra como imprimir en pantalla un mensaje
en español usando la librería locale.h*/

# include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h>//Librería estándar de localización  (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería estándar y colocamos el valor de manejo de caracteres, con el valor: "Idioma español"

cout<<"Soy Emilio Carcaño Bringas y estoy orgulloso de pertenecer a Uninaciones y estudiar en la UNAM"<<endl;//Imprimimos un mensaje

return 0;//Finalizamos el programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/

