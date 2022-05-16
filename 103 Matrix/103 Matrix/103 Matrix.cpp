
#include <iostream>



double CalArray(char op, double (&data)[5]) {
    double value = data[0];
	for (int i = 1; i < 5; i++){
		switch (op) {

		case '+':
			value += data[i];
			break;

		case '-':
			value -= data[i];
			break;

		case '*':
			value *= data[i];
			break;

		case '/':
			value /= data[i];
			break;

		default:
			std::cout << "please enter a operator\n + , - , * , /\n";
			std::cin >> op;
			CalArray(op, data);

		}
	}
	return value;
}

int main()
{

    double arr[5];
	char op;

	std::cout << "please input 5 values, followed by your desired operation\n";
	for (int i = 0; i < 5; i++){
		std::cin >> arr[i];

	}
	std::cin >> op;
	std::cout << CalArray(op, arr);
}


