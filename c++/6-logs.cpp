#include <iostream>

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo= 2;
private:
	int m_Log_Level = LogLevelInfo;
public:
	void SetLevel(int level)
	{
		m_Log_Level = level;
	}

	void Error(const char* message)
	{
		if(m_Log_Level >= LogLevelError)
			std::cout << "[Error]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_Log_Level >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	
	void Info(const char* message)
	{
		if (m_Log_Level >= LogLevelInfo)
			std::cout << "[Info]: " << message << std::endl;
	}
};

int main()
{

	Log log;


	// This level shows until which level it should be printed. If it sets to Warning Level, it will only print Error and Warning, and ignore the Info.
	// You can remove it, and in the above we specified the default value which is Log Level Info. and It will print everything.
	log.SetLevel(log.LogLevelWarning);

	log.Error("C++");
	log.Warn("Hello");
	log.Info("World!");
	
	//Note that it did not logged the Info message. 

	std::cin.get();

}


