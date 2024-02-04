// Clay.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class fraction {
private:
	int numerator = 0, denominator = 0;
	int fract = numerator / denominator;
public:
    int get_fract() {
        return fract;
    }

	void set_nums(int a, int b) {
		numerator = a;
		denominator = b;
	}

	void Calculate(double x, char oper, double y) {
        switch (oper)
        {
        case '+':
            cout << x + y;
        case '-':
            cout << x - y;
        case '*':
            cout << x * y;
        case '/':
            cout << x / y;
        default:
            cout << "incorrect value";
        }
	}
};

int main()
{

}

