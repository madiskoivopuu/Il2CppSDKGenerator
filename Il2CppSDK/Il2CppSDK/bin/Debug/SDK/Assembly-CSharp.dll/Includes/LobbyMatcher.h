#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyMatcher"));
	}

	 static IMatcher1LobbyEntity*>*& _matcherApproveTime() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1LobbyEntity*>*& _matcherAutoStart() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1LobbyEntity*>*& _matcherAvatar() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1LobbyEntity*>*& _matcherBlueprint() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1LobbyEntity*>*& _matcherDamageCoefByGrade() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1LobbyEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1LobbyEntity*>*& _matcherDamageStep() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1LobbyEntity*>*& _matcherDifficultySteps() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1LobbyEntity*>*& _matcherEnterQuest() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1LobbyEntity*>*& _matcherHealthStep() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1LobbyEntity*>*& _matcherLobbyActiveTime() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1LobbyEntity*>*& _matcherLobbyId() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1LobbyEntity*>*& _matcherLobbyPlayers() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1LobbyEntity*>*& _matcherLobbyType() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1LobbyEntity*>*& _matcherLobbyWorld() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1LobbyEntity*>*& _matcherMaxHealthCoefByGrade() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1LobbyEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1LobbyEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1LobbyEntity*>*& _matcherOverhaulDamageCoef() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1LobbyEntity*>*& _matcherOverhaulHealthCoef() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1LobbyEntity*>*& _matcherOwner() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1LobbyEntity*>*& _matcherPortal() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1LobbyEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1LobbyEntity*>*& _matcherPower() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1LobbyEntity*>*& _matcherRequiredItems() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1LobbyEntity*>*& _matcherStartTime() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1LobbyEntity*>*& _matcherWorldsList() {
		return *(IMatcher1LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	 static IMatcher1LobbyEntity*>* get_ApproveTime() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F1B8))(0);
	}
	 static IMatcher1LobbyEntity*>* get_AutoStart() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F338))(0);
	}
	 static IMatcher1LobbyEntity*>* get_Avatar() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1438BF4))(0);
	}
	 static IMatcher1LobbyEntity*>* get_Blueprint() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F4D4))(0);
	}
	 static IMatcher1LobbyEntity*>* get_DamageCoefByGrade() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F670))(0);
	}
	 static IMatcher1LobbyEntity*>* get_DamageCoef() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F80C))(0);
	}
	 static IMatcher1LobbyEntity*>* get_DamageStep() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F9A8))(0);
	}
	 static IMatcher1LobbyEntity*>* get_DifficultySteps() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143FB44))(0);
	}
	 static IMatcher1LobbyEntity*>* get_EnterQuest() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143FCE0))(0);
	}
	 static IMatcher1LobbyEntity*>* get_HealthStep() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143FE7C))(0);
	}
	 static IMatcher1LobbyEntity*>* get_LobbyActiveTime() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440018))(0);
	}
	 static IMatcher1LobbyEntity*>* get_LobbyId() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1438224))(0);
	}
	 static IMatcher1LobbyEntity*>* get_LobbyPlayers() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14401B4))(0);
	}
	 static IMatcher1LobbyEntity*>* get_LobbyType() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143A798))(0);
	}
	 static IMatcher1LobbyEntity*>* get_LobbyWorld() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440350))(0);
	}
	 static IMatcher1LobbyEntity*>* get_MaxHealthCoefByGrade() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14404EC))(0);
	}
	 static IMatcher1LobbyEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440688))(0);
	}
	 static IMatcher1LobbyEntity*>* get_OldBlueprint() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440824))(0);
	}
	 static IMatcher1LobbyEntity*>* get_OverhaulDamageCoef() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14409C0))(0);
	}
	 static IMatcher1LobbyEntity*>* get_OverhaulHealthCoef() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440B5C))(0);
	}
	 static IMatcher1LobbyEntity*>* get_Owner() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14383C0))(0);
	}
	 static IMatcher1LobbyEntity*>* get_Portal() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440CF8))(0);
	}
	 static IMatcher1LobbyEntity*>* get_PortalsPoints() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440E94))(0);
	}
	 static IMatcher1LobbyEntity*>* get_Power() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1441030))(0);
	}
	 static IMatcher1LobbyEntity*>* get_RequiredItems() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14411CC))(0);
	}
	 static IMatcher1LobbyEntity*>* get_StartTime() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1441368))(0);
	}
	 static IMatcher1LobbyEntity*>* get_WorldsList() {
		return ((IMatcher1LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1441504))(0);
	}
	 static IAllOfMatcher1LobbyEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1LobbyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14416A0))(0, indices);
	}
	 static IAllOfMatcher1LobbyEntity*>* AllOf_1(Il2CppArray<IMatcher1LobbyEntity*>*>* matchers) {
		return ((IAllOfMatcher1LobbyEntity*>* (*)(void *, Il2CppArray<IMatcher1LobbyEntity*>*>*))(Il2CppBase() + 0x1441718))(0, matchers);
	}
	 static IAnyOfMatcher1LobbyEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1LobbyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1441790))(0, indices);
	}
	 static IAnyOfMatcher1LobbyEntity*>* AnyOf_1(Il2CppArray<IMatcher1LobbyEntity*>*>* matchers) {
		return ((IAnyOfMatcher1LobbyEntity*>* (*)(void *, Il2CppArray<IMatcher1LobbyEntity*>*>*))(Il2CppBase() + 0x1441808))(0, matchers);
	}

};

