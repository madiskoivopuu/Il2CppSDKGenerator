#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInviteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInviteEntity"));
	}


	template <typename T = InviteComponent*> T get_invite() {
		return ((T (*)(IInviteEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInvite() {
		return ((T (*)(IInviteEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInvite(int64_t newId) {
		return ((T (*)(IInviteEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceInvite(int64_t newId) {
		return ((T (*)(IInviteEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveInvite() {
		return ((T (*)(IInviteEntity*))(Il2CppBase() + 0x0))(this);
	}

};

