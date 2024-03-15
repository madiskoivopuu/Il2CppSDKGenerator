#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectMountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectMountData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Fast() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SelectMountData*, uintptr_t))(Il2CppBase() + 0x136220C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SelectMountData*, uintptr_t))(Il2CppBase() + 0x1362260))(this, reader);
	}

};

