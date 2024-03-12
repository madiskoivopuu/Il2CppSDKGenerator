#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatsData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Param() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsActive() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CheatsData*, uintptr_t))(Il2CppBase() + 0x173D1B4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CheatsData*, uintptr_t))(Il2CppBase() + 0x173D228))(this, reader);
	}

};

}
