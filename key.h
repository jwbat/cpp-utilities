/*
 *  generate unique key of size_t from two ints, e.g. for use in an
 *    unordered_map<size_t, T>
*/
inline size_t key(int i, int j)
{
    return (size_t) i << 32 | (unsigned int) j;
}
