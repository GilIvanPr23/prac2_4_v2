// prac2_4_v2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Student {
private:
    char name[20];
    double grades[10];
    int countGrades;
public:

    Student() {
        countGrades = 0;
    }

    void AddGrade(double grade) {
        if (countGrades < 10) {
            grades[countGrades] = grade;
            countGrades++;
        }
        else {
            std::cout << "Достигнут предел оценок\n";
        }
    }

    void SetName(char names[20]) {
        strcpy_s(name, names);
    }

    double Average() {
        if (countGrades != 0) {
            double sum = 0.0;
            for (int i = 0; i < countGrades; i++) {
                sum += grades[i];
            }
            return sum / countGrades;
        }
        else {
            return 0.0;
        }
    }
};


int main()
{
    Student student;
    char names[20];
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите имя студента ";
    std::cin >> names;
    student.SetName(names);
    
    std::cout << "Введите несколько оценок ";
    for (int i = 0; i < 3; i++) {
        double grade;
        std::cin >> grade;
        student.AddGrade(grade);
    }

    std::cout << "Средняя оценка студента равна " << student.Average() << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
