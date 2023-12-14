#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         if (i == 1 || i == 5 || j == 1 || j == 4)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << "\n";
    // }

    // int m = 1;
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //         cout << "  ";
    //     for (int k = 1; k <= m; k++)
    //         cout << "* ";
    //     cout << "\n";
    //     m++;
    // }
    // cout << "\n";

    // int m1 = 6;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //         cout << "* ";
    //     for (int k = m1; k >= 1; k--)
    //         cout << "  ";
    //     for (int p = 1; p <= i; p++)
    //         cout << "* ";
    //     cout << "\n";
    //     m1 -= 2;
    // }
    // int m2 = 2;
    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //         cout << "* ";
    //     for (int k = 2; k < m2; k++)
    //         cout << "  ";
    //     for (int p = 1; p <= i; p++)
    //         cout << "* ";
    //     cout << "\n";
    //     m2 += 2;
    // }

    // cout << endl;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         // if(i%2==0 && j%2!=0 || j%2==0 && i%2!=0)
    //         if ((i + j) % 2 != 0)
    //             cout << 0 << " ";
    //         else
    //             cout << 1 << " ";
    //     }
    //     cout << "\n";
    // }

    // cout << endl;
    // int n = 4;
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //         cout << " ";
    //     for (int k = 5; k >= i; k--)
    //         cout << "* ";
    //     for (int p = 1; p <= n; p++)
    //         cout << "* ";
    //     cout << endl;
    //     n--;
    // }
    // cout << endl;

    // int n1 = 1;
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //         cout << " ";
    //     for (int k = 1; k <= n1; k++)
    //         cout << k << " ";
    //     cout << endl;
    //     n1++;
    // }
    // cout << endl;

    // int u = 1, l = 1;
    // for (int i = 6; i >= 1; i--)
    // {
    //     for (int j = 2; j <= i; j++)
    //         cout << "  ";
    //     for (int k = 1; k <= l; k++)
    //     {
    //         cout << u << " ";
    //         u--;
    //     }
    //     l++;
    //     u = l;
    //     for (int p = 2; p < l; p++)
    //         cout << p << " ";
    //     cout << endl;
    // }

    // cout << endl;
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if ((i + j) % 4 == 0 || (i % 2 == 0 && j % 4 == 0))
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    // cout<<endl;
    // int u=8;
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i; j++)
    //         cout<<"*";
    //     if(i!=5){
    //         for(int k=u; k>=1; k--)
    //             cout<<" ";
    //         u -= 2;
    //     }
    //     for(int j=1; j<=i; j++)
    //         cout<<"*";
    //     cout<<endl;
    // }
    // int u1 = 2;
    // for(int i=1; i<=5; i++){
    //     for(int j=5; j>=i; j--)
    //         cout<<"*";
    //     if(i!=1){
    //         for(int k=1; k<=u1; k++)
    //             cout<<" ";
    //         u1 += 2;
    //     }
    //     for(int j=5; j>=i; j--)
    //         cout<<"*";
    //     cout<<endl;
    // }

    // cout<<endl;
    // int u=8;
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i; j++)
    //         cout<<"*";
    //     if(i!=5){
    //         for(int k=u; k>=1; k--)
    //             cout<<" ";
    //         u -= 2;
    //     }
    //     for(int j=1; j<=i; j++)
    //         cout<<"*";
    //     cout<<endl;
    // }
    // int u1 = 2;
    // for(int i=1; i<=5; i++){
    //     for(int j=5; j>=i; j--)
    //         cout<<"*";
    //     if(i!=1){
    //         for(int k=1; k<=u1; k++)
    //             cout<<" ";
    //         u1 += 2;
    //     }
    //     for(int j=5; j>=i; j--)
    //         cout<<"*";
    //     cout<<endl;
    // }

    int u=8;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        if(i!=5){
            for(int k=u; k>=1; k--)
                cout<<" ";
            u -= 2;
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    int u1 = 2;
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            if(j==5 || j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        if(i!=1){
            for(int k=1; k<=u1; k++)
                cout<<" ";
            u1 += 2;
        }
        for(int j=5; j>=i; j--){
            if(j==5 || j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
