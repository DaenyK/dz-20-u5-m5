#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>

using namespace std;

int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			cout << "Дан целочисленный квадратный массив 10x10." << endl
				<< "Найти сумму элементов  каждой строки.\n\n";
			int a[10][10] = { {0},{0} };
			int sum, i, j;

			for (i = 0; i < 10; i++)
			{
				sum = 0;
				for (j = 0; j < 10; j++)
				{
					a[i][j] = rand() % 101;
					cout << a[i][j] << "   ";
					sum += a[i][j];
				}
				cout << " - сумма строки: " << sum << endl;
			}
			cout << endl << endl;
		}break;

		case 2:
		{
			cout << "Дан целочисленный квадратный массив 4x4." << endl
				<< "Найти строку с наименьшей суммой элементов\n\n";
			int a[4][4] = { { 0 },{ 0 } }, minSum[4] = { 0 };
			int sum, i, j, minString = 100, index;

			for (i = 0; i < 4; i++)
			{
				sum = 0;
				for (j = 0; j < 4; j++)
				{
					a[i][j] = rand() % 25;
					cout << a[i][j] << "\t";
					sum += a[i][j];
				}
				cout << " - сумма строки: " << sum << endl;
				minSum[i] = sum;
			}
			cout << endl << endl;

			for (i = 0; i < 4; i++)
			{
				if (minSum[i] < minString)
				{
					minString = minSum[i];
					index = i;

				}
			}

			cout << index + 1 << " - номер строки с наименьшей суммой элементов\n\n";

		}break;

		case 3:
		{
			cout << "Дана целочисленная матрица  6 x 8." << endl
				<< "Найти произведение положительных элементов первого столбца.\n\n";
			int a[6][8] = { { 0 },{ 0 } };
			int mult = 1, i, j;

			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 8; j++)
				{
					a[i][j] = -20 + rand() % 50;
					cout << a[i][j] << "\t";
					if ((j == 0) && (a[i][j] > 0))
						mult *= a[i][j];
				}
				cout << endl;
			}
			cout << endl << endl;

			cout << mult << " - произведение положительных элементов первого столбца\n\n";
		}break;

		case 4:
		{
			cout << "Составить программу, которая заполняет квадратную матрицу" << endl
				<< "порядка n натуральными числами 1, 2, 3, .. ., n2," << endl
				<< "записывая их в нее -по спирали- по часовой стрелке.\n\n";
			int mas[6][6], i, j, a = 1;
			int n = 6;
			for (i = 1; i <= 3; i++)
			{
				for (j = (i - 1); j < (n - i + 1); j++)
				{
					mas[i - 1][j] = a++;
				}
				for (j = i; j < (n - i + 1); j++)
				{
					mas[j][n - i] = a++;
				}
				for (j = (n - i - 1); j >= (i - 1); --j)
				{
					mas[n - i][j] = a++;
				}
				for (j = n - i - 1; j >= i; j--)
				{
					mas[j][i - 1] = a++;
				}
			}

			for (a = 0; a < 6; a++)
			{
				for (j = 0; j < 6; j++)
				{
					cout << mas[a][j] << "\t";

				}
				cout << endl << endl;

			}
			cout << endl;
		}break;

		case 5:
		{
			cout << "Дан двухмерный целочисленный массив A(M, N)." << endl
				<< "Составить  одномерный массив B из номеров строк этого массива\n\n";
			int a[4][4] = { { 0 },{ 0 } };
			int b[4] = { 0 }, i, j;

			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 4; j++)
				{
					a[i][j] = rand() % 25;
					cout << a[i][j] << "\t";
				}
				cout << endl;
				b[i] = i + 1;
			}

			cout << endl << endl;

			for (i = 0; i < 4; i++)
			{
				cout << b[i] << "\t";
			}
			cout << " - одномерный массив B из номеров строк этого массива";
			cout << endl << endl;

		}break;

		case 6:
		{
			cout << "Написать программу, которая в матрице чисел A(N, M)" << endl
				<< "находит все элементы, превышающие по абсолютной величине " << endl
				<< "заданное число B.Подсчитать число таких элементов и " << endl
				<< "записать их в массив C.\n\n";
			int a[5][5] = { { 0 },{ 0 } };
			int i, j, b = rand() % 30;
			int c[25] = { 0 }, count = 0;

			cout << "Рандомно-сгенерированное число B: " << b << endl;

			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					a[i][j] = rand() % 25;
					cout << a[i][j] << "\t";

					if (a[i][j] > b)
					{
						c[count] = a[i][j];
						count++;
					}
				}
				cout << endl;
			}
			cout << endl << endl;

			cout << count << " - кол-во элементов в массиве, превышающих число B\n\n";

			for (i = 0; i < count; i++)
				cout << c[i] << "\t";

			cout << endl << endl;

		}break;

		case 7:
		{
			cout << "Дана целочисленная матрица размера 8х5.Определить:" << endl
				<< "a.сумму всех элементов второго столбца массива;" << endl
				<< "b.сумму всех элементов 3 - й строки массива.\n\n";

			int a[8][5] = { { 0 },{ 0 } };
			int sumI = 0, sumJ = 0, i, j;

			for (i = 0; i < 8; i++)
			{
				for (j = 0; j < 5; j++)
				{
					a[i][j] = rand() % 25;
					cout << a[i][j] << "\t";
					if (j == 1)
						sumJ += a[i][j];
					if (i == 2)
						sumI += a[i][j];
				}
				cout << endl;
			}

			cout << endl << endl;

			cout << sumJ << " - сумма всех элементов второго столбца массива\n";
			cout << sumI << " - сумма всех элементов третьей строки массива\n\n";
		}break;

		case 8:
		{
			cout << "Дана целочисленная прямоугольная матрица размера M·N." << endl
				<< "Сформировать одномерный массив, состоящий из элементов," << endl
				<< "лежащих в интервале[1, 10].Найти произведение елементов" << endl
				<< "полученного одномерного массив\n\n";

			int a[6][4] = { { 0 },{ 0 } };
			int b[24] = { 0 };
			int mult = 1, i, j, count = 0;

			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 4; j++)
				{
					a[i][j] = rand() % 25;
					cout << a[i][j] << "\t";

					if ((a[i][j] >= 1) && (a[i][j] <= 10))
					{
						b[count] = a[i][j];
						count++;
					}
				}
				cout << endl;
			}

			cout << endl << endl;

			for (i = 0; i < count; i++)
			{
				cout << b[i] << "  ";
				mult *= b[i];
			}
			cout << "\nпроизведение элементов, полученного одномерного массива: " << mult << endl;
		}break;

		case 9:
		{
			cout << "Дана целочисленная квадратная матрица." << endl
				<< "Указать столбец(назвать его номер), где минимальное количество" << endl
				<< "элементов, кратных сумме индексов\n\n";
			int a[5][5] = { { 0 },{ 0 } };
			int  i, j;
			int count, b[5] = { 0 }, min = 5, minIndex;


			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					a[i][j] = 1 + rand() % 25;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}


			for (j = 0; j < 5; j++)
			{
				count = 0;
				for (i = 0; i < 5; i++)
				{
					if ((i + j) != 0)
					{
						if (a[i][j] % (i + j) == 0)
						{
							count++;
						}
					}
				}
				b[j] = count;
			}

			cout << "\nкол-во элементов, кратных сумме своих индексов: \n";

			for (i = 0; i < 5; i++)
			{
				cout << b[i] << "\t";
				if (b[i] < min)
				{
					min = b[i];
					minIndex = i;
				}
			}

			cout << endl << endl;
			cout << minIndex + 1 << " - номер столбца с наименьшим кол-во элементов, кратных своим индекса\n";

		}break;

		case 10:
		{
			cout << "Дана целочисленная квадратная матрица." << endl
				<< "Найти сумму элементов матрицы, лежащих выше главной диагонали\n\n";
			int a[5][5] = { { 0 },{ 0 } };
			int  i, j, sum = 0;


			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					a[i][j] = 1 + rand() % 25;
					cout << a[i][j] << "\t";
				}
				cout << endl << endl;
			}

			for (i = 0; i < 4; i++)
			{
				for (j = i + 1; j < 5; j++)
				{
					sum += a[i][j];
				}
			}

			cout << "\nсумма элементов, находящихся выше главной диагонали матрицы: " << sum << endl;
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}

