#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanView"));
	}

	template <typename R = uintptr_t> R& CurrentRelationIcon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ClanMember*> R& MemberPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& NoNeighbor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = DiplomacyWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& _clanId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Il2CppList<ClanMember*>*& members() {
		return *(Il2CppList<ClanMember*>**)((uintptr_t)this + 0x50);
	}

	template <typename R = ClanEntity*> R get_Clan() {
		return ((R (*)(ClanView*))(Il2CppBase() + 0x1598D80))(this);
	}
	template <typename R = void> R set_Clan(ClanEntity* value) {
		return ((R (*)(ClanView*, ClanEntity*))(Il2CppBase() + 0x1598E84))(this, value);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ClanView*))(Il2CppBase() + 0x1598EC8))(this);
	}
	template <typename R = void> R Bind(DiplomacyWindow* window, ClanEntity* clan) {
		return ((R (*)(ClanView*, DiplomacyWindow*, ClanEntity*))(Il2CppBase() + 0x1598FBC))(this, window, clan);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanView*, float))(Il2CppBase() + 0x15991C4))(this, deltaTime);
	}

};

