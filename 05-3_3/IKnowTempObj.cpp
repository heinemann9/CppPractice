#include <iostream>
using namespace std;

class Temporary
{
    private:
        int num;
    public:
        Temporary(int n) : num(n)
        {
            cout << "create obj" << "\n";
        }

        ~Temporary()
        {
            cout << "destroy obj" << "\n";
        }

        void ShowTempInfo()
        {
            cout << "My num is " << num << "\n";
        }
};

int main(void)
{
    Temporary(100);
    cout << "*********** after make !" << "\n";

    Temporary(200).ShowTempInfo();
    cout << "*********** after make !" << "\n";

    const Temporary &ref = Temporary(300);
    cout << "*********** end of main !" << "\n";

    return 0;
}