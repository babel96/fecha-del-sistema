#include <cstdio>
#include <ctime>
#include <iostream>


using namespace std;

struct Fecha{

    int dia;
    int mes;
    int anio;

};
int main()
{
  time_t tiempo;
  char cad[80];
  struct tm *tmPtr;
  struct Fecha x;

  tiempo = time(NULL);
  tmPtr = localtime(&tiempo);

  printf("FECHA ACTUAL \n%d/%d/%d %d:%d:%d", tmPtr->tm_mday, tmPtr->tm_mon+1, 1900+tmPtr->tm_year, tmPtr->tm_hour, tmPtr->tm_min, tmPtr->tm_sec);
  strftime(cad, 80, "%A %d de %B de %Y", tmPtr);
  printf("\n\n%s", cad);

  x.dia=tmPtr->tm_mday;
 cout <<"\n\nESTE ES EL DIA: ";
 cout <<x.dia;

  return 0;
}

    //// para hacer bkp:
    /// system("copy datos\\datos.dat backups\\clientes.bkp")

    /// system ("copy [direccion y nombre del archivo] [direccion y nombre del backup])";
    /// NOTA: Para reponer el backup tenes que hacer lo mismo pero al reves.
