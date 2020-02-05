#include <iostream>
#include <vector>
using namespace std;

int gcd(int num1, int num2)
{
    while (num2 != 0)
    {
        int result = num1 % num2;
        num1 = num2;
        num2 = result;
    }

    return num1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned int numberOfBros, position;
    unsigned int positionOfBro;
    unsigned int maxGCD = 0;

    cin >> numberOfBros >> position;

    while (numberOfBros--)
    {
        cin >> positionOfBro;

        int resultOfDistance = position - positionOfBro;
        if (resultOfDistance < 0)
        {
            resultOfDistance = (-resultOfDistance);
        }

        if (maxGCD == 0)
        {
            maxGCD = resultOfDistance;
        }
        else
        {
            maxGCD = gcd(maxGCD, resultOfDistance);
        }
    }

    cout << maxGCD << "\n";

    return 0;
}
