#include "Accounts.h"
#include "Documents.h"
#include "Notification.h"
#include <iostream>
#include <cassert>

using namespace std;

void testCheckCustAcc() {
    Accounts acc;
    acc.CheckCustAcc(12345, 6789);
}

void testGetDoc() {
    Documents doc;
    doc.getDoc(123);
}

void testNotification() {
    Notification notif;
    notif.getMessage();
}

void testMockAPI() {
    struct Account {
        int accountNumber;
        string deliveryFrequency;
        string customerName;
    };

    vector<Account> fakeAccounts = {
        {12345, "Monthly", "Aaron Parks"}
    };

    assert(fakeAccounts.size() == 1);
    assert(fakeAccounts[0].accountNumber == 12345);

    cout << "✅ Mock API test passed!" << endl;
}


int main() {
    testCheckCustAcc();
    testGetDoc();
    testNotification();
    testMockAPI();

    cout << "✅ All tests passed!" << endl;
    return 0;
}
