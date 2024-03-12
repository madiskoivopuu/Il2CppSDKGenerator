#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectPetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectPetData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Fast() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SelectPetData*, uintptr_t))(Il2CppBase() + 0x136236C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SelectPetData*, uintptr_t))(Il2CppBase() + 0x13623C0))(this, reader);
	}

};

}
