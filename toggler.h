auto toggler(int a, int b) 
{
    const int t = a ^ b;
    int x = b; 
    return [x, t] () mutable { x ^= t; return x; };
}


bool toggle()
{
    static bool b = false;
    return b = !b;
}
