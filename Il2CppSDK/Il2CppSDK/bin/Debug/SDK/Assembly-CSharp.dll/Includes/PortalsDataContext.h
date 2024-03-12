#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext" 

class PortalsDataContext: DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsDataContext"));
	}


	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(PortalsDataContext*))(Il2CppBase() + 0x10BAE44))(this);
	}

};

}
