#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include "Library.h"
using namespace std;

bool isUserLogin;
bool isAdminLogin;

int main() {
	Library myLib = Library();
	while (true) {
		string loginOption;
		cout << "���ѡ��: 1.����Ա 2.ѧ��" << endl<<"������: ";
		cin >> loginOption;
		if (loginOption == "1") {
			isAdminLogin = myLib.adminLogin();
			if (isAdminLogin) {
				break;
			}
		} else if (loginOption == "2") {
			isUserLogin = myLib.userLogin();
			if (isUserLogin) {
				break;
			}
		} else {
			continue;
		}
	}

	if (isAdminLogin) {
		while (true) {
			cout << "��ѡ�����" << endl;
			cout << "--------------------------------" << endl;
			cout << "1-----�������" << endl;
			cout << "2-----�鿴ͼ����" << endl;
			cout << "3-----ɾ������" << endl;
			cout << "4-----�޸�ͼ����Ϣ" << endl;
			cout << "5-----��ѯͼ��" << endl;
			cout << "6-----����û�" << endl;
			cout << "7-----�޸��û�" << endl;
			cout << "8-----ɾ���û�" << endl;
			cout << "9-----�鿴�����û�" << endl;
			cout << "10----��ѯ�û�" << endl;
			cout << "0-----�˳�" << endl;
			cout << "--------------------------------" << endl;

			string adminOption;
			cin >> adminOption;
			if (adminOption == "1") {
				myLib.addBook();
			} else if (adminOption == "2") {
				myLib.displayBook();
			} else if (adminOption == "3") {
				myLib.removeBook();
			} else if (adminOption == "4") {
				myLib.changeBook();
			} else if (adminOption == "5") {
				myLib.userSearchBook();
			} else if (adminOption == "6") {
				myLib.addUser();
			} else if (adminOption == "7") {
				myLib.changeUser();
			} else if (adminOption == "8") {
				myLib.removeUser();
			} else if (adminOption == "9") {
				myLib.displayUser();
			} else if (adminOption == "10") {
				//myLib.userSearchBook();
			} else if (adminOption == "0") {
				exit(0);
			} else {
				continue;
			}
		}
	}

	if (isUserLogin) {
		while (true) {
			cout << "��ѡ�����" << endl;
			cout << "--------------------------------" << endl;
			cout << "1----�������" << endl;
			cout << "2----�鿴���" << endl;
			cout << "3----����" << endl;
			cout << "4----�黹" << endl;
			cout << "5----ɾ������" << endl;
			cout << "6----�޸�ͼ����Ϣ" << endl;
			cout << "7----��ѯͼ��" << endl;
			cout << "0----�˳�" << endl;
			cout << "--------------------------------" << endl;

			string option;
			cin >> option;

			/*
			�˴�������switch case���ж�, ��Ϊc++�в�֧��case string
			option����int��char��ԭ��Ϊ��ֹ�û���������, �����ݴ���
			*/
			if (option == "1") {
				myLib.addBook();
			} else if (option == "2") {
				myLib.displayBook();
			} else if (option == "3") {
				myLib.lendBook();
			} else if (option == "4") {
				myLib.backBook();
			} else if (option == "5") {
				myLib.removeBook();
			} else if (option == "6") {
				myLib.changeBook();
			} else if (option == "7") {
				myLib.userSearchBook();
			} else if (option == "0") {
				exit(0);
			} else {
				continue;
			}
		}
	}
	return 0;
}
