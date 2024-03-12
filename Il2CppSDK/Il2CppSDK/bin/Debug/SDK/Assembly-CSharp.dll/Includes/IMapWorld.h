#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapWorld"));
	}


	template <typename T = uintptr_t> T get_TimeManager() {
		return ((T (*)(IMapWorld*))(Il2CppBase() + 0x0))(this);
	}

};

}
