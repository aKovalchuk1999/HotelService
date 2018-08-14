// MetropolHotel.cpp: главный файл проекта.

#include "stdafx.h"
#include "mainMenu.h"

using namespace MetropolHotel;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew mainMenu());
	return 0;
}
