#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryMatcher"));
	}

	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherActionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherActorPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherBattleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherBattleStatistic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherCreationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherDamageResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherDamageSum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherFishingStatistic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherHealResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherKilled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherReplicated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T& _matcherTargetPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = IMatcher1HistoryEntity*>*> static T get_ActionId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4A38C))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_Actor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C526D0))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_ActorPlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4A844))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_BattleId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4B0C8))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_BattleStatistic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C5286C))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_CreationTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C52A08))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_DamageResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4ABF4))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C52BA4))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_DamageSum() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4A6A8))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C52D40))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_FishingStatistic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C52EDC))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_HealResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4AF2C))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4A1F0))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_Killed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4AD90))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_Replicated() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C53078))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4A50C))(0);
	}
	template <typename T = IMatcher1HistoryEntity*>*> static T get_TargetPlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4AA58))(0);
	}
	template <typename T = IAllOfMatcher1HistoryEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C53214))(0, indices);
	}
	template <typename T = IAllOfMatcher1HistoryEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C4A9E0))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1HistoryEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C5328C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1HistoryEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C53304))(0, matchers);
	}

};

