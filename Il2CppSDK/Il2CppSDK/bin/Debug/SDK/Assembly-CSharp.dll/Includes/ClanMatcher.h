#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanMatcher"));
	}

	template <typename T = void*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherCell0LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherCell1LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherCell2LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherCell3LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherClanPersonalEntities() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherLeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherLocationGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherLockTimeBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherLockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherLockTimeDiplomacy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherMembersStartRaid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherPvpGroupClans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherScoutState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherStatueState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1594988))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1594A00))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1594A78))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1594AF0))(0, matchers);
	}
	template <typename T = void*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x157FEA0))(0);
	}
	template <typename T = void*> static T get_Cell0LockTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1594B68))(0);
	}
	template <typename T = void*> static T get_Cell1LockTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1594D04))(0);
	}
	template <typename T = void*> static T get_Cell2LockTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1594EA0))(0);
	}
	template <typename T = void*> static T get_Cell3LockTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x159503C))(0);
	}
	template <typename T = void*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x157F420))(0);
	}
	template <typename T = void*> static T get_ClanPersonalEntities() {
		return ((T (*)(void *))(Il2CppBase() + 0x15951D8))(0);
	}
	template <typename T = void*> static T get_Leader() {
		return ((T (*)(void *))(Il2CppBase() + 0x157F5BC))(0);
	}
	template <typename T = void*> static T get_LocationGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x1595374))(0);
	}
	template <typename T = void*> static T get_LockTimeBuilder() {
		return ((T (*)(void *))(Il2CppBase() + 0x1595510))(0);
	}
	template <typename T = void*> static T get_LockTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x15956AC))(0);
	}
	template <typename T = void*> static T get_LockTimeDiplomacy() {
		return ((T (*)(void *))(Il2CppBase() + 0x1595848))(0);
	}
	template <typename T = void*> static T get_MembersStartRaid() {
		return ((T (*)(void *))(Il2CppBase() + 0x15959E4))(0);
	}
	template <typename T = void*> static T get_Name() {
		return ((T (*)(void *))(Il2CppBase() + 0x1595B80))(0);
	}
	template <typename T = void*> static T get_PvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x157F758))(0);
	}
	template <typename T = void*> static T get_PvpGroupClans() {
		return ((T (*)(void *))(Il2CppBase() + 0x1595D1C))(0);
	}
	template <typename T = void*> static T get_ScoutState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1595EB8))(0);
	}
	template <typename T = void*> static T get_Shield() {
		return ((T (*)(void *))(Il2CppBase() + 0x1596054))(0);
	}
	template <typename T = void*> static T get_StatueState() {
		return ((T (*)(void *))(Il2CppBase() + 0x15961F0))(0);
	}

};

}
