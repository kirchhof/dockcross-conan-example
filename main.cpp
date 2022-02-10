#include <iostream>
#include <mosquitto.h>

int main() {
    // Init Mosquitto
    mosquitto_lib_init ();

    // Log version number
    int major, minor, revision;
    mosquitto_lib_version (&major, &minor, &revision);
    std::cout << "Using libmosquitto " << major << "." << minor << "." << revision;

    return 0;
}
