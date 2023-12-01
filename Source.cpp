#include <iostream>;

void trapezoid_area() {
	float b1{}, b2{}, h{};

	std::cout << "Enter base b1: ";
	std::cin >> b1;
	std::cout << "Enter base b2: ";
	std::cin >> b2;
	std::cout << "Enter height h: ";
	std::cin >> h;

	std::cout << "The area of trapezoid equals to " << (b1 + b2) / 2 * h;		//Выводим в ответ значение площади трапеции, рассчитанное по формуле
}

void circle_area_length() {
	float r{};
	const float pi = 3.14;					//Задаем значение pi с малой точностью

	std::cout << "Enter the radius r: ";
	std::cin >> r;

	std::cout << "The length of circumference equals to " << 2 * pi * r << std::endl;
	std::cout << "The area of circumference equals to " << pi * r * r;
}

void right_triangle_area() {
	float a{}, b{};
	std::cout << "Enter the leg a: ";
	std::cin >> a;
	std::cout << "Enter the leg b: ";
	std::cin >> b;

	std::cout << "The area of triangle equals to " << a * b / 2 << std::endl;		//Выводим в ответ значения площади и гипотенузы треугольника, рассчитанные по формулам
	std::cout << "The hypotenuse of triangle equals to " << sqrt(a * a + b * b);
}

void sum_of_four_digits_num() {
	int num{};
	std::cout << "Enter the number: ";
	std::cin >> num;

	std::cout << "The sum of digitals equals to " << num / 1000 + num / 100 % 10 + num % 100 / 10 + num % 10; //Выводим в ответ сумму цифр, рассчитанную через целочисленное деление и остаток по делению
}

void Decart_to_Polar() {
	float x{}, y{};
	std::cout << "Enter x: ";		//Запрашиваем и вводим декартовы координаты
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	std::cout << "The polar coordinates are (" << sqrt(x * x + y * y) << " , " << atan(y / x) << ")"; //Выводим в ответ (r, fi), рассчитанные по формуле
}

void Polar_to_Decart() {
	double r{};
	double fi{};
	std::cout << "Enter r: ";					//Запрашиваем и вводим полярные координаты
	std::cin >> r;
	std::cout << "Enter fi (in radians): ";
	std::cin >> fi;

	std::cout << "The decart coordinates are (" << r * cos(fi) << " , " << r * sin(fi) << ")"; //Выводим в ответ (x, y), рассчитанные по формуле
}

void quadratic_equation_roots() {
	float a{}, b{}, c{};
	std::cout << "Enter coefficient a: ";
	std::cin >> a;
	std::cout << "Enter coefficient b: ";
	std::cin >> b;
	std::cout << "Enter coefficient c: "; //Вводим коэффициенты a,b,c для квадратного уравнения
	std::cin >> c;

	float discr = b * b - 4 * a * c;	 //Вычисляем дискриминант	
	if (discr < 0)						 //Проверяем дискриминант на равенство 0: если меньше, то выводим ошибку, если равно - один корень, больше - два корня
		std::cout << "No roots found";
	else if (discr == 0)
		std::cout << "The root is " << -b / (2 * a);
	else
		std::cout << "The roots are " << (-b + sqrt(discr)) / (2 * a) << " and " << (-b - sqrt(discr)) / (2 * a);
}

void medians() {
	float a{}, b{}, c{}, med_a{}, med_b{}, med_c{};
	std::cout << "Enter side a: ";
	std::cin >> a;
	std::cout << "Enter side b: ";
	std::cin >> b;
	std::cout << "Enter side c: ";
	std::cin >> c;

	std::cout << "Median for side a equals to " << (sqrt(2 * b * b + 2 * c * c - a * a)) / 2 << std::endl;
	std::cout << "Median for side b equals to " << (sqrt(2 * a * a + 2 * c * c - b * b)) / 2 << std::endl;
	std::cout << "Median for side c equals to " << (sqrt(2 * a * a + 2 * b * b - c * c)) / 2 << std::endl;
}

void hours_and_minutes_in_k_seconds() {
	int k;
	std::cout << "Enter seconds k: ";
	std::cin >> k;

	std::cout << k << " seconds is " << k / 3600 << " hours and " << (k - (k / 3600) * 3600) / 60 << " minutes";
}

void isosceles_triangle() {
	float a{}, b{}, c{};
	std::cout << "Enter side a: ";
	std::cin >> a;
	std::cout << "Enter side b: ";
	std::cin >> b;
	std::cout << "Enter side c: ";
	std::cin >> c;

	if (a == b || a == c || b == c)
		std::cout << "The triangle is isosceles";
	else
		std::cout << "The triangle is not isosceles";
}

void total_discounted_cost() {
	float sum{};
	std::cout << "Enter the sum of purchase: ";
	std::cin >> sum;

	if (sum > 1000)
		std::cout << "The total cost with discount is " << sum * 0.9;
	else
		std::cout << "The total cost is " << sum << " and the discount is unappliable";
}

void ideal_weight() {
	float h{}, w{};
	std::cout << "Enter your height in cm: ";
	std::cin >> h;
	std::cout << "Enter your weight in kg: ";
	std::cin >> w;

	int ideal_w = h - 100;
	if (ideal_w == w)
		std::cout << "Your weight is perfect!";
	else if (ideal_w > w)
		std::cout << "You should get some mass";
	else
		std::cout << "Your should lose some mass";
}

void product_of_random_numbers() {
	float product{};
	std::srand(std::time(0));
	int random1 = std::rand() % 9 + 1;										//Вводим два псевдослучайных числа с помощью srand() из диапазона [1,9]
	int random2 = std::rand() % 9 + 1;
	std::cout << "Enter the product of two random numbers from [1,9]: ";	//Просим пользователя угадать их произведение
	std::cin >> product;

	if (product == random1 * random2)			//Сравниваем предполагаемое произведение и фактическое, выводим соответствующий ответ
		std::cout << "You are lucky!";
	else
		std::cout << "Poor you! The product of numbers " << random1 << " and " << random2 << " is " << random1 * random2;
}

void negotiations_discounted() {
	int price{}, duration{}, day{};
	std::cout << "Enter price of negotiations per hour: "; //Вводим цену за час, длительность и день недели
	std::cin >> price;
	std::cout << "Enter duration of negotiations in hours: ";
	std::cin >> duration;
	std::cout << "Enter day in [1,7] that shows the day of the week: ";
	std::cin >> day;

	if (day == 6 || day == 7)
		std::cout << "Total cost of negotiations with a 20% discount: " << 0.8 * price * duration;
	else
		std::cout << "Total cost of negotiations: " << price * duration << "; a 20% discount is unnapliable";
}

void month_season() {
	int month{};
	std::cout << "Enter month number: ";
	std::cin >> month;
	switch (month) {
	case 1:
		std::cout << "It is January, winter";
		break;
	case 2:
		std::cout << "It is February, winter";
		break;
	case 3:
		std::cout << "It is March, spring";
		break;
	case 4:
		std::cout << "It is April, spring";
		break;
	case 5:
		std::cout << "It is May, spring";
		break;
	case 6:
		std::cout << "It is June, summer";
		break;
	case 7:
		std::cout << "It is Jule, summer";
		break;
	case 8:
		std::cout << "It is August, summer";
		break;
	case 9:
		std::cout << "It is September, autumn";
		break;
	case 10:
		std::cout << "It is October, autumn";
		break;
	case 11:
		std::cout << "It is November, autumn";
		break;
	case 12:
		std::cout << "It is December, winter";
		break;
	default:
		std::cout << "Wrong month number";
	}
}

void lucky_num() {
	int num{};
	std::cout << "Enter 6-digits number: ";
	std::cin >> num;
	int d1 = num / 100000;
	int d2 = num / 10000 % 10;
	int d3 = num / 1000 % 10;
	int d4 = num / 100 % 10;
	int d5 = num / 10 % 10;
	int d6 = num % 10;

	if (d1 + d2 + d3 == d4 + d5 + d6)
		std::cout << "It is a lucky number!!";
	else
		std::cout << "It is not a lucky number!";
	}

	void num_of_kopecks() {
		int num{};
		std::cout << "Enter number of 'kopeyka' in [1,99]: ";

		std::cin >> num;
		if (num % 10 == 1 && num / 10 != 1)
			std::cout << num << " 'kopeyka'";
		else if (num % 10 > 1 && num % 10 < 5 && num / 10 != 1)
			std::cout << num << " 'kopeyki'";
		else
			std::cout << num << " 'kopeek'";
	}

	void palindrome_nums() {
		int num{};
		std::cout << "Enter 4-digits number: ";
		std::cin >> num;
		int d1 = num / 1000;
		int d2 = num / 100 % 10;
		int d3 = num / 10 % 10;
		int d4 = num % 10;

		if (d1 == d4 && d2 == d3)
			std::cout << "The number is a palindrome";
		else
			std::cout << "The number is not a palindrome";
	}

	void three_digits_sum_more_b() {
		int num{}, b{};
		std::cout << "Enter 3-digits number: ";
		std::cin >> num;
		std::cout << "Enter number b: ";
		std::cin >> b;
		int d1 = num / 100 % 10; //Ищем разряды 3-ехзначного числа
		int d2 = num / 10 % 10;
		int d3 = num % 10;
		if (d1 * d2 * d3 > b) //Смотрим, произведение цифр в num больше b?
			std::cout << "The product of digits in given number is more than b" << std::endl;
		else
			std::cout << "The product of digits in given number is less than b" << std::endl;
	}
	void three_digits_sum_divided_by_7() {
		int num{}, b{};
		std::cout << "Enter 3-digits number: ";
		std::cin >> num;
		std::cout << "Enter number b: ";
		std::cin >> b;
		int d1 = num / 100 % 10; //Ищем разряды 3-ехзначного числа
		int d2 = num / 10 % 10;
		int d3 = num % 10;
		if ((d1 + d2 + d3) % 7 == 0)
			std::cout << "The number can be divided by 7";
		else
			std::cout << "The number cannot be divided by 7";
	}
	void rectangle_one_in_another() {
		float a{}, b{}, c{}, d{};
		std::cout << "Enter sides 'a' and 'b' for the first rectangle: ";
		std::cin >> a >> b;
		std::cout << "Enter sides 'c' and 'd' for the second rectangle: ";
		std::cin >> c >> d;

		if (a <= c && b <= d || a <= d && b <= c)
			std::cout << "First rectangle can be placed inside the second one";
		else
			std::cout << "First rectangle cannot be placed inside the second one";
	}
	void size_of_types() {
		std::cout << "char has " << sizeof(char) << " bytes" << std::endl;
		std::cout << "short has " << sizeof(short) << " bytes" << std::endl;
		std::cout << "int has " << sizeof(int) << " bytes" << std::endl;
		std::cout << "long has " << sizeof(long) << " bytes" << std::endl;
		std::cout << "long long has " << sizeof(long long) << " bytes" << std::endl;
		std::cout << "float has " << sizeof(float) << " bytes" << std::endl;
		std::cout << "double has " << sizeof(double) << " bytes" << std::endl;
		std::cout << "bool has " << sizeof(bool) << " bytes";
	}
	int main() {
		/*Task 1*/
		trapezoid_area();
		std::cout << "\n";
		/*Task 2*/
		circle_area_length();

		/*Task 3*/
		right_triangle_area();

		/*Task 4*/
		sum_of_four_digits_num();

		/*Task 5*/
		Decart_to_Polar();

		/*Task 6*/
		Polar_to_Decart();

		/*Task 7*/
		quadratic_equation_roots();

		/*Task 8*/
		medians();

		/*Task 9*/
		hours_and_minutes_in_k_seconds();

		/*Task 10*/
		isosceles_triangle();

		/*Task 11*/
		total_discounted_cost();

		/*Task 12*/
		ideal_weight();

		/*Task 13*/
		product_of_random_numbers();

		/*Task 14*/
		negotiations_discounted();

		/*Task 15*/
		month_season();

		/*Task 16*/
		lucky_num();

		/*Task 17*/
		num_of_kopecks();

		/*Task 18*/
		palindrome_nums();

		/*Task 19.1*/
		three_digits_sum_more_b();

		/*Task 19.2*/
		three_digits_sum_divided_by_7();

		/*Task 20*/
		rectangle_one_in_another();

		/*Task 21*/
		size_of_types();
	}