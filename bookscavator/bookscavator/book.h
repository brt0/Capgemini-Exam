#pragma once

class Book_model
{
	Book_model (char add_name, char add_author, char add_genre, char add_year, char add_publisher, char add_pages)
	{

		char* name = new char;
		name = add_name;

		char* author = new char;
		author = add_author;

		char* genre = new char;
		genre = add_genre;

		char* year = new char;
		year = add_year;

		char* publisher = new char;
		publisher = add_publisher;

		char* pages = new char;
		pages = add_pages;

		int* id = new int;
		id = book_count;
		book_count++;

		std::cout << "Successfully added " << name;
	}

	friend void add();
	friend void load();

	~Book_model()
	{
		delete name;
		delete author;
		delete genre;
		delete year;
		delete publisher;
		delete pages;

		book_count--;

		std::cout << "Successfully deleted " <<name;
	}


};