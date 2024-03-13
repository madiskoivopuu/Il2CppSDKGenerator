#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext.h" 

class PortalsDataContext : public DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsDataContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(PortalsDataContext*))(Il2CppBase() + 0x10BAE44))(this);
	}

};

