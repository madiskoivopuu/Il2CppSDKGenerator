#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatsData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Param() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IsActive() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CheatsData*, uintptr_t))(Il2CppBase() + 0x173D1B4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CheatsData*, uintptr_t))(Il2CppBase() + 0x173D228))(this, reader);
	}

};

