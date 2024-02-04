//private vs protected vs public inheritance

#include <iostream>

class Base {
public:
    int publicMemberBase;
protected:
    int protectedMemberBase;
private:
    int privateMemberBase;
};

class DerivedPrivate : private Base {
public:
    void accessMembers() {
        publicMemberBase = 10;       // Accessing public member is allowed (converted to private)
        protectedMemberBase = 20;   // Accessing protected member is allowed (converted to private)
        // privateMemberBase = 30;   // Accessing private member is NOT allowed (remains private)
    }
};

int main() {
    DerivedPrivate derivedObj;
    derivedObj.accessMembers();
    // derivedObj.publicMemberBase = 40;     // Accessing public member is NOT allowed (converted to private)
    // derivedObj.protectedMemberBase = 50;  // Accessing protected member is NOT allowed (converted to private)
    // derivedObj.privateMemberBase = 60;    // Accessing private member is NOT allowed (remains private)

    return 0;
}
