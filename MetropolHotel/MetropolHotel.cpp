// MetropolHotel.cpp: ������� ���� �������.

#include "stdafx.h"
#include "mainMenu.h"

using namespace MetropolHotel;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew mainMenu());
	return 0;
}
