#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkAccountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkAccountData"));
	}

	template <typename R = LinkType> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Id() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& IsForce() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& TargetUserId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LinkAccountData*, uintptr_t))(Il2CppBase() + 0x142CB20))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LinkAccountData*, uintptr_t))(Il2CppBase() + 0x142CB94))(this, reader);
	}

};

