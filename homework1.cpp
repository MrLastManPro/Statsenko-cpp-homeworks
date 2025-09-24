#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Объявление переменной для хранения имени пользователя
    string userName;
    
    // Запрос имени у пользователя
    cout << "Пожалуйста, введите ваше имя: ";
    getline(cin, userName);
    
    // Вывод персонального приветствия
    cout << "Привет, " << userName << "! Рад вас видеть!" << endl;
    
    return 0;
}
