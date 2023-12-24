#include "pch.h"
#include "ShapeLoader.h"

vector<string>ShapeLoader::loadShape(string fileName) {
	ifstream Fin;
	Fin.open(fileName);
	int count = 0;
	Fin >> count;
	Fin.ignore();
	vector<string>v;
	string tmp;
	for (int i = 0; i < count; i++) {
		getline(Fin, tmp);
		v.push_back(tmp);
	}
	Fin.close();
	return v;
}


shared_ptr<ShapeLoader> ShapeLoader::instance() {
	if (nullptr == _instance) {
		ShapeLoader* temp = new ShapeLoader();
		_instance = shared_ptr<ShapeLoader>(temp);
	}

	return _instance;
}
ShapeLoader::ShapeLoader() {

}
