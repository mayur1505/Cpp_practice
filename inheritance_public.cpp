#include <iostream>

class BasePublic {
public:
    int publicMemberBasePublic;
protected:
    int protectedMemberBasePublic;
private:
    int privateMemberBasePublic;
};

class DerivedPublic : public BasePublic {
public:
    void accessMembers() {
        publicMemberBasePublic = 10;        // Accessing public member is allowed
        protectedMemberBasePublic = 20;    // Accessing protected member is allowed
        // privateMemberBasePublic = 30;   // Accessing private member is NOT allowed (remains private in Base)
    }
};

int main() {
    DerivedPublic derivedObj;
    derivedObj.accessMembers();
    derivedObj.publicMemberBasePublic = 40;         // Accessing public member is allowed
    // derivedObj.protectedMemberBasePublic = 50;  // Accessing protected member is NOT allowed (remains protected in Base)
    // derivedObj.privateMemberBasePublic = 60;    // Accessing private member is NOT allowed (remains private in Base)

    return 0;
}
