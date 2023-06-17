#include <cstdlib>
#include <ncpp/NotCurses.hh>
#include <ncpp/Plane.hh>
#include <ncpp/NCLogLevel.hh>

int main() {

	notcurses_options my_options = {
		/* termtype */	nullptr,
		/* loglevel */	ncpp::NCLogLevel::Silent,
		/* margin_t */	0,
		/* margin_r */	0,
		/* margin_b */	0,
		/* margin_l */	0,
		/* flags */		0b100000,
	};

	ncpp::NotCurses notcurses(my_options,stdout);

	ncpp::Plane* plane = notcurses.get_stdplane();

	plane->printf("Hello World!");

	for(int i = 0; i < 1000; ++i) notcurses.render();

	return 0;

}
