//
// Created by diego on 25/09/19.
//

#ifndef PC2SIMULACRO_PROCESS_H
#define PC2SIMULACRO_PROCESS_H

#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <queue>
#include <vector>
using namespace std;


class Process {
protected:
    string name;
    int duration;

public:
    Process(const string &name) : name(name) {}

    virtual bool run() = 0;

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Process::name = name;
    }

    int getDuration() const {
        return duration;
    }

    void setDuration(int duration) {
        Process::duration = duration;
    }
};

class SyncProcess : public Process {
public:
    SyncProcess(const string &name) : Process(name) {}

    bool run() override {
        setDuration(10 + rand() % 80);
        cout << "Ejemplo 1" << endl;
        cout << "Sync Process " << getName() << endl;
        cout << "Duration: " << getDuration() << endl;
        cout << "Result: " << ((getDuration() < 80) ? "Success" : "Fail") << endl;
        return getDuration() < 80 ? true : false;
    }
};


class AsyncProcess : public Process {
private:
    string callbackClient;
public:
    AsyncProcess(const string &name, const string &callbackClient) : Process(name),
                                                                                   callbackClient(callbackClient) {}

    const string &getCallbackClient() const {
        return callbackClient;
    }

    void setCallbackClient(const string &callbackClient) {
        AsyncProcess::callbackClient = callbackClient;
    }

    bool run() override {
        int intentos = 0;
        cout << "Ejemplo 1" << endl;
        cout << "Async Process " << getName() << endl;
        do {
            setDuration(100 + rand() % 900);
            cout << "Attempt " << intentos << endl;
            cout << "Duration: " << getDuration() << endl;
            cout << "Result: " << (((getDuration() % 2) != 0) ? "Success" : "Fail") << endl;
            cout << "Client: " << getCallbackClient() << endl;
            intentos++;
        }while(intentos <= 10 && (getDuration() % 2 == 0));
    }
};
#endif //PC2SIMULACRO_PROCESS_H
