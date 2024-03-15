#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetTenacityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetTenacityData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& TenacityCoef() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetTenacityData*, uintptr_t))(Il2CppBase() + 0x1625CB0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetTenacityData*, uintptr_t))(Il2CppBase() + 0x1625D04))(this, reader);
	}

};

