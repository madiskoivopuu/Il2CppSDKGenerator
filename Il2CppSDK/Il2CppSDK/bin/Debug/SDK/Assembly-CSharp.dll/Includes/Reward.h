#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Reward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Reward"));
	}

	template <typename T = int32_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& RandomGroupName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ResourceName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ResourceCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Reward*, uintptr_t))(Il2CppBase() + 0xEA32E0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Reward*, uintptr_t))(Il2CppBase() + 0xEA3344))(this, reader);
	}

};

