#include "UFunciones.h"

int main()
{
  char c1= 'w', c2='z';
  int i1=9, i2=12;
  double d1=9.9, d2=90.1;

  cout << "Antes del intercambio\n";
  cout << "char:\n";
  cout << "c1 = " <<c1 << "   c2= " << c2 << "\n";
  cout << "int:\n";
  cout << "i1 = " <<i1 << "   i2= " << i2 << "\n";
  cout << "double:\n";
  cout << "d1 = " <<d1 << "   d2= " << d2 << "\n";
  //---- se intercambia
  intercambio<char>(c1,c2);
  intercambio<int>(i1,i2);
  intercambio<double>(d1,d2);
  cout << "\nDespues del intercambio\n";
  cout << "char:\n";
  cout << "c1 = " <<c1 << "   c2= " << c2 << "\n";
  cout << "int:\n";
  cout << "i1 = " <<i1 << "   i2= " << i2 << "\n";
  cout << "double:\n";
  cout << "d1 = " <<d1 << "   d2= " << d2 << "\n";
  return 0;
}
