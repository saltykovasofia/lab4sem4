#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Book {
    string id;
    string author;
    string title;
    string pages;
};

vector<Book> readBooksFromFile(string filename) {
    vector<Book> books;
    // считываем записи из файла и добавляем их в вектор books
    return books;
}

void writeBooksToFile(const vector<Book>& books, string filename) {
    ofstream file(filename);
    // записываем каталог книг в файл
}

void addBook(vector<Book>& books, const Book& newBook) {
    // добавление новой записи
}

void printAllBooks(const vector<Book>& books) {
    // вывод всех записей
}

void deleteBook(vector<Book>& books, int index) {
    // удаление записи
}

void searchBookByAuthor(const vector<Book>& books, string author) {
    // поиск записи
}

void editBook(vector<Book>& books, int index) {
    // редактирование записи
}

int main() {
    string filename = "books.txt";
    vector<Book> books = readBooksFromFile(filename);

    // пример использования функций для манипуляции с каталогом книг

    writeBooksToFile(books, filename);

    return 0;
}
