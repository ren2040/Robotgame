#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>


class robot {

	std::string robotName;
	int x;
	int y;
	int _travelled;

public:

	explicit robot(const std::string &n);

	void move_north();

	void move_east();

	void move_south();

	void move_west();

	const std::string & name();

	int north() const;

	int east() const;

	int travelled() const;
	
	int distance(const robot& r);



};

#endif