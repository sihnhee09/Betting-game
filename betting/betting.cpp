#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int money = 0;
	int betting;
	int menu;
	int random = rand() % 3;

	while (true)
	{

		 cout << "|   _ _|_ _|_ 0     _" << endl;
		 cout << "|_ |_| |   |  | _  |_|" << endl;
		 cout << "|_||_  |   |  || |  _|" << endl << endl;

		 cout << "\tMenu" << endl;
		 cout << "    [1] Betting" << endl;
		 cout << "    [2] Wallet" << endl;
		 cout << "    [3] Get_Money" << endl;
		 cout << "    [4] Help" << endl << endl;
		 cout << "    =>";
		 cin >> menu;
		 if (menu == 1)
		 {
			 cout << "������ �ݾ��� �Է����ּ��� : ";
			 cin >> betting;
			 if (betting > money)
			 {
				 cout << "������ �ݾ��� �ܾ׺��� �����ϴ�." << endl;
			 }
			 else
			 {
				 cout << "���ÿϷ�";
			 }
			 if (random == 2)
			 {
				 money = money * 3;
				 cout << "���ð�� : ����" << endl;
				 cout << "�ܾ� : " << money;
			 }
			 else
			 {
				 money = money / 2;
				 cout << "���ð�� : ����" << endl;
				 cout << "�ܾ� : " << money;
			 }
		 }
		 if (menu == 2)
		 {
			 cout << "�ܾ� : " << money << "��" << endl;
		 }
		 if (menu == 3)
		 {
			 if (money == 0)
			 {
				 money = 1000;
				 cout << "�ܾ� : " << money << "��" << endl;
			 }
			 else
			 {
				 cout << "�̹� �����ֽ��ϴ�." << endl;
				 cout << "�ܾ� : " << money << "��" << endl;
			 }
		 }
		 if (menu == 4)
		 {
			 cout << endl << "����" << endl;
			 cout << "[1] Betting����������" << endl;
			 cout << "[2] ���� ������" << endl;
			 cout << "[3] ���� 0���϶� �����������ֽ��ϴ�." << endl;
			 cout << "���α׷��� ���� �ܾ��� �ʱ�ȭ�˴ϴ�." << endl << endl;
			 cout << "By Sihnhee";
		 }
		 Sleep(2000);
		 system("cls");
	}

}