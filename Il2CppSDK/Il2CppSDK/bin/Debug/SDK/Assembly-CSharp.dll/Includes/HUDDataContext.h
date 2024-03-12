#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext" 

class HUDDataContext: DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDataContext"));
	}


	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(HUDDataContext*))(Il2CppBase() + 0xEA8840))(this);
	}

};

}
