#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "book.h"

int book_count = 0;

void add()
{
	char add_name;
	char add_author;
	char add_genre;
	char add_year;
	char add_publisher;
	char add_pages;

	std::cout << "Book's title:\n";
	std::cin >> add_name;

	std::cout << "Book's author:\n";
	std::cin >> add_author;

	std::cout << "Book's genre:\n";
	std::cin >> add_genre;

	std::cout << "Book's release date:\n";
	std::cin >> add_year;

	std::cout << "Book's publisher:\n";
	std::cin >> add_publisher;

	std::cout << "Book's page count:\n";
	std::cin >> add_pages;

	Book_model book(add_name, add_author, add_genre, add_year, add_publisher, add_pages);
}

void load()
{
	std::string line;
	std::ifstream books_file;
	std::size_t alias;

	char add_name;
	char add_author;
	char add_genre;
	char add_year;
	char add_publisher;
	char add_pages;

	books_file.open("books.txt");
	if(books_file.is_open())
	{
		while(std::getline(books_file, line))
		{
			alias = line.find(';');
			add_name = line.copy(0, alias - 1);
			line.erase(0, alias);

			alias = line.find(';');
			add_author = line.copy(0, alias - 1);
			line.erase(0, alias);

			alias = line.find(';');
			add_genre = line.copy(0, alias - 1);
			line.erase(0, alias);

			alias = line.find(';');
			add_year = line.copy(0, alias - 1);
			line.erase(0, alias);

			alias = line.find(';');
			add_publisher = line.copy(0, alias - 1);
			line.erase(0, alias);

			alias = line.find(';');
			add_pages = line.copy(0, alias - 1);
			line.erase(0, alias);

			Book_model book(add_name, add_author, add_genre, add_year, add_publisher, add_pages);
			book_count++;
		}

	}
	else
	{
		std::cout << "There was a problem with books import\n";
	}
	books_file.close();
}



void remove()
{
	char* burn = new char;

	std::cout << "Enter title to remove:\n";
	cin >> 

	delete burn;
}

void one_author(char author)
{

}

void one_genre_and_publisher()
{

}

void most_books()
{

}

void most_popular()
{

}

int main()
{
	char menu;

	load();

	while (true)
	{
		std::cout << "1.Add a book\n2.Remove a book\n3.Reports\n4.Exit\n";
		std::cin >> menu;

		switch (menu)
		{
		case 1:add();
		case 2:remove();
		case 3:
		{
			while (true)
			{
				std::cout << "1.Show all books by the same author\n2.Show all books of a given genre and publisher\n3.Show the name of the publisher with the maximum quantity of the books\n4.Show TOP-3 genres (popularity is determined by the number of books in the genre)\n5.Go back";
				switch(menu)
				{
				case 1:one_author;
				case 2:one_genre_and_publisher();
				case 3:most_books();
				case 4:most_popular();
				case 5:break;
				}
			}
		}
		case 4:break;
		}

	}

	std::cout << "\nGoodbye\n";
	return 0;
}
