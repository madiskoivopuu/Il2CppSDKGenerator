#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideBagData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideBagData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Hide() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HideBagData*, uintptr_t))(Il2CppBase() + 0x1C3BF4C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HideBagData*, uintptr_t))(Il2CppBase() + 0x1C3BFA0))(this, reader);
	}

};

