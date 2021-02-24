
#include <iostream>
#include <stdio.h>
using namespace std;

class Time {
private:
	long double used_sec; //
	string sec_type;      //  задаем параметры объекта
	string to_what_type;  //
	public:
	void set(long int sec, string type1, string type2) {
		used_sec = (double)sec; //
		sec_type = type1;       //   введение данных в объект
		to_what_type = type2;   //
	}
	/*
	//  функция по переводу  микро нано пико секунд и вывод на экран
	*/
	void convert() {
		if (sec_type == "mks") {
			if(to_what_type=="mks"){
                cout<<"MikroSeconds: "<< used_sec << " " << to_what_type;
			}
			else if(to_what_type=="ns"){
                cout<<"NanoSeconds: "<< used_sec / 1000 << " " << to_what_type;
			}
			else if(to_what_type=="ps"){
                cout<<"PicoSeconds: "<< used_sec / 1000000 << " " << to_what_type;
			}
		}
		else if (sec_type == "ns") {
			if(to_what_type=="mks"){
                cout<<"MikroSeconds: "<< used_sec * 1000<< " " << to_what_type;
			}
			else if(to_what_type=="ns"){
                cout<<"NanoSeconds: "<< used_sec << " " << to_what_type;
			}
			else if(to_what_type=="ps"){
                cout<<"PicoSeconds: "<< used_sec / 1000 << " " << to_what_type;
			}
		}
		else if (sec_type == "ps") {
			if(to_what_type=="mks"){
                cout<<"MikroSeconds: "<< used_sec * 1000000<< " " << to_what_type;
			}
			else if(to_what_type=="ns"){
                cout<<"NanoSeconds: "<< used_sec * 1000 << " " << to_what_type;
			}
			else if(to_what_type=="ps"){
                cout<<"PicoSeconds: "<< used_sec << " " << to_what_type;
			}
		};

	}
};

int main(){
	long int sec; // задаем еденицу секунд
	string type1, type2; // задаем 2 типа секундб из и в какой надо будет перевести
	cout << "Insert type of seconds to convert(mks, ns, ps): " << endl;
	cin >> type1;
	cout << "Insert to what type of seconds you want to convert(mks, ns, ps): " << endl;
	cin >> type2;
	cout << "Insert needed for convertions seconds: ";
	cin >> sec;

	Time seconds;
	seconds.set(sec, type1, type2);
	seconds.convert();

	return 0;
}
