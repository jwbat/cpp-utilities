#pragma once
using std::cout; using std::setw

template <typename T>
void print_collection(const T& coll) {
    size_t count{ 0 };
    cout << "\n"; 
    for (auto it = begin(coll); it != end(coll); ++it) {
        if (count % 10 == 0) cout << "\n";
        cout << setw(5) << *it; ++count;
    }
    cout << "\n";
}

/*
template <typename T>
void print_collection(const T& coll) {
    cout << "\n";
    auto it = coll.begin();
    while (it != coll.end()) {
        cout << setw(8) << *it;
        ++it;
    }
    cout << "\n";
}
*/

template <typename T>
void print_reverse(const T& coll) {
    cout << "\n";
    auto rit = coll.rbegin();
    size_t ct{};
    while (rit != coll.rend()) {
        if (ct % 10 == 0) cout << "\n";
        cout << setw(8) << *rit;
        ++rit; 
        ++ct;
    }
    cout << "\n";
}

/*
 *  print subsets of collection
*/
template <typename T>
void print_collection(const T& coll, size_t begin_offset = 0, size_t end_offset = 0) {
    cout << "\n";
    auto it = coll.begin() + begin_offset;
    auto end_it = coll.end() - end_offset;
    size_t count{};
    while (it != end_it) {
        if (count % 10 == 0) cout << "\n";
        cout << setw(8) << *it;
        ++it; ++count;
    }
    cout << "\n";
