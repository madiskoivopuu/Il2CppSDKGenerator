#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeRandomGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeRandomGroup"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
