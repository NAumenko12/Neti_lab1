#include <iostream>
#include <string>

using namespace std;

int CountGlasni(const string& str) {
    string glasni = "AEIOUaeiouАЕЁИОУЫЭЮЯаеёиоуыэюя";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        bool isglasni = false;
        for (int j = 0; j < glasni.length() && !isglasni; j++) {
            if (c == glasni[j]) {
                isglasni = true;
            }
        }
        if (isglasni) {
            count = count++;
        }
    }
    return count;
}

void ToUpperCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'а' && str[i] <= 'я') {
            str[i] = str[i] - 'а' + 'А';
        }
    }
}

void ToLowerCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        else if (str[i] >= 'А' && str[i] <= 'Я') {
            str[i] = str[i] - 'А' + 'а';
        }
    }
}

int main() {
    string userString;
    cout << "Введите строку: ";
    getline(cin, userString);
    cout << "\n--- Результаты ---" << endl;
    cout << "Исходная строка: " << userString << endl;
    cout << "----------------------------------------" << endl;
    cout << "a. Количество гласных букв: " << CountGlasni(userString) << endl;
    string upperStr = userString;
    ToUpperCase(upperStr);
    cout << "b. Верхний регистр:    " << upperStr << endl;
    string lowerStr = userString;
    ToLowerCase(lowerStr);
    cout << "   Нижний регистр:     " << lowerStr << endl;
    return 0;
}
