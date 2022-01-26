#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct movies_t
{
    string title;
    int year;
}mymovies[3];

void print_movie(movies_t movie);

int main()
{
    string mystr;
    int i;
    for(i=0;i<3;i++)
    {
        cout << "Enter title:";
        getline(cin,mymovies[i].title);
        cout << "Enter year:";
        getline(cin,mystr);
        stringstream(mystr) >> mymovies[i].year;
    }
    cout << "\nYou have entered these movies:\n";
    for(i=0;i<3;i++)
    {
        print_movie(mymovies[i]);
    }
    return 0;
}

void print_movie(movies_t movie)
{
    cout << movie.title;
    cout << "("<< movie.year << ")\n";
}