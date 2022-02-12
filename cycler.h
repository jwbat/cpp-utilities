#pragma once


auto cycler(int a, int b)
{
    const int lo = a < b ? a : b;
    const int hi = b > a ? b : a;
    static int n = a;
    static bool asc = (a < b);

    return [=] () {
        while (asc)
        {
            if (n == (hi - 1))
                asc = false;
            return n++;
        }
        if (n == (lo + 1))
            asc = true;
        return n--;
    };
}

/*
 * auto cycle = cycler(7, 4);
 * for (int i{ 0 }; i < 9; ++i)
 *     cout << ' ' << cycle();
 *
 *     7 6 5 4 5 6 7 6 5 4
*/
