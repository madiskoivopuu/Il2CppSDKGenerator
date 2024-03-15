#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInviteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInviteEntity"));
	}


	template <typename R = InviteComponent*> R get_invite() {
		return ((R (*)(IInviteEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInvite() {
		return ((R (*)(IInviteEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInvite(int64_t newId) {
		return ((R (*)(IInviteEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceInvite(int64_t newId) {
		return ((R (*)(IInviteEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveInvite() {
		return ((R (*)(IInviteEntity*))(Il2CppBase() + 0x0))(this);
	}

};

