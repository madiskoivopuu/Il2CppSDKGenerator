#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Reward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Reward"));
	}

	template <typename R = int32_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& RandomGroupName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& ResourceName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& ResourceCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Reward*, uintptr_t))(Il2CppBase() + 0xEA32E0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Reward*, uintptr_t))(Il2CppBase() + 0xEA3344))(this, reader);
	}

};

