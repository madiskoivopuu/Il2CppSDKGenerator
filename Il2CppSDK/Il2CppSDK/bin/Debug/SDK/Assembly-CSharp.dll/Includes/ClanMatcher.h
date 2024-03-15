#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanMatcher"));
	}

	 static IMatcher1ClanEntity*>*& _matcherAvatar() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1ClanEntity*>*& _matcherCell0LockTime() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1ClanEntity*>*& _matcherCell1LockTime() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1ClanEntity*>*& _matcherCell2LockTime() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1ClanEntity*>*& _matcherCell3LockTime() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1ClanEntity*>*& _matcherClan() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1ClanEntity*>*& _matcherClanPersonalEntities() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1ClanEntity*>*& _matcherLeader() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1ClanEntity*>*& _matcherLocationGrade() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1ClanEntity*>*& _matcherLockTimeBuilder() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1ClanEntity*>*& _matcherLockTime() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1ClanEntity*>*& _matcherLockTimeDiplomacy() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1ClanEntity*>*& _matcherMembersStartRaid() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1ClanEntity*>*& _matcherName() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1ClanEntity*>*& _matcherPvP() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1ClanEntity*>*& _matcherPvpGroupClans() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1ClanEntity*>*& _matcherScoutState() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1ClanEntity*>*& _matcherShield() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1ClanEntity*>*& _matcherStatueState() {
		return *(IMatcher1ClanEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	 static IAllOfMatcher1ClanEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1ClanEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1594988))(0, indices);
	}
	 static IAllOfMatcher1ClanEntity*>* AllOf_1(Il2CppArray<IMatcher1ClanEntity*>*>* matchers) {
		return ((IAllOfMatcher1ClanEntity*>* (*)(void *, Il2CppArray<IMatcher1ClanEntity*>*>*))(Il2CppBase() + 0x1594A00))(0, matchers);
	}
	 static IAnyOfMatcher1ClanEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1ClanEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1594A78))(0, indices);
	}
	 static IAnyOfMatcher1ClanEntity*>* AnyOf_1(Il2CppArray<IMatcher1ClanEntity*>*>* matchers) {
		return ((IAnyOfMatcher1ClanEntity*>* (*)(void *, Il2CppArray<IMatcher1ClanEntity*>*>*))(Il2CppBase() + 0x1594AF0))(0, matchers);
	}
	 static IMatcher1ClanEntity*>* get_Avatar() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x157FEA0))(0);
	}
	 static IMatcher1ClanEntity*>* get_Cell0LockTime() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1594B68))(0);
	}
	 static IMatcher1ClanEntity*>* get_Cell1LockTime() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1594D04))(0);
	}
	 static IMatcher1ClanEntity*>* get_Cell2LockTime() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1594EA0))(0);
	}
	 static IMatcher1ClanEntity*>* get_Cell3LockTime() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x159503C))(0);
	}
	 static IMatcher1ClanEntity*>* get_Clan() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x157F420))(0);
	}
	 static IMatcher1ClanEntity*>* get_ClanPersonalEntities() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x15951D8))(0);
	}
	 static IMatcher1ClanEntity*>* get_Leader() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x157F5BC))(0);
	}
	 static IMatcher1ClanEntity*>* get_LocationGrade() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1595374))(0);
	}
	 static IMatcher1ClanEntity*>* get_LockTimeBuilder() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1595510))(0);
	}
	 static IMatcher1ClanEntity*>* get_LockTime() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x15956AC))(0);
	}
	 static IMatcher1ClanEntity*>* get_LockTimeDiplomacy() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1595848))(0);
	}
	 static IMatcher1ClanEntity*>* get_MembersStartRaid() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x15959E4))(0);
	}
	 static IMatcher1ClanEntity*>* get_Name() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1595B80))(0);
	}
	 static IMatcher1ClanEntity*>* get_PvP() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x157F758))(0);
	}
	 static IMatcher1ClanEntity*>* get_PvpGroupClans() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1595D1C))(0);
	}
	 static IMatcher1ClanEntity*>* get_ScoutState() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1595EB8))(0);
	}
	 static IMatcher1ClanEntity*>* get_Shield() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x1596054))(0);
	}
	 static IMatcher1ClanEntity*>* get_StatueState() {
		return ((IMatcher1ClanEntity*>* (*)(void *))(Il2CppBase() + 0x15961F0))(0);
	}

};

