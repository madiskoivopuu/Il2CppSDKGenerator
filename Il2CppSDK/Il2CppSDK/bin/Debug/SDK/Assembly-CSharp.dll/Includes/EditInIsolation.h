#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EditInIsolation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EditInIsolation"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _wasEnabled() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
