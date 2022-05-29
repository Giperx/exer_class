//
// Created by Giperx on 2022/5/25.
//

#include "list.h"
List::List() {
    cnt = 0;
}

void List::push() {
    if (cnt == LIMIT) {
        cout << "List is full. Cannot add new item." << endl;
        return;
    }

    cout << "Input a number to insert into the list: ";
    cin >> item[cnt];
    cnt++;
    cout << "No." << cnt << " inserted successful." << endl;
    return;
}

void List::getEmpty() const {
    if (!cnt) {
        cout << "List is empty." << endl;
        return;
    }
    else {
        cout << "List is not empty." << endl;
        return;
    }
}

void List::getFull() const {
    if (cnt == LIMIT) {
        cout << "List is full." << endl;
        return;
    }
    else {
        cout << "List is not full." << endl;
        return;
    }
}

void List::quit() const {
    cout << "Quit successful." << endl;
    return;
}

void List::run() {
    int op;
    bool flag = false;
    cout << "Input the options: " << endl;
    cout << "1. Insert items" << endl;
    cout << "2. Check empty" << endl;
    cout << "3. Check full" << endl;
    cout << "4. Visit items" << endl;
    cout << "5. Quit" << endl;
    while (true) {
        if(flag) break;
        cin >> op;
        switch(op) {
            case 1:
                push();
                break;

            case 2:
                getEmpty();
                break;

            case 3:
                getFull();
                break;

            case 4:
                if (!cnt) {
                    cout << "List is empty." << endl;
                    break;
                }
                for (int i = 0; i < cnt; i++) {
                    cout << i + 1 << ". " << item[i] << endl;
                }
                break;

            case 5:
                quit();
                flag = true;
                break;

            default:
                break;

        }
    }

    return;
}