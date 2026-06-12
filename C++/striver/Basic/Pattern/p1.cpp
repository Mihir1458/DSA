#include <iostream>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        {
            for (int j = 0; j < (2 * i + 1); j++)
            {
                cout << "*";
            }
            /*   *
             ***
             *****
             *******
             *********      */
        }
        cout << endl;
    }
}
void pattern2(int n)
{ /*
   *******
   *****
   ***
   *
   */
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * n - 2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)

{
    /*
     *
     ***
     *****
     *******
     *******
     *****
     ***
     *
     */
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4(int n)
{ /*
          *
          **
          ***
          ****
          *****
          ****
          ***
          **
          *

  */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern5(int n)
{ /*

  1
  01
  101
  0101

  */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    /*

          1        1
          12      21
          123    321
          1234  4321
          1234554321

    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int k = 1; k < 2 * n - 2 * i - 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << i - l + 1;
        }
        cout << endl;
    }
}
void pattern7(int n)
{

    /*
           1
           2 3
           4 5 6
           7 8 9 10
           11 12 13 14 15
    */
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    /*
              A
              A B
              A B C
              A B C D
              A B C D E
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{ /*
              A B C D E
              A B C D
              A B C
              A B
              A
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    /*
              A
              B B
              C C C
              D D D D
              E E E E E
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 'A' + i;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    /*
              A
             A B A
            A B C B A
           A B C D C B A
          A B C D E D C B A

    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            char ch = 'A';
            if (k <= i)
            {
                ch = ch + k;
            }
            else
            {
                ch = ch + 2 * i - k;
            }
            cout << ch;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = 'E' - i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    /*
     **********
     ****  ****
     ***    ***
     **      **
     *        *
     *        *
     **      **
     ***    ***
     ****  ****
     **********
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= n - i - 1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < 2 * n - 2 * i - 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    /*
     *        *
     **      **
     ***    ***
     ****  ****
     **********
     ****  ****
     ***    ***
     **      **
     *        *
     */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < 2 * n - 2 * i - 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= n - i - 1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    /*
     *****
     *   *
     *   *
     *   *
     *****
     */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != 0 && i != 4)
            {
                if (j == 0 || j == 4)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void pattern16(int n)
{
   
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            if( i==0 || i==8 || j==0 || j==8)
            {
                cout<<" 5";
            }
            else if(i==1 || i==7 || j==1 || j==7)
            {
                cout<<" 4";
            }
            else if(i==2 || i==6 || j==2 || j==6)
            {
                cout<<" 3";
            }
            else if(i==3 || i==5 || j==3 || j==5)
            {
                cout<<" 2";
            }
            else
            {
                cout<<" 1";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern16(n);
    return 0;
}