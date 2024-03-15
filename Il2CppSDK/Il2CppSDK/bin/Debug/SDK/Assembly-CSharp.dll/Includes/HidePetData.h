#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HidePetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HidePetData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Hide() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HidePetData*, uintptr_t))(Il2CppBase() + 0x1C43B50))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HidePetData*, uintptr_t))(Il2CppBase() + 0x1C43BA4))(this, reader);
	}

};

