#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Gender*> R& Gender() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GenderData*, uintptr_t))(Il2CppBase() + 0x176E3B0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GenderData*, uintptr_t))(Il2CppBase() + 0x176E404))(this, reader);
	}

};

