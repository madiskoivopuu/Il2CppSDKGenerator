#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyMatcher"));
	}

	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherApproveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherAutoStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherDamageCoefByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherDamageCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherDamageStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherDifficultySteps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherEnterQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherHealthStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherLobbyActiveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherLobbyId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherLobbyPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherLobbyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherLobbyWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherMaxHealthCoefByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherMaxHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherOverhaulDamageCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherOverhaulHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherPortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherPower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherRequiredItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T& _matcherWorldsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = IMatcher1LobbyEntity*>*> static T get_ApproveTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x143F1B8))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_AutoStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x143F338))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x1438BF4))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x143F4D4))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_DamageCoefByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x143F670))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_DamageCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x143F80C))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_DamageStep() {
		return ((T (*)(void *))(Il2CppBase() + 0x143F9A8))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_DifficultySteps() {
		return ((T (*)(void *))(Il2CppBase() + 0x143FB44))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_EnterQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x143FCE0))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_HealthStep() {
		return ((T (*)(void *))(Il2CppBase() + 0x143FE7C))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_LobbyActiveTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440018))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_LobbyId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1438224))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_LobbyPlayers() {
		return ((T (*)(void *))(Il2CppBase() + 0x14401B4))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_LobbyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x143A798))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_LobbyWorld() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440350))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_MaxHealthCoefByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14404EC))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_MaxHealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440688))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440824))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_OverhaulDamageCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x14409C0))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_OverhaulHealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440B5C))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x14383C0))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_Portal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440CF8))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1440E94))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_Power() {
		return ((T (*)(void *))(Il2CppBase() + 0x1441030))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_RequiredItems() {
		return ((T (*)(void *))(Il2CppBase() + 0x14411CC))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1441368))(0);
	}
	template <typename T = IMatcher1LobbyEntity*>*> static T get_WorldsList() {
		return ((T (*)(void *))(Il2CppBase() + 0x1441504))(0);
	}
	template <typename T = IAllOfMatcher1LobbyEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14416A0))(0, indices);
	}
	template <typename T = IAllOfMatcher1LobbyEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1441718))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1LobbyEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1441790))(0, indices);
	}
	template <typename T = IAnyOfMatcher1LobbyEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1441808))(0, matchers);
	}

};

