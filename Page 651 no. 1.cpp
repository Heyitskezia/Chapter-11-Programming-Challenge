#include <iostream>
#include <string>

using namespace std;

struct MovieData
{
	string title, director;
	int year, time;

	MovieData(string tit, string d, int y, int tim)
	{
		title = tit, 
		director = d, 
		year = y, 
		time = tim;
	}
};

void displayMovie(MovieData &md)
{ 
	string title, 
		   director;
	int year, time;

	cout << "Title       			   : " << md.title << endl;
	cout << "Director    			   : " << md.director << endl;
	cout << "Year Released			   : " << md.year << endl;
	cout << "Running time (in minutes)          : " << md.time << endl;
}

int main()
{
	MovieData movie1("Hwa Yang Yeon Hwa Live On Stage", "BTS", 2015, 341),
		      movie2("Hwa Yang Yeon Hwa : Epilogue", "BTS", 2016 , 300 );

	displayMovie(movie1);
	displayMovie(movie2);

	return 0;
}
