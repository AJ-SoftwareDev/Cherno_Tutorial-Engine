#pragma once

#include "Core.h"

namespace Practice {

	class PRAC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}


