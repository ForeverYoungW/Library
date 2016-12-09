#include <iostream>
#include <stdio.h>
#include <ctime>
#include <conio.h>
using namespace std;

struct tm *local_time = NULL;

class Tools {

public:
	// ʱ��ĸ�ʽ�����
	static void printTime(time_t timer) {
		local_time = localtime(&timer);
		printf("%d-%d-%d ", local_time->tm_year + 1900,
			local_time->tm_mon + 1, local_time->tm_mday);
		if (local_time->tm_hour < 10) {
			printf("0");
		}
		printf("%d:", local_time->tm_hour);
		if (local_time->tm_min < 10) {
			printf("0");
		}
		printf("%d:", local_time->tm_min);
		if (local_time->tm_sec < 10) {
			printf("0");
		}
		printf("%d\n", local_time->tm_sec);
	}

	// �ж�һ���ַ����Ƿ�ȫΪ����
	static bool isNumber(string str) {
		for (int i = 0; i < str.size(); i++) {
			if (!isdigit(str[i])) {
				return false;
			}
		}
		return true;
	}

	// �����ʺ�, ֻ�����������ֺ���ĸ
	static bool inputAccount(char* account, int size) {
		char c;
		int count = 0;
		while (((c = getch()) != '\r') && count < size - 1) {
			if (c == ' ') {
				continue;
			}
			if (c == 8) { // �˸�
				if (count == 0) {
					continue;
				}
				putchar('\b');
				putchar(' ');
				putchar('\b');
				count--;
			}
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
				putchar(c);
				account[count] = c;
				count++;
			}

		}
		account[count] = '\0';
		cout << endl;
		if (count >= USER_ACCOUNT_SIZE - 1) {
			cout << "�ʺ�̫���� !" << endl;
			return false;
		}
		return true;
	}

	// ��������, �����ַ�, ��ӡ*
	static bool inputPassword(char* password, int size) {
		char c;
		int count = 0;
		while (((c = getch()) != '\r') && count < size - 1) {
			if (c == ' ') {
				continue;
			}
			if (c == 8) { // �˸�
				if (count == 0) {
					continue;
				}
				putchar('\b');
				putchar(' ');
				putchar('\b');
				count--;
			}
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
				putchar('*');
				password[count] = c;
				count++;
			}
		}
		password[count] = '\0';
		cout << endl;
		if (count >= USER_PASSWORD_SIZE - 1) {
			cout << "����̫���� !" << endl;
			return false;
		}
		return true;
	}

	// ����ѡ�������, ���������λ, ��ֻ��Ϊ����
	static void inputChoice(string &str) {
		char c;
		char temp[3];
		int count = 0;
		while ((c = getch()) != '\r') {
			if (c == 8) {
				if (count == 0) {
					continue;
				}
				putchar('\b');
				putchar(' ');
				putchar('\b');
				count--;
			}
			if (count == 2) {
				continue;
			}
			if (c == ' ') {
				continue;
			}
			if (c >= '0' && c <= '9') {
				putchar(c);
				temp[count] = c;
				count++;
			}
		}
		temp[count] = '\0';
		str = temp;
		cout << endl;
	}

	static void writeTestBooks() {
		ofstream ofs;
		ofs.open("data/book_all.txt");
		if (ofs.is_open()) {
			string name = "�߼����";
			string author = "��������";
			string introduction = "һ���߼���̵���";
			for (int i = 1000; i < 11000; i++) {
				ofs << name << i << " " << author << " " << introduction << i << "\n";
			}
		}
		ofs << flush;
		ofs.close();
	}

	static void writeTestUsers() {
		ofstream ofs;
		ofs.open("data/user_all.txt");
		if (ofs.is_open()) {
			long long account = 14020031144;
			int password = 222;
			string name = "ѧ��";
			for (int i = 0; i < 100; i++) {
				ofs << account + i << " " << password << " " << name << i << "\n";
			}
		}
		ofs << flush;
		ofs.close();
	}

};