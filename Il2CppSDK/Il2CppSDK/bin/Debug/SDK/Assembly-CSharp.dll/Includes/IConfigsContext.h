#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IConfigsContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IConfigsContext"));
	}


	template <typename T = uintptr_t> T get_configs() {
		return ((T (*)(IConfigsContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
