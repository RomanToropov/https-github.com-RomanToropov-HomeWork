#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <clocale>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int polosa_kasaya_sverhu = 218;
	int polosa_kasaya_snizy = 192;
	int polosa_kasaya_naoborot_sverhu = 191;
	int polosa_kasaya_naoborot_snizy = 217;
	int polosa_gorizontalnaya = 196;
	int polosa_vertekalnaya = 179;
	int kvadrat = 219;
	int n;
	int f;
	int kakoi_kvadrat;
	char nomer_programmu;
	int numeracia = 1;
	int numeracia2 = 1;
	int bykva;

	do
	{
		setlocale(LC_ALL, "ru");
		cout << "1. Шахмотная доска из (*):" << endl << "2. Шахмотная доска hard:" << endl << "Введите номер программы: "; nomer_programmu = _getch();
		if (nomer_programmu != 27)
		{
			cout << nomer_programmu << endl << endl;
		}
		else
		{
			cout << "Escape" << endl;
		}
		switch (nomer_programmu)
		{
		case '1':
			kakoi_kvadrat = 0;
			cout << "Введите высоту: "; cin >> n;
			cout << "Введите ширину: "; cin >> f;
			setlocale(LC_ALL, ".866");
			cout << endl;
			for (int i = 0; i < f; i++)
			{
				for (int i = 0; i < 5; i++)
				{
					if (f % 2 == 0)
					{
						for (int j = 0; j < f; j++)
						{
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "* ";
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
						}
					}
					else
					{
						for (int j = 0; j < f; j++)
						{
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "* ";
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
						}
						if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
						else kakoi_kvadrat = 0;

					}
					cout << endl;
				}
				if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
				else kakoi_kvadrat = 0;
			}
			cout << endl;
			break;
		case '2':
			setlocale(LC_ALL, "Rus");
			kakoi_kvadrat = 0;
			numeracia = 1;
			numeracia2 = 1;
			cout << "Введите высоту: "; cin >> n;
			cout << "Введите ширину: "; cin >> f;
			setlocale(LC_ALL, ".866");
			cout << endl;
			cout << (char)polosa_kasaya_sverhu;
			for (int i = 0; i < (f * 10) + 6; i++)
			{
				cout << (char)polosa_gorizontalnaya;
			}
			cout << (char)polosa_kasaya_naoborot_sverhu << endl;
			bykva = 65;
			for (int i = 0; i < f; i++)
			{
				if (i == 0)cout << (char)polosa_vertekalnaya << "   ";
				for (int k = 0; k < 5; k++)
				{
					if (bykva == 91)
					{
						bykva = 65;
					}
					if (k == 2)
					{
						cout << (char)bykva << " ";
						bykva++;
					}
					else
					{
						cout << "  ";
					}
				}
				if (i == f - 1)cout << "   " << (char)polosa_vertekalnaya;
			}
			cout << endl;
			for (int i = 0; i < f; i++)
			{
				if (i == 0)cout << (char)polosa_vertekalnaya << "  " << (char)polosa_kasaya_sverhu;
				for (int k = 0; k < 5; k++)
				{
					cout << (char)polosa_gorizontalnaya << (char)polosa_gorizontalnaya;
				}
				if (i == f - 1)cout << (char)polosa_kasaya_naoborot_sverhu << "  " << (char)polosa_vertekalnaya;
			}
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				for (int i = 0; i < 5; i++)
				{
					if (f % 2 == 0)
					{
						for (int j = 0; j < f; j++)
						{
							if (j == 0 && i != 2)cout << (char)polosa_vertekalnaya << "  " << (char)polosa_vertekalnaya;
							else if (j == 0 && i == 2 && numeracia < 10)cout << (char)polosa_vertekalnaya << " " << numeracia << (char)polosa_vertekalnaya;
							else if (j == 0 && i == 2)cout << (char)polosa_vertekalnaya << numeracia << (char)polosa_vertekalnaya;
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 10; k++)
								{
									cout << (char)kvadrat;
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
							if (j == f - 1 && i != 2)cout << (char)polosa_vertekalnaya << "  " << (char)polosa_vertekalnaya;
							else if (j == f - 1 && i == 2 && numeracia2 < 10)cout << (char)polosa_vertekalnaya << " " << numeracia2 << (char)polosa_vertekalnaya;
							else if (j == f - 1 && i == 2)cout << (char)polosa_vertekalnaya << numeracia2 << (char)polosa_vertekalnaya;
						}
					}
					else
					{
						for (int j = 0; j < f; j++)
						{
							if (j == 0 && i != 2)cout << (char)polosa_vertekalnaya << "  " << (char)polosa_vertekalnaya;
							else if (j == 0 && i == 2 && numeracia < 10)cout << (char)polosa_vertekalnaya << " " << numeracia << (char)polosa_vertekalnaya;
							else if (j == 0 && i == 2)cout << (char)polosa_vertekalnaya << numeracia << (char)polosa_vertekalnaya;

							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 10; k++)
								{
									cout << (char)kvadrat;
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
							if (j == f - 1 && i != 2)cout << (char)polosa_vertekalnaya << "  " << (char)polosa_vertekalnaya;
							else if (j == f - 1 && i == 2 && numeracia2 < 10)cout << (char)polosa_vertekalnaya << " " << numeracia2 << (char)polosa_vertekalnaya;
							else if (j == f - 1 && i == 2)cout << (char)polosa_vertekalnaya << numeracia2 << (char)polosa_vertekalnaya;
						}
						if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
						else kakoi_kvadrat = 0;

					}
					cout << endl;
				}
				if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
				else kakoi_kvadrat = 0;
				numeracia++;
				numeracia2++;
			}
			for (int i = 0; i < f; i++)
			{
				if (i == 0)cout << (char)polosa_vertekalnaya << "  " << (char)polosa_kasaya_snizy;
				for (int k = 0; k < 5; k++)
				{
					cout << (char)polosa_gorizontalnaya << (char)polosa_gorizontalnaya;
				}
				if (i == f - 1)cout << (char)polosa_kasaya_naoborot_snizy << "  " << (char)polosa_vertekalnaya;
			}
			cout << endl;
			bykva = 65;
			for (int i = 0; i < f; i++)
			{
				if (i == 0)cout << (char)polosa_vertekalnaya << "   ";
				for (int k = 0; k < 5; k++)
				{
					if (bykva == 91)
					{
						bykva = 65;
					}
					if (k == 2)
					{
						cout << (char)bykva << " ";
						bykva++;
					}
					else
					{
						cout << "  ";
					}
				}
				if (i == f - 1)cout << "   " << (char)polosa_vertekalnaya;
			}
			cout << endl;
			cout << (char)polosa_kasaya_snizy;
			for (int i = 0; i < (f * 10) + 6; i++)
			{
				cout << (char)polosa_gorizontalnaya;
			}
			cout << (char)polosa_kasaya_naoborot_snizy << endl;
			cout << endl;
			break;
		default:
			setlocale(LC_ALL, "Rus");
			if (nomer_programmu == 27)
			{
				cout << "Выход";
			}
			else
			{
				cout << "Нет такой программы" << endl;
			}
			break;
		}
	} while (nomer_programmu != 27);
}