// lagranges interpolation formula
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<float> X, fX;
    float nX, nfX;
    float x, fx;
    cout << "Enter no. of X ::";
    cin >> nX;
    cout << "Enter no. of fX ::";
    cin >> nfX;
    for (int i = 0; i < nX; i++)
    {
        cout << "Enter x" << i << " ::";
        cin >> x;
        X.push_back(x);
    }
    for (int i = 0; i < nfX; i++)
    {
        cout << "Enter f(x" << i << ") ::";
        cin >> fx;
        fX.push_back(fx);
    }
    vector<float> l_numerator, l_denometor;
    float X_val;
    cout << "Enter X value ::";
    cin >> X_val;
    float diff;
    float pro = 1;
    float temp_push;
    for (int i = 0; i < nX; i++)
    {
        /* code */
        diff = X_val - X[i];
        pro = pro * diff;
    }
    for (int i = 0; i < nX; i++)
    {
        /* code */
        temp_push = pro / (X_val - X[i]);
        cout << "l_numerator(" << i << ")=" << temp_push << endl;
        l_numerator.push_back(temp_push);
    }

    for (int j = 0; j < nX; j++)
    {
        pro = 1;
        for (int i = 0; i < nX; i++)
        {
            /* code */
            if (j != i)
            {
                diff = X[j] - X[i];
                pro = pro * diff;
            }
        }
        cout << "l_denometor(" << j << ")=" << pro << endl;
        l_denometor.push_back(pro);
    }
    vector<float> l;
    for (int i = 0; i < nX; i++)
    {
        /* code */
        cout << "l(" << i << ")=" << l_numerator[i] / l_denometor[i] << endl;
        l.push_back(l_numerator[i] / l_denometor[i]);
    }
    float ans = 0;
    for (int i = 0; i < nX; i++)
    {
        /* code */
        ans += l[i] * fX[i];
    }
    cout << "Value of f(x) at x=" << X_val << " is ::" << ans << endl;
    cout << "This solution is contributed by 20UEE098 Vipin Kumar Patel";

    return 0;
}