#include <iostream>
#include <vector>
using namespace std;

int gcd(int numFirst, int numSecond)
{
    while (numSecond != 0)
    {
        int numTemp = numFirst % numSecond;
        numFirst = numSecond;
        numSecond = numTemp;
    }

    return numFirst;
}

int factorial(int n)
{
    int result = 1;

    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> cases;
    int testCase;

    cin >> testCase;
    while (testCase--)
    {
        int secondTestCase, num;
        long long SumOfGCD = 0;

        cin >> secondTestCase;

        // get cases
        while (secondTestCase--)
        {
            cin >> num;
            cases.push_back(num);
        }

        // pair check
        for (int k = 0; k < cases.size() - 1; ++k)
        {
            for (int f = k + 1; f < cases.size(); ++f)
            {
                SumOfGCD += gcd(cases[k], cases[f]);
            }
        }

        // SumOfGCD
        cout << SumOfGCD << "\n";
        cases.clear();
    }
}
