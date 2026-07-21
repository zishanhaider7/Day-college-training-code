#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3], b[3][3], c[3][3];

public:
    // Constructor
    Matrix()
    {
        // Initialize result matrix to 0
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = 0;
            }
        }
    }

    void input()
    {
        cout << "Enter elements of First Matrix (3x3):\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "\nEnter elements of Second Matrix (3x3):\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    void multiply()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = 0;

                for (int k = 0; k < 3; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    void display()
    {
        cout << "\nResultant Matrix:\n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m;   // Constructor is called automatically

    m.input();
    m.multiply();
    m.display();

    return 0;
}