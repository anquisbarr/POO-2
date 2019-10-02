#include <iostream>
#include "process.h"
#include "queue.h"

using namespace std;

int main() {
    srand(time(0));
    auto procesos = new Queue<Process*, 10>();
    Process* pr1 = new SyncProcess("Proceso 1");
    Process* pr2 = new SyncProcess("Proceso 2");
    Process* pr3 = new SyncProcess("Proceso 3");
    Process* pr4 = new SyncProcess("Proceso 4");
    Process* pr5 = new SyncProcess("Proceso 5");
    Process* pr6 = new AsyncProcess("Proceso 6", "Cliente 1");
    Process* pr7 = new AsyncProcess("Proceso 7", "Cliente 2");
    Process* pr8 = new AsyncProcess("Proceso 8", "Cliente 3");
    Process* pr9 = new AsyncProcess("Proceso 9", "Cliente 4");
    Process* pr10 = new AsyncProcess("Proceso 10", "Cliente 5");

    procesos->enQueue(pr1);
    procesos->enQueue(pr2);
    procesos->enQueue(pr3);
    procesos->enQueue(pr4);
    procesos->enQueue(pr5);
    procesos->enQueue(pr6);
    procesos->enQueue(pr7);
    procesos->enQueue(pr8);
    procesos->enQueue(pr9);
    procesos->enQueue(pr10);

    while (!procesos->isEmpty()) {
        procesos->deQueue()->run();
    }

    delete procesos;

    return 0;
}