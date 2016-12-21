#include "stdafx.h" 
#include <string> 
#include <iostream> 

using namespace std;

class HomeAppliance {

public:
	string type;
	string model;
	string power;
	
	void print_options()
	{
		cout << "Type  : " << type << endl;
		cout << "Model : " << model << endl;
		cout << "Power : " << power << endl;
	}
	HomeAppliance() {}
	HomeAppliance(string _type, string _model, string _power)
	{
		type = _type;
		model = _model;
		power = _power;
		print_options();
	}
};

class Cleaning : public HomeAppliance
{
public:
	void main_funct()
	{
		cout << "It can help you to clean your home!" << endl;
	}
};

class Media : public HomeAppliance{
public:
	void main_funct()
	{
		cout << "It can help you to procrastinate more!" << endl;
	}
};

class WashingMachine : public Cleaning
{
private:
	void wash_clothes()
	{
		cout << "Washing clothes" << endl;
	}
public:
	WashingMachine(string _type, string _model, string _power)
	{
		cout << "Options of the washing machine: " << endl;
		main_funct();
		HomeAppliance(_type, _model, _power);
		wash_clothes();
	}
};

class VacuumCleaner : public Cleaning
{
private:
	string lenght , capacity;
	void turnOn()
	{
		cout << "Vacuum cleaner has turned on" << endl;
	}
	void additionalOption()
	{
		cout << "Lenght of the cable : " << lenght << endl;
		cout << "Capacity of the cleaner: " << capacity << endl;
	}
public:
	VacuumCleaner(string _type, string _model, string _power, string _lenght, string _capacity)
	{
		cout << endl << "Options of the vacuum cleaner: " << endl;
		lenght = _lenght;
		capacity = _capacity;
		main_funct();
		HomeAppliance(_type, _model, _power);
		turnOn();
		additionalOption();
	}
};

class TV : public Media
{
private:
	string resolution;
	void additionalOption()
	{
		cout << "Screen resolution : " << resolution << endl;
	}
public:
	TV(string _type, string _model, string _power, string _resolution)
	{
		cout << endl << "Options of the TV-set:" << endl;
		resolution = _resolution;
		main_funct();
		HomeAppliance(_type, _model, _power);
		additionalOption();
	}
};

class TapeRecorder : public Media
{
private:
	string frequency;
	void addtionalOpt()
	{
		cout << "Frequency range : " << frequency <<  endl;
	}
public:
	TapeRecorder(string _type, string _model, string _power, string _frequency)
	{
		cout << endl << "Options of the Tape recorder: " << endl;
		frequency = _frequency;
		main_funct();
		HomeAppliance(_type, _model, _power);
		addtionalOpt();
	}
};

class Radio : public Media
{
private:
	string frequency;

	void additionalOption()
	{
		cout << "Frequency range : " << frequency << endl;
	}
public:
	Radio(string _type, string _model, string _power, string _frequency)
	{
		frequency = _frequency;
		cout << endl <<  "Options of the Radio :" << endl;
		main_funct();
		HomeAppliance(_type, _model, _power);
		additionalOption();
	}
};

class StereoSystem : public Media
{
private: 
	int sound_power;
	string disk_numbers;
	void additionalOption()
	{
		cout << "Power of sound : " << sound_power << "watt" << endl;
		cout << "Numbers of disks : " << disk_numbers << endl;
	}
public:
	StereoSystem(string _type, string _model, string _power, int _sound_power, string _disk_numbers)
	{
		sound_power = _sound_power;
		disk_numbers = _disk_numbers;
		cout << endl << "Options of the Stereo system :" << endl;
		main_funct();
		HomeAppliance(_type, _model, _power);
		additionalOption();
	}
};

int main()
{
	WashingMachine A = WashingMachine("LG", "Whatever", "220V");
	VacuumCleaner B = VacuumCleaner("Panasonic", "vjuh", "160V", "6m" , "3L");
	TV C = TV("Samsung", "ExtraHD", "220V", "1920x1080px");
	TapeRecorder D = TapeRecorder("Sanda", "MK-201", "140V", "63...12500 Hz");
	Radio M = Radio("Soviet", "Bear 27-D", "60V", "3..30 GHz");
	StereoSystem K = StereoSystem("LG", "M202", "220V", 700 , "From 1 to 5 disks");
	system("pause");
}
