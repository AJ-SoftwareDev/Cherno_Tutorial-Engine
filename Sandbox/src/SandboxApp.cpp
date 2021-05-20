#include <Practice.h>

class Sandbox : public Practice::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Practice::Application* Practice::CreateApplication()
{
	return new Sandbox();
}