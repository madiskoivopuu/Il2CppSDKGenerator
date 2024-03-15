#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyMatcher"));
	}

	 static IMatcher1<LobbyEntity*>*& _matcherApproveTime() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherAutoStart() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherAvatar() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherDamageCoefByGrade() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherDamageStep() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherDifficultySteps() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherEnterQuest() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherHealthStep() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherLobbyActiveTime() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherLobbyId() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherLobbyPlayers() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherLobbyType() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherLobbyWorld() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherMaxHealthCoefByGrade() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherOverhaulDamageCoef() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherOverhaulHealthCoef() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherOwner() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherPortal() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherPower() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherRequiredItems() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherStartTime() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<LobbyEntity*>*& _matcherWorldsList() {
		return *(IMatcher1<LobbyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	 static IMatcher1<LobbyEntity*>* get_ApproveTime() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F1B8))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_AutoStart() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F338))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_Avatar() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1438BF4))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_Blueprint() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F4D4))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_DamageCoefByGrade() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F670))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_DamageCoef() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F80C))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_DamageStep() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143F9A8))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_DifficultySteps() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143FB44))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_EnterQuest() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143FCE0))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_HealthStep() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143FE7C))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_LobbyActiveTime() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440018))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_LobbyId() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1438224))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_LobbyPlayers() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14401B4))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_LobbyType() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x143A798))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_LobbyWorld() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440350))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_MaxHealthCoefByGrade() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14404EC))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440688))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_OldBlueprint() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440824))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_OverhaulDamageCoef() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14409C0))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_OverhaulHealthCoef() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440B5C))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_Owner() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14383C0))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_Portal() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440CF8))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_PortalsPoints() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1440E94))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_Power() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1441030))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_RequiredItems() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x14411CC))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_StartTime() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1441368))(0);
	}
	 static IMatcher1<LobbyEntity*>* get_WorldsList() {
		return ((IMatcher1<LobbyEntity*>* (*)(void *))(Il2CppBase() + 0x1441504))(0);
	}
	 static IAllOfMatcher1<LobbyEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<LobbyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14416A0))(0, indices);
	}
	 static IAllOfMatcher1<LobbyEntity*>* AllOf_1(Il2CppArray<IMatcher1<LobbyEntity*>*>* matchers) {
		return ((IAllOfMatcher1<LobbyEntity*>* (*)(void *, Il2CppArray<IMatcher1<LobbyEntity*>*>*))(Il2CppBase() + 0x1441718))(0, matchers);
	}
	 static IAnyOfMatcher1<LobbyEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<LobbyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1441790))(0, indices);
	}
	 static IAnyOfMatcher1<LobbyEntity*>* AnyOf_1(Il2CppArray<IMatcher1<LobbyEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<LobbyEntity*>* (*)(void *, Il2CppArray<IMatcher1<LobbyEntity*>*>*))(Il2CppBase() + 0x1441808))(0, matchers);
	}

};

