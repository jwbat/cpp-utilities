template <typename T>
struct is_pointer { static const bool value = false; };

template <typename T>
struct is_pointer<T*> { static const bool value = true; };

//=============================================================


template <typename T>
bool is_pointer(T) { return false; }

template <typename T>
bool is_pointer(T*) { return true; }
