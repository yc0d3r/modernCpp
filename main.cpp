#include <iostream>

template <typename T>
class uniquePtr {

    T* mPtr;

    T& operator*()
    {
        return *mPtr;
    }

    T* operator-> ()
    {
        return mPtr;
    }

    explicit uniquePtr(T* ptr = nullptr) : mPtr(ptr) {}

    ~uniquePtr() {
        delete mPtr;
    }

    uniquePtr(uniquePtr&& other) {
        mPtr = other.mPtr;
        other.mPtr = nullptr;
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}