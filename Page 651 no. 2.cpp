#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MovieData
{
	string title, director;
	int year, time;
	double productionCost,
		   firstYearRevenue;

	MovieData(string tit, string d, int y, int tim, double cost, double rev)
	{
		title = tit, 
		director = d, 
		year = y, 
		time = tim;
		productionCost = cost;
		firstYearRevenue = rev;
	}
};

void displayMovie(MovieData &md)
{ 
	string title, 
		   director;
	int year, time;

	cout << fixed << showpoint << setprecision(2);
	cout << "Title                          : " << md.title << endl;
	cout << "Director                       : " << md.director << endl;
	cout << "Year Released                  : " << md.year << endl;
	cout << "Running time (in minutes)      : " << md.time << endl;
	cout << "Production cost (in USD)       : " << md.productionCost << endl;
	cout << "First year revenue	       : " << md.firstYearRevenue << endl;
	cout << "First year profit or loss      : $" << md.firstYearRevenue - md.productionCost << endl;
}

int main()
{
	MovieData movie1("Hwa Yang Yeon Hwa Live On Stage", "BTS", 2015, 341, 1000000, 200000000),
		      movie2("Hwa Yang Yeon Hwa : Epilogue", "BTS", 2016 , 300, 2000000, 400000000);

	displayMovie(movie1);
	displayMovie(movie2);

	return 0;
}
