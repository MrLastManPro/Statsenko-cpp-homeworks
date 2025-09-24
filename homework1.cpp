#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Переменная для хранения имени пользователя
    string userName;
    
    // Запрос имени
    cout << "Как вас зовут?: ";
    getline(cin, userName);
    
    // Вывод персонального приветствия
    cout << "Привет, " << userName << "." << endl;
    
    return 0;
}
