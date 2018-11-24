#include "robot.h"
#include <iostream>
#include <string>
#include <tuple>
#include <list>
#include <algorithm>
#include <map>
#include <vector>


using namespace std;

robot::robot(const string &n) {
	robotName = n;
	x = 0;
	y = 0;
	_travelled = 0;

}


	void robot::move_north() {
		y++;
		_travelled++;
	}

		void robot::move_east() {
			x++;
			_travelled++;
		}

		void robot::move_south() {
			y--;
			_travelled++;
		}

		void robot::move_west() {
			x--;
			_travelled++;
		}

		int robot::north() const {
			return y;
		}

		int robot::east() const {
			return x;
		}

		const std::string &robot::name() { return robotName; }

		int robot::travelled() const {
			return _travelled;
		}

	    int robot::distance(const robot& r) {
		
			return abs(r.x) + abs(r.y);
		}
		

