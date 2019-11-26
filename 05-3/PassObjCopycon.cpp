#include <iostream>
using namespace std;

class SoSimple
{
    private:
        int num;
    public:
        SoSimple(int n) : num(n)
        {

        }

        SoSimple(const SoSimple& copy) :num(copy.num)
        {
            cout << "Called SoSimple(const Sosimple& copy)" << "\n";
        }

        void ShowData()
        {
            cout << "num : " << num << "\n";
        }
};

void SimpleFuncObj(SoSimple ob)
{
    ob.ShowData();
}

int main(void)
{
    SoSimple obj(7);
    cout << "function call before" << "\n";
    SimpleFuncObj(obj);
    cout << "function call after" << "\n";
    return 0;
}