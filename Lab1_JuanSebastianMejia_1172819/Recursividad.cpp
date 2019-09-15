#include "Recursividad.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace System::IO;


Recursividad::Recursividad()
{
}

int Recursividad::Fibonacci(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return (Fibonacci(num - 1) + Fibonacci(num - 2));
}

int Recursividad::Factorial(int num)
{
	if (num == 0)
	{
		return 1;
	}
	return(num * Factorial(num - 1));
}

int Recursividad::Multiplicacion(int num1, int num2) {
	
	if (num1 < num2) {
		return Multiplicacion(num2, num1);
	}

	else if (num2 != 0)
	{
		return (num1 + Multiplicacion(num1, num2 - 1));
	}
	else {
		return 0;
	}
		
	
}


bool Recursividad::Palabraspalindromas(System::String^ palabraspalindromas, int i, bool pal) {
	if (i >= palabraspalindromas->Length - 1 - i)
	{
		return pal;
	}
	else
	{
		if (palabraspalindromas[i] == palabraspalindromas[palabraspalindromas->Length - 1 - i])
		{
			pal = true;
		}
		return (Palabraspalindromas(palabraspalindromas, i + 1, pal) && pal);
	}


}

int Recursividad::binario(System::String^ Binario, int i, int dec) {
	dec = 0;
	if (i >= Binario->Length) {
		return dec;
	}
	else
	{
		
		int num = System::Convert::ToInt32(System::Convert::ToString(Binario[i]));
		dec = num * pow(2, (Binario->Length - 1 - i));
		return dec + binario(Binario, i + 1, dec);

	}

}




int Recursividad::basea(int bo, System::String^ Numero, int i, int dec) {
	dec = 0;
	if (i >= Numero->Length) {
		return dec;
	} 
	else
	{
		int num;
		switch (Numero[i])
		{
		case 'a':
			num = 10;
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		case 'b':
			num = 11;
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		case 'c':
			num = 12;
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		case 'd':
			num = 13;
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		case 'e':
			num = 14;
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		case 'f':
			num = 15;
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		default:
			num = System::Convert::ToInt32(System::Convert::ToString(Numero[i]));
			dec = num * pow(bo, (Numero->Length - 1 - i));
			return dec + basea(bo, Numero, i + 1, dec);
			break;
		}
		
	}
}

System::String^ Recursividad::abase(int bf, int numdec, System::String^ Numf) {
	Numf = "";
	if (numdec / bf == 0) {
		System::String^ ult;
		switch (numdec%bf)
		{
		case 10:
			ult = "a";
			break;
		case 11:
			ult = "b";
			break;
		case 12:
			ult = "c";
			break;
		case 13:
			ult = "d";
			break;
		case 14:
			ult = "e";
			break;
		case 15:
			ult = "f";
			break;
		default:
			ult = System::Convert::ToString(numdec % bf);
			break;
		}
		return ult+Numf;
	}
	else
	{
		
		switch (numdec%bf)
		{
		case 10:
			Numf = "a";
			break;
		case 11:
			Numf = "b";
			break;
		case 12:
			Numf = "c";
			break;
		case 13:
			Numf = "d";
			break;
		case 14:
			Numf = "e";
			break;
		case 15:
			Numf = "f";
			break;
		default:
			Numf = System::Convert::ToString(numdec % bf);
			break;
		}
		numdec=numdec / bf;
		return abase(bf, numdec, Numf)+Numf;
	}

	
}

void Recursividad::Binarioarchivo(System::String^ ruta)
{
	StreamReader Reader(ruta);
	System::String^ Linea = Reader.ReadLine();
	System::String^ Resultado = "";
	for (int i = 0; i < Linea->Split(',')->Length; i++)
	{
		int NumeroActual = binario(Linea->Split(',')[i],0,0);
		Resultado = Resultado + NumeroActual.ToString() + ",";
	}
	StreamWriter Writer("..//Resultado.txt");
	Writer.WriteLine(Resultado);
	
	
}
