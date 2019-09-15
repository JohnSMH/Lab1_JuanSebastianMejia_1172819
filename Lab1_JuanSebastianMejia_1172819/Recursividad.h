#pragma once
ref class Recursividad
{
public:
	Recursividad();
public:
	int Fibonacci(int num);
public:
	int Factorial(int num);
public:
	int Multiplicacion(int num1, int num2);
public:
	bool Palabraspalindromas(System::String ^ palabraspalindromas, int i, bool pal);
	int binario(System::String^ Binario, int i, int dec);
	int basea(int bo, System::String^Numero, int i, int dec);
	System::String^ abase(int bf, int numdec, System::String^ Numf);
	void Binarioarchivo(System::String^ ruta);
};

