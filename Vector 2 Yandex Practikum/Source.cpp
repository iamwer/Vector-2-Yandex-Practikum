/*”лучшите предыдущую программу. ƒобавьте в неЄ следующие возможности:
Ќумерацию мес€цев ведите не с нул€, а как в жизни: май Ч п€тый мес€ц, декабрь Ч двенадцатый.
ƒобавьте обработку ошибок. ≈сли пользователь ввЄл номер несуществующего мес€ца, выведите текст Incorrect month.
¬место сиротливого числа выведите полноценную фразу, например There are 31 days in January.
ƒл€ реализации последнего пункта заведите второй вектор типа vector<string>, в который нужно сложить названи€ мес€цев на английском:
January
February
March
April
May
June
July
August
September
October
November
December*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> month_lenght = { 31, 30, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31 };
	vector<string> month_name = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	int month_index;
	cin >> month_index;

	if (month_index <= 0 || month_index > month_lenght.size())
	{
		cout << "Incorrect index" << endl;
	}
	else
	{
		cout << "There is " << month_lenght[month_index - 1] << " days in: " << month_name[month_index - 1] << endl;
	}




}