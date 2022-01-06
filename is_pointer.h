template <typename T>
bool is_pointer(T t) { return false; }

template <typename T>
bool is_pointer(T* t) { return true; }
