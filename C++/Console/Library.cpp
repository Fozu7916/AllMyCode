#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    string name = "";
    string date = "";
    string author = "";
    string getData() {
        string result = author + " \" " + name + " \" " + date;
        return result;
    }
};

class Library {
public:
    int count = 0;
    Book CreateNewBook(string a1, string a2, string a3)
    {
        Book thisbook;
        thisbook.name = a1;
        thisbook.date = a2;
        thisbook.author = a3;
        count = count + 1;
        return thisbook;
    }

};

int main() {
    setlocale(LC_ALL, "ru");
    Library lib; int zov;
    string a1; string a2; string a3;
    vector<Book> books;
    books.resize(4);
    books[0] = lib.CreateNewBook("George Oruel", "2024", "1984");
    books[1] = lib.CreateNewBook("George Oruel", "2024", "1984");
    books[2] = lib.CreateNewBook("George Oruel", "2024", "1984");
    books[3] = lib.CreateNewBook("George Oruel", "2024", "1984");
    while (true)
    {
        cout << "Добро пожаловать в библиотеку,что вы хотите сделать? 1 - просмотр библиотеки 2 - добавление книг 3 - поиск в библиотеке \n";
        cin >> zov;
        switch (zov)
        {
        case 1:
            for (int i = 0; i < lib.count; i++)
            {
                cout << i << "   " << books[i].getData();
                cout << "\n";
            }
            break;
        case 2:
            cout << "Введите название книги: ";
            cin.ignore(); 
            getline(cin, a1);
            cout << "Введите год издания  ";
            cin >> a2;
            cout << "Введите имя Автора  ";
            cin >> a3;
            books.resize(lib.count + 1);
            books[lib.count].name = a1;
            books[lib.count].date = a2;
            books[lib.count].author = a3;
            lib.count++;
            break;
        case 3:
            cout << "Вы хотите выполнить поиск по: 1 - Автору 2 - Названию 3 - Году публикации  \n";
            cin >> zov;
            cin.ignore();
            switch (zov)
            {
            case 1:
                cout << "Введите имя Автора  ";
                cin >> a1;
                for (int i = 0; i < lib.count; i++)
                {
                    if (books[i].author == a1)
                    {
                        cout << books[i].getData(); cout << "\n";
                    }
                }
                break;
                case 2:
                cout << "Введите название книги ";
                cin >> a2;
                for (int i = 0; i < lib.count; i++)
                {
                    if (books[i].name == a2)
                    {
                        cout << books[i].getData(); cout << "\n";
                    }
                }
                break;
                case 3:
                cout << "Введите год выпуска ";
                cin >> a3;
                for (int i = 0; i < lib.count; i++)
                {
                    if (books[i].date == a3)
                    {
                        cout << books[i].getData(); cout << "\n";
                    }
                }
            }
            break;
        default:
            cout << "Введены некоректные данные \n";
            break;
        }



    }
