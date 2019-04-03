int accum = 1;

int sum(int x, int y)
{
    int t = x + y;
    accum += t;
    return t;
}
