#pragma once
#include <string>
using std::string;

class character {
private:
	string name;

	class species {
	private:
		string type;
	public:
		species() {
			this->type = "Human";
		}
		string getType() {
			return this->type;
		}
	};

	species* race;

public:
	character(string name) : name(name) {
		this->race = new species();		//must instantiate 
	}
	string getType() {
		return race->getType();
	}
	string getName() {
		return this->name;
	}
};