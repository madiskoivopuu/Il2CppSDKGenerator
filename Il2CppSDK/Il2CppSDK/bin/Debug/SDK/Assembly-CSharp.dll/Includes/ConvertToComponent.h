#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConvertToComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConvertToComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ConvertToComponent*, uintptr_t))(Il2CppBase() + 0x15F3914))(this, target);
	}
	template <typename T = Il2CppString*> T GetName(uintptr_t world, Il2CppString* currentName, uintptr_t target, uintptr_t source) {
		return ((T (*)(ConvertToComponent*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x15F39BC))(this, world, currentName, target, source);
	}

};

}
