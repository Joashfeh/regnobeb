#include <regnobeb.h>

class Sandbox : public Regnobeb::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

Regnobeb::Application* Regnobeb::CreateApplication()
{
	return new Sandbox();
}