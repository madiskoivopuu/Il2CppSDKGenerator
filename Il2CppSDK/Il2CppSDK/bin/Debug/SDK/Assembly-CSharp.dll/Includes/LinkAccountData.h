#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkAccountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkAccountData"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsForce() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& TargetUserId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LinkAccountData*, uintptr_t))(Il2CppBase() + 0x142CB20))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LinkAccountData*, uintptr_t))(Il2CppBase() + 0x142CB94))(this, reader);
	}

};

}
