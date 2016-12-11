#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include "Library.h"
using namespace std;

bool isUserLogin;
int isAdminLogin;

int main() {
	// Tools::writeTestBooks();
	// Tools::writeTestUsers();
	int flag = 1;
	while (flag) {
		flag = 1;
		isUserLogin = false;
		isAdminLogin = 0;
		Library myLib = Library();
		while (true) {
			string loginOption;
			cout << "���ѡ��: 1.����Ա 2.ѧ�� 3.�˳�" << endl << "������: ";
			Tools::inputChoice(loginOption);
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
			} else if (loginOption == "3") {
				flag = 0;
				break;
			} else {
				continue;
			}
		}

		// Ϊ��������Ա
		if (isAdminLogin == 2) {
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
				cout << "11----��ѯ�û����ļ�¼" << endl;
				cout << "12----��������ͼ���ļ�" << endl;
				cout << "13----���������û��ļ�" << endl;
				cout << "14----��ӹ���Ա" << endl;
				cout << "15----�޸Ĺ���Ա" << endl;
				cout << "16----ɾ������Ա" << endl;
				cout << "17----�鿴���й���Ա" << endl;
				cout << "0-----ע��" << endl;
				cout << "--------------------------------" << endl;

				string adminOption;
				Tools::inputChoice(adminOption);
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
					myLib.searchUser();
				} else if (adminOption == "11") {
					myLib.displayOneUserBorrowHistory();
				} else if (adminOption == "12") {
					myLib.readTestBooks();
				} else if (adminOption == "13") {
					myLib.readTestUsers();
				} else if (adminOption == "14") {
				    myLib.addAdmin();
                } else if (adminOption == "15") {
                    myLib.changeAdmin();
                } else if (adminOption == "16") {
                    myLib.removeAdmin();
                } else if (adminOption == "17") {
                    myLib.displayAdmin();
                } else if (adminOption == "0") {
					break;
				} else {
					continue;
				}
			}
		}

		// Ϊ��ͨ����Ա
		if (isAdminLogin == 1) {
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
				cout << "11----��ѯ�û����ļ�¼" << endl;
				cout << "12----��������ͼ���ļ�" << endl;
				cout << "13----���������û��ļ�" << endl;
				cout << "0-----ע��" << endl;
				cout << "--------------------------------" << endl;

				string adminOption;
				Tools::inputChoice(adminOption);
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
					myLib.searchUser();
				} else if (adminOption == "11") {
					myLib.displayOneUserBorrowHistory();
				} else if (adminOption == "12") {
					myLib.readTestBooks();
				} else if (adminOption == "13") {
					myLib.readTestUsers();
				} else if (adminOption == "0") {
					break;
				} else {
					continue;
				}
			}
		}

		if (isUserLogin) {
			while (true) {
				cout << "��ѡ�����" << endl;
				cout << "--------------------------------" << endl;
				cout << "1----�鿴���" << endl;
				cout << "2----��ѯͼ��" << endl;
				cout << "3----����" << endl;
				cout << "4----�黹" << endl;
				cout << "5----����" << endl;
				cout << "6----��ѯ���ļ�¼" << endl;
				cout << "0----ע��" << endl;
				cout << "--------------------------------" << endl;

				string userOption;
				Tools::inputChoice(userOption);

				/*
				�˴�������switch case���ж�, ��Ϊc++�в�֧��case string
				option����int��char��ԭ��Ϊ��ֹ�û���������, �����ݴ���
				*/
				if (userOption == "1") {
					myLib.displayBook();
				} else if (userOption == "2") {
					myLib.userSearchBook();
				} else if (userOption == "3") {
					myLib.lendBook();
				} else if (userOption == "4") {
					myLib.backBook();
				} else if (userOption == "5") {
					myLib.borrowAgain();
				} else if (userOption == "6") {
					myLib.displayOneUserBorrowHistory();
				} else if (userOption == "0") {
					break;
				} else {
					continue;
				}
			}
		}
	}
	return 0;
}
