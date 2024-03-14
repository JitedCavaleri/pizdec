
#include "head.cpp"



void Product::Print()
{
    cout << name << "����:" << prise << "\n ����������:" << quantity << "\n �������:" << score << "\n ���� ������������:" << date << endl;
}

void Product::FillClass()
{
    int i;
    int d = 1; // ����������: ������������� ���������� d, ����� �������� �������������� � �������������������� ����������
    do {
        cout << "����� ������ �� ������ ���������?" << endl;
        cout << "1.���\n 2.���� \n 3.���������� \n 4.������� \n 5.���� ������������ \n 6.��������� ��� �����" << endl;
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "������� ���:" ;
            cin >> name;
            break;
        case 2:
            cout << "������� ����:" ;
            cin >> prise;
            break;
        case 3:
            cout << "������� ����������:" ;
            cin >> quantity;
            break;
        case 4:
            cout << "������� �������:" << endl;
            cin >> score;
            break;
        case 5:
            cout << "������� ���� ������������:" << endl;
            cin >> date;
            break;
        case 6:
            cout << "������� ��� ������:" << endl;
            cout << "������� ���:" << endl;
            cin >> name;
            cout << "������� ����:" << endl;
            cin >> prise;
            cout << "������� ����������:" << endl;
            cin >> quantity;
            cout << "������� �������:" << endl;
            cin >> score;
            cout << "������� ���� ������������:" << endl;
            cin >> date;
            cout << "������� �������� ������?\n0.��\n��������� ���" << endl;
            break;
        default:
            cout << "�������� �����" << endl;
            d = 0;
            break;
        }
    } while (d == 0);
}

void Product::EditName()
{
    cout << "������� ����� ���:" << endl;
    cin >> name;
}

void Product::EditPrise()
{
    cout << "������� ����� ����:" << endl;
    cin >> prise;
}

void Product::EditQuantity()
{
    cout << "������� ����� ����������:" << endl;
    cin >> quantity;
}

void Product::EditScore()
{
    cout << "������� ����� �������:" << endl;
    cin >> score;
}

void Product::EditDate()
{
    cout << "������� ����� ���� ������������:" << endl;
    cin >> date;
}

void Product::SaveClass(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "�� ������� ������� ���� " << filename << endl;
        return;
    }

    file.imbue(locale(""));
    file << "0. ��� ��������: " << name << "\n";
    file << "1. ���� ��������: " << prise << "\n";
    file << "2. ���������� ��������: " << quantity << "\n";
    file << "3. ������: " << score << "\n";
    file << "4. ���� ������������: " << date << "\n";

    file.close();

}
void Product::LoadClass(const std::string& filename) {
    ifstream file(filename); // ��������� ���� ��� ������
    if (file.is_open()) {
        // ������ ���������� �� ����� � ����������� � ���������� ������
        getline(file, name);
        file >> prise >> quantity >> score;
        file.ignore(); // ���������� ������ ����� ������ ����� score
        getline(file, date);
        file.close(); // ��������� ����
        cout << "���������� ��������� �� ����� �������." << endl;

        // ������� ���������� �� �����
        cout << "���: " << name << endl;
        cout << "����: " << prise << endl;
        cout << "����������: " << quantity << endl;
        cout << "�������: " << score << endl;
        cout << "���� ������������: " << date << endl;
    }
    else {
        cout << "�� ������� ������� ���� ��� ������." << endl;
    }
}







