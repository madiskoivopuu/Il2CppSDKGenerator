#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStore2DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStore2DataContexts"));
	}


	template <typename T = uintptr_t> T get_store2Data() {
		return ((T (*)(IStore2DataContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
