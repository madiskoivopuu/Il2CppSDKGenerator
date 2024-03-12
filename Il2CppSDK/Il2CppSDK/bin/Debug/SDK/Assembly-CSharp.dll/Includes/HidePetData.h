#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HidePetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HidePetData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Hide() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(HidePetData*, uintptr_t))(Il2CppBase() + 0x1C43B50))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(HidePetData*, uintptr_t))(Il2CppBase() + 0x1C43BA4))(this, reader);
	}

};

}
