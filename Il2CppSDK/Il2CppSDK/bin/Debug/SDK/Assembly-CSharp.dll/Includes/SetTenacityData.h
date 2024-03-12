#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetTenacityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetTenacityData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& TenacityCoef() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetTenacityData*, uintptr_t))(Il2CppBase() + 0x1625CB0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetTenacityData*, uintptr_t))(Il2CppBase() + 0x1625D04))(this, reader);
	}

};

}
