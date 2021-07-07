#pragma once

#ifdef RB_PLATFORM_WINDOWS

extern Regnobeb::Application* Regnobeb::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Regnobeb::CreateApplication();
	app->Run();
	delete app;
}

#endif // RB_PLATFORM_WINDOWS
