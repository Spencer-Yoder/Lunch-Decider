#include"Header.h"

int main()
{
	Lunch calc;
	int num;
	char loop = 'a';

	while(loop != 'q' || loop != 'Q')
	{
		cout << "******************************" << endl;
		cout << "Work Lunch Restaurants Decider" << endl;
		cout << "******************************" << endl;
		cout << "Today choice is:" << endl;

		calc.open();
		num = calc.random();
		calc.print(num);

		cout << "Run again (q to quit)?" << endl;
		cin >> loop;
		
	}

	system("pause");
	return 0;
}