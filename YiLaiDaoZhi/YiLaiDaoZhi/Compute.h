#pragma once
#include <iostream>

/*ÒÀÀµµ¹ÖÃÔ­Ôò*/
class CPU {
public:
	virtual void work() = 0;
	virtual ~CPU() {}
};

class HardDisk {
public:
	virtual void work() = 0;
	virtual ~HardDisk() {}
};

class Memory {
public:
	virtual void work() = 0;
	virtual ~Memory() {};
};


class Computer
{
public:
	Computer(HardDisk * harddisk, Memory * memory, CPU * cpu)
	{
		m_harddisk = harddisk;
		m_memory = memory;
		m_cpu = cpu;
	}

	void work()
	{
		m_harddisk->work();
		m_memory->work();
		m_cpu->work();
	}

private:
	HardDisk *m_harddisk;
	Memory *m_memory;
	CPU *m_cpu;
};

class IntelCpu : public CPU {
public:
	void work() {
		std::cout << "IntelCpu" << std::endl;
	}
};

class AMDCpu : public CPU {
public:
	void work() {
		std::cout << "AMDCpu" << std::endl;
	}
};

class WestDisk : public HardDisk
{
public:
	void work() {
		std::cout << "WestDisk" << std::endl;
	}
};

class XiJieDisk : public HardDisk
{
public:
	void work() {
		std::cout << "XiJieDisk" << std::endl;
	}
};

class HWMemory : public Memory
{
public:
	void work() {
		std::cout << "HWMemory" << std::endl;
	}
};

class GTMemory : public Memory
{
public:
	void work() {
		std::cout << "GTMemory" << std::endl;
	}
};