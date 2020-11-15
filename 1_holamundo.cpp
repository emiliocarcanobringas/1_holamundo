/*Primer programa en c++, este programa muestra como imprimir en pantalla un mensaje
en espa�ol usando la librer�a locale.h*/

# include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h>//Librer�a est�ndar de localizaci�n  (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a est�ndar y colocamos el valor de manejo de caracteres, con el valor: "Idioma espa�ol"

cout<<"Soy Emilio Carca�o Bringas y estoy orgulloso de pertenecer a Uninaciones y estudiar en la UNAM"<<endl;//Imprimimos un mensaje

return 0;//Finalizamos el programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/

