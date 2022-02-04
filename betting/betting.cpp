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
			 cout << "배팅할 금액을 입력해주세요 : ";
			 cin >> betting;
			 if (betting > money)
			 {
				 cout << "배팅한 금액이 잔액보다 많습니다." << endl;
			 }
			 else
			 {
				 cout << "배팅완료";
			 }
			 if (random == 2)
			 {
				 money = money * 3;
				 cout << "배팅결과 : 성공" << endl;
				 cout << "잔액 : " << money;
			 }
			 else
			 {
				 money = money / 2;
				 cout << "배팅결과 : 실패" << endl;
				 cout << "잔액 : " << money;
			 }
		 }
		 if (menu == 2)
		 {
			 cout << "잔액 : " << money << "원" << endl;
		 }
		 if (menu == 3)
		 {
			 if (money == 0)
			 {
				 money = 1000;
				 cout << "잔액 : " << money << "원" << endl;
			 }
			 else
			 {
				 cout << "이미 돈이있습니다." << endl;
				 cout << "잔액 : " << money << "원" << endl;
			 }
		 }
		 if (menu == 4)
		 {
			 cout << endl << "도움말" << endl;
			 cout << "[1] Betting게임페이지" << endl;
			 cout << "[2] 지갑 페이지" << endl;
			 cout << "[3] 돈이 0원일때 돈을받을수있습니다." << endl;
			 cout << "프로그램을 끄면 잔액이 초기화됩니다." << endl << endl;
			 cout << "By Sihnhee";
		 }
		 Sleep(2000);
		 system("cls");
	}

}