#pragma once

#ifdef PRAC_PLATFORM_WINDOWS

extern Practice::Application* Practice::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Practice::CreateApplication();
	app->Run();
	delete app;
}

#endif //  PRAC_PLATFORM_WINDOWS