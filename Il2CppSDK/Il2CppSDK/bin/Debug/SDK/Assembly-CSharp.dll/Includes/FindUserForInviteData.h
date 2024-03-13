#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindUserForInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindUserForInviteData"));
	}

	template <typename T = Il2CppString*> T& UserName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = FindUserForInviteTarget*> T& Target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FindUserForInviteData*, uintptr_t))(Il2CppBase() + 0x1698A2C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FindUserForInviteData*, uintptr_t))(Il2CppBase() + 0x1698A80))(this, reader);
	}

};

