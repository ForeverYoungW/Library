#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

struct tm *local_time = NULL;

class Tools {

public:
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