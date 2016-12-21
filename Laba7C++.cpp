#include "stdafx.h" 
#include <string> 
#include <iostream> 

using namespace std;

class home_appliance {

public:
	string type;
	string model;
	string power;
	void turnOn() {
		cout << "Something has turned on" << endl;
	}
	void print_options()
	{
		cout << "Type  : " << type << endl;
		cout << "Model : " << model << endl;
		cout << "Power : " << power << endl;
	}
	home_appliance() {}

	home_appliance(string _type, string _model, string _power)
	{
		type = _type;
		model = _model;
		power = _power;
		print_options();
	}

};
class cleaning : public home_appliance
{
public:
	void main_funct()
	{
		cout << "It can help you to clean your home!" << endl;
	}
};
class media : public home_appliance{
public:
	void main_funct()
	{
		cout << "It can help you to procrastinate more!" << endl;
	}
};

class washing_machine : public cleaning
{
private:

	void turnOn()
	{
		cout << "Washing machine has turned on" << endl;
	}
	void wash_clothes()
	{
		cout << "Washing clothes" << endl;
	}
public:
	washing_machine(string _type, string _model, string _power)
	{
		cout << "Options of the washing machine: " << endl;
		main_funct();
		home_appliance(_type, _model, _power);
		turnOn();
		wash_clothes();
	}

};

class vacuum_cleaner : public cleaning
{
private:
	string lenght = "6m";
	string capacity = "3L";
	void turnOn()
	{
		cout << "Vacuum cleaner has turned on" << endl;
	}
	void additionalOpt()
	{
		cout << "Lenght of the cable : " << lenght << endl;
		cout << "Capacity of the cleaner: " << capacity << endl;
	}
public:

	vacuum_cleaner(string _type, string _model, string _power)
	{
		cout << endl << "Options of the vacuum cleaner: " << endl;
		main_funct();
		home_appliance(_type, _model, _power);
		turnOn();
		additionalOpt();
	}
};

class TV : public media
{
private:
	string resolution = "1920x1560px";
	void additionalOpt()
	{
		cout << "Screen resolution : " << resolution << endl;
	}
public:

	TV(string _type, string _model, string _power)
	{
		cout << endl << "Options of the TV-set:" << endl;
		main_funct();
		home_appliance(_type, _model, _power);
		additionalOpt();
	}
};

class tape_recorder : public media
{
private:
	string frequency = "63...12500 Hz";
	void addtionalOpt()
	{
		cout << "Frequency range : " << frequency <<  endl;
	}
public:
	tape_recorder(string _type, string _model, string _power)
	{
		cout << endl << "Options of the Tape recorder: " << endl;
		main_funct();
		home_appliance(_type, _model, _power);
		addtionalOpt();
	}

};

class radio : public media
{
private:
	string frequency = "3..30 GHz";
	int release_date = 1989;

	void additionalOpt()
	{
		cout << "Frequency range : " << frequency << endl;
		cout << "Date of release : " << release_date << endl;
	}
public:
	radio(string _type, string _model, string _power)
	{
		cout << endl <<  "Options of the radio :" << endl;
		main_funct();
		home_appliance(_type, _model, _power);
		additionalOpt();
	}
};

class stereo_system : public media
{
private: 
	int sound_power = 700;
	string disk_numbers = "1...5 Disks";

	void additionalOpt()
	{
		cout << "Power of sound : " << sound_power << "watt" << endl;
		cout << "Numbers of disks : " << disk_numbers << endl;
	}
public:
	stereo_system(string _type, string _model, string _power)
	{
		cout << endl << "Options of the Stereo system :" << endl;
		main_funct();
		home_appliance(_type, _model, _power);
		additionalOpt();
	}

};

int main()
{
	washing_machine A = washing_machine("LG", "Whatever", "220V");
	vacuum_cleaner B = vacuum_cleaner("Panasonic", "vjuh", "160V");
	TV C = TV("Samsung", "ExtraHD", "220V");
	tape_recorder D = tape_recorder("Sanda", "MK-201", "140V");
	radio M = radio("Soviet", "Bear 27-D", "60V");
	stereo_system K = stereo_system("LG", "M202", "220V");

	system("pause");

}
