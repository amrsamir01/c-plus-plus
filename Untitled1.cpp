#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include <stdlib.h>
using namespace std;
class Medium{
	public:	
	    string abbreviation;
		string author;
		string title;
		int year_of_publication;
	    //constructor
		Medium(string abb, string aus, string T,int yop){
			abbreviation = abb;
			author = aus;
			title = T;
			year_of_publication = yop;
		}
		//getters
		string getAbbreviation(){
			return abbreviation;
		}
		string getAuthor(){
			return author;
		}
		string getTitle(){
			return title;
		}
		int getYear(){
			return year_of_publication;
		}
		//setters
		void setAbbreviation(string abb){
			abbreviation = abb;
		}
		void setAuthor(string aus){
			author = aus;
		}
		void setTitle(string T){
			title = T;
		}
		void setYear(int yop){
			year_of_publication = yop;
		}
		string toString() const{
			ostringstream buffer;
			buffer << fixed << showpoint << setprecision(2)
			<<"abbreviation: " << abbreviation << endl
			<<"author: " << author << endl
			<<"title: " << title << endl
			<<"year of publication: " << year_of_publication << endl;
			return buffer.str();
		}
};
class Book:Medium{
	public:
		string bname;
	    string getBname(){
	    	return bname;
		}
		void setBname(string bookname){
			bname = bookname;
		}
		string toString() const{
			ostringstream buffer;
			buffer << fixed << showpoint << setprecision(2)
			<<"abbreviation: " << abbreviation << endl
			<<"author: " << author << endl
			<<"title: " << title << endl
			<<"year of publication: " << year_of_publication << endl
			<<"Book name: " << bname << endl;
			return buffer.str();
		}
};
class Article:Medium{
	public:	
		string aname;
		int price;
		int date;
		//getters
		string getAname(){
	    	return aname;
		}
		int getPrice(){
			return price;
		}
		int getDate(){
			return date;
		}
		//setters
		void setAname(string articlename){
			aname = articlename;
		}
		void setPrice(int p){
			price = p;
		}
		void setDate(int d){
			date = d;
		}
		string toString() const{
			ostringstream buffer;
			buffer << fixed << showpoint << setprecision(2)
			<<"abbreviation: " << abbreviation << endl
			<<"author: " << author << endl
			<<"title: " << title << endl
			<<"year of publication: " << year_of_publication << endl
			<<"Article name: " << aname << endl
			<<"Price: " << price << endl
			<<"Date: " << date << endl;
			return buffer.str();
		}
};
class Bibliography{
	public:
		Bibliography(int size){
			string a[size];
		}
		void insert(Medium *&b){
			Medium *&a(b); 
		}
		*operator[](string s){
			int *z;
			if(s == " "){
				cout << "there is no input!";
				exit(0);
		    }
		    return z;
		}
		friend ostream& operator<<(ostream& os, const Bibliography& b){
			os << b;
			return os;
		}
};
int main(){
	Bibliography myBibliography(10);
	Medium* b1 = new Medium("Ra01", "Dietmar Ratz", "Grundkurs Programmieren in Java", 2001);
	myBibliography.insert(b1);
	cout << "Bibliography:" << endl << myBibliography;
	cout << endl << (*myBibliography["Pa72"]) << endl;
}

