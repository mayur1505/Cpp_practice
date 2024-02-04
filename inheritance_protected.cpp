#include <iostream>

class BaseProtected {
public:
    int publicMemberBaseProtected;
protected:
    int protectedMemberBaseProtected;
private:
    int privateMemberBaseProtected;
};

class DerivedProtected : protected BaseProtected {
public:
    void accessMembers() {
        publicMemberBaseProtected = 10;        // Accessing public member is allowed (converted to protected in Derived)
        protectedMemberBaseProtected = 20;    // Accessing protected member is allowed
        // privateMemberBaseProtected = 30;   // Accessing private member is NOT allowed (remains private in Base)
    }
};

int main() {
    DerivedProtected derivedObj;
    derivedObj.accessMembers();
    // derivedObj.publicMemberBaseProtected = 40;     // Accessing public member is NOT allowed (converted to protected in Derived)
    // derivedObj.protectedMemberBaseProtected = 50;  // Accessing protected member is NOT allowed (remains protected in Derived)
    // derivedObj.privateMemberBaseProtected = 60;    // Accessing private member is NOT allowed (remains private in Base)

    return 0;
}
