#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemContexts"));
	}


	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(IItemContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
