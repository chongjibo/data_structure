#include "Singleton.h"

#include <mutex>
std::mutex mu;
Singleton *Singleton::instance = nullptr;

Singleton * Singleton::getInstance()
{
	if (instance == nullptr) {

		mu.lock();
		if (instance == nullptr) {
			instance = new Singleton();
		}
		mu.unlock();
	}
	return instance;
}

Singleton::Singleton()
{

}

