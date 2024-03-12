#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext" 

class MapHUDDataContext: DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDDataContext"));
	}


	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(MapHUDDataContext*))(Il2CppBase() + 0x1166DB8))(this);
	}

};

}
