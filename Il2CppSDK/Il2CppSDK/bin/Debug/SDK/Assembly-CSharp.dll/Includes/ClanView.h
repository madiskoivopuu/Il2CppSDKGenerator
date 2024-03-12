#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanView"));
	}

	template <typename T = uintptr_t> T& CurrentRelationIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& MemberPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NoNeighbor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& _clanId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& members() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_Clan() {
		return ((T (*)(ClanView*))(Il2CppBase() + 0x1598D80))(this);
	}
	template <typename T = void> T set_Clan(uintptr_t value) {
		return ((T (*)(ClanView*, uintptr_t))(Il2CppBase() + 0x1598E84))(this, value);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ClanView*))(Il2CppBase() + 0x1598EC8))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t clan) {
		return ((T (*)(ClanView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1598FBC))(this, window, clan);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanView*, float))(Il2CppBase() + 0x15991C4))(this, deltaTime);
	}

};

}
