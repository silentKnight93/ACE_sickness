class sickness {
	class mosquito {
		class level_1 {
			duration = 300;
			symptoms[] = {"bite"};
			curelevel = 0;
		};
		class level_2 : level_1 {
			symptoms[] = {"pain","temperature_medium"};
			curelevel = 0;
		};
		class level_3 : level_2 {
			symptoms[] = {"pain","temperature_medium","ppEffect"};
			curelevel = 2;
		};
		class level_4 : level_3 {
			symptoms[] = {"pain","temperature_medium","ppEffect","vomit"};
			curelevel = 3;
		};
		class level_5 : level_4 {
			duration = -1;
			symptoms[] = {"pain","temperature_medium","ppEffect","vomit","faint"};
		};
	};
};