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

        SoSimple(const SoSimple& copy) : num(copy.num)
        {
            cout << "Called SoSimple(const SoSimple& copy)" << "\n";
        }

        SoSimple& AddNum(int n)
        {
            num +=n;
            return *this;
        }

        void ShowData()
        {
            cout << "num :" << num << "\n";
        }
};

SoSimple SimpleFundObj(SoSimple ob)
{
    cout << "return before" << "\n";
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFundObj(obj).AddNum(30).ShowData();
    obj.ShowData();
    return 0;
}