#include <iostream>
#include <string>

class ILogger
{
public:
	virtual void Write(std::string& toLog)
	{}
};

class TxtLogger : public ILogger
{
public:
	void Write(std::string& toLog)
	{
		// weite to txt file
	}
};

class XmlLogger : public ILogger
{
public:
	void Write(std::string& toLog)
	{
		// weite to txt file
	}
};

class Server
{
	ILogger logger;
public:
	Server(const ILogger& logger)
	{
		this->logger = logger;
	}

	void setLogger(const ILogger& logger)
	{
		this->logger = logger;
	}

	void GetRequest()
	{
		logger.Write(std::string("Start Comunication\n"));
		// code of communication
	}
};

int main()
{
	TxtLogger logger;
	Server server(logger);
	XmlLogger loggerXml;
	server.setLogger(loggerXml);
	server.GetRequest();

	return 0;
}