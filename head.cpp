#include <vector>
#include <sstream>








class Product {
public:
    void Print();
    void FillClass();
    void EditName();
    void EditPrise();
    void EditQuantity();
    void EditScore();
    void EditDate();
    void SaveClass(const std::string& filename);
    void LoadClass(const std::string& filename);

    Product()
    {
        // ����� ����� ���������������� ����� ������ ���������� �� ���������
        name = "Unnamed Product";
        prise = 0.0f;
        quantity = 0;
        score = 0;
        date = "Unknown";
    }

    // ����������� � �����������
    Product(const std::string& pname, float pprise, int pquantity, int pscore, const std::string& pdate)
        : name(pname), prise(pprise), quantity(pquantity), score(pscore), date(pdate) {}



        // ����� ��� ���������� �������� � ������
        void addProduct(const Product& product);
        // ����� ��� �������� �������� �� �������
        void removeProduct(int index);
        // ����� ��� ���������� ������� ��������� � ����
        void saveToFile(const string& filename);
        // ����� ��� �������� ������� ��������� �� �����
        void loadFromFile(const string& filename);
        // ����� ��� ������ ������� ��������� �� �����
        void printProducts();





private:
    std::string name;
    float prise;
    int quantity;
    int score;
    std::string date;
    int rating;
    vector<Product> products; // ������ ��� �������� ���������
};







