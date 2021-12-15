#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string _level[4];
	void (Karen::*_levelPtr[4])(void);
	//클래스에 멤버 함수를 참조할 함수포인터는 네임스페이스 명시해야함
public:
	Karen();
	void complain(std::string level);
};

#endif