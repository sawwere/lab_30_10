#include <iostream>


bool IsLeapYear(int year)
{
	return (year % 4 == 0) && !((year % 100 == 0) && (year % 400 != 0));
}

void LaterInYear(int m1, int d1, int m2, int d2)
{
	if (m1 > m2)
		std::cout << "first date";
	else
	{
		if (m1 == m2)
		{
			if (d1 > d2)
			{
				std::cout << "first date";
			}
			else
			{
				if (d1 == d2)
					std::cout << "equally";
				else
					std::cout << "second date";
			}
		}
		else
			std::cout << "second date";
	}
}

int DaysInYear(int year)
{
	return IsLeapYear(year) ? 366 : 365;
}

int DaysInYearRange(int year1, int year2)
{
	int res = 0;
	for (int i = year1; i <= year2; i++)
		res += DaysInYear(i);
	return res;
}

int SeconsInHours(int hours)
{
	return hours * 3600;
}

int main()
{

}