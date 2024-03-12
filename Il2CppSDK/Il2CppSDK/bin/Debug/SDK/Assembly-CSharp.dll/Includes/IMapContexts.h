#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapContexts"));
	}


	template <typename T = uintptr_t> T get_map() {
		return ((T (*)(IMapContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
