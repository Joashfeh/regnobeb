#pragma once

#include "Core.h"

namespace Regnobeb {

	class REGNOBEB_API Application
	{

	public:
		Application();
		virtual ~Application();
	
		void Run();
	};

	// To be defined in the client
	Application* CreateApplication();


}

