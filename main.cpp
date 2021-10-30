bool IsLeapYear(int year)
{
	return (year % 4 == 0) && !((year % 100 == 0) && (year % 400 != 0));
}

int SecondsInMinute()
{
	return 60;
}

int main()
{

}