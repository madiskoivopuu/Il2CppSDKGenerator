#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindUserForInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindUserForInviteData"));
	}

	template <typename R = Il2CppString*> R& UserName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = FindUserForInviteTarget*> R& Target() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FindUserForInviteData*, uintptr_t))(Il2CppBase() + 0x1698A2C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FindUserForInviteData*, uintptr_t))(Il2CppBase() + 0x1698A80))(this, reader);
	}

};

