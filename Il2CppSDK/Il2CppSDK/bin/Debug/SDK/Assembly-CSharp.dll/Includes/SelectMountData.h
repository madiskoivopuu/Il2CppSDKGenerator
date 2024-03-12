#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectMountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectMountData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Fast() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SelectMountData*, uintptr_t))(Il2CppBase() + 0x136220C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SelectMountData*, uintptr_t))(Il2CppBase() + 0x1362260))(this, reader);
	}

};

}
