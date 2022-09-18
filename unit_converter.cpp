#include <iostream>
#include <string>

/*Unit_converter_001 - Конвертере единиц измерения*/

/*Weight units - единицы веса (массы). Режим конвертера (1)*/

using namespace std;

int main(){
    char mode_selection; // выбор режима конвертера
    
    // Объясняем суть программы, предлагаем выбрать режим
    cout << "Здравствуйте, уважаемый пользователь!\n";
    cout << "Это конвертер величин измерений.\n";
    cout << "Для начала работы, сделайте выбор режима конвертера.\n";
    cout << "Доступны следующие режимы:\n";
    cout << "1) Weight units RU - единицы веса (массы), принятые в России;\n";
    cout << "---------------------------------------\n";
    cout << "Выберите режим, введя его номер: ";
    cin >> mode_selection;
    
    if(mode_selection == '0'){
        cout << "-----------------------------------\n";
        cout << "Вы не выбрали режим!\n";
        cout << "Программа завершена.\n";
    } else if(mode_selection == '1'){
        char selection_of_the_mass_value; // выбор величины массы
        
        cout << "-----------------------------------\n";
        cout << "Выберите вариант конвертации:\n";
        cout << "1) Тонны в килограммы;\n";
        cout << "2) Килограммы в тонны;\n";
        cout << "3) Центнер в килограммы;\n";
        cout << "4) Килограммы в центнер;\n";
        cout << "5) Килограммы в граммы;\n";
        cout << "6) Граммы в килгограммы;\n";
        cout << "7) Граммы в миллиграммы;\n";
        cout << "8) Миллиграммы в граммы;\n";
        cout << "-----------------------------------\n";
        cout << "Введите номер варианта: ";
        cin >> selection_of_the_mass_value;
        
        if(selection_of_the_mass_value == '0'){
            cout << "-------------------------------\n";
            cout << "Вы не выбрали вариант!\n";
            cout << "Программа завершена.\n";
        } else if(selection_of_the_mass_value == '1'){
            int ton = 1000; // Ton - тонна = 1000 килгограммов
            double object_mass = 0; // масса объекта в тоннах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "--------------------------------\n";
            cout << "Введите массу вашего объекта в тоннах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << object_mass * ton << " килгограммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '2'){
            int ton = 1000; // Ton - тонна = 1000 килгограммов
            double object_mass = 0; // масса объекта в килгограммах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "--------------------------------\n";
            cout << "Введите массу вашего объекта в килгограммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / ton; // записываем результат в тоннах
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " тонн.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '3'){
            int centner = 100; // Centner - центнер = 100 килограммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в центнерах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass * centner; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " килгограммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }            
        } else if(selection_of_the_mass_value == '4'){
            int centner = 100; // Centner - центнер = 100 килограммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в килгограммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / centner; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " центнеров.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '5'){
            int kilogram = 1000; // Kilogram - килограмм = 1000 граммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в килгограммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass * kilogram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " граммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '6'){
            int kilogram = 1000; // Kilogram - килограмм = 1000 граммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в граммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / kilogram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " килограммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '7'){
            int gram = 1000; // Gram - грамм = 1000 миллиграммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в граммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass * gram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " миллиграммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        } else if(selection_of_the_mass_value == '8'){
            int gram = 1000; // Gram - грамм = 1000 миллиграммов
            double object_mass = 0; // масса объекта в центнерах(вводит пользователь)
            char confirmation_of_input; // подтверждение ввода
            
            // Запрашиваем у пользователя данные по массе объекта
            cout << "-------------------------------------\n";
            cout << "Введите массу вашего объекта в миллиграммах: ";
            cin >> object_mass;
            // Запрашиваем подтверждение ввода
            cout << "Вы подтверждаете данные? Введите символ (y), если да, если нет - n: ";
            cin >> confirmation_of_input;
            
            double result_mass = object_mass / gram; // записываем результат
            
            // Выводим результат
            if(confirmation_of_input == 'y'){
                cout << "----------------------------------\n";
                cout << "Масса вашего объекта " << result_mass << " граммов.\n";
            } else if(confirmation_of_input == 'n'){
                cout << "-----------------------------------\n";
                cout << "Вы не подтверждили ваши данне!\n";
                cout << "Программа завершена.\n";
            }
        }
    }
    
    return 0;
}
