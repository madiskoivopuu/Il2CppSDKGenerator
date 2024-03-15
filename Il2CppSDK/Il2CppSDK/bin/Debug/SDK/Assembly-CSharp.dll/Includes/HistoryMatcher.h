#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryMatcher"));
	}

	 static IMatcher1HistoryEntity*>*& _matcherActionId() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1HistoryEntity*>*& _matcherActor() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1HistoryEntity*>*& _matcherActorPlayerId() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1HistoryEntity*>*& _matcherBattleId() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1HistoryEntity*>*& _matcherBattleStatistic() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1HistoryEntity*>*& _matcherCreationTime() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1HistoryEntity*>*& _matcherDamageResult() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1HistoryEntity*>*& _matcherDamageStat() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1HistoryEntity*>*& _matcherDamageSum() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1HistoryEntity*>*& _matcherDuration() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1HistoryEntity*>*& _matcherFishingStatistic() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1HistoryEntity*>*& _matcherHealResult() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1HistoryEntity*>*& _matcherId() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1HistoryEntity*>*& _matcherKilled() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1HistoryEntity*>*& _matcherReplicated() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1HistoryEntity*>*& _matcherTarget() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1HistoryEntity*>*& _matcherTargetPlayerId() {
		return *(IMatcher1HistoryEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	 static IMatcher1HistoryEntity*>* get_ActionId() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4A38C))(0);
	}
	 static IMatcher1HistoryEntity*>* get_Actor() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C526D0))(0);
	}
	 static IMatcher1HistoryEntity*>* get_ActorPlayerId() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4A844))(0);
	}
	 static IMatcher1HistoryEntity*>* get_BattleId() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4B0C8))(0);
	}
	 static IMatcher1HistoryEntity*>* get_BattleStatistic() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C5286C))(0);
	}
	 static IMatcher1HistoryEntity*>* get_CreationTime() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C52A08))(0);
	}
	 static IMatcher1HistoryEntity*>* get_DamageResult() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4ABF4))(0);
	}
	 static IMatcher1HistoryEntity*>* get_DamageStat() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C52BA4))(0);
	}
	 static IMatcher1HistoryEntity*>* get_DamageSum() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4A6A8))(0);
	}
	 static IMatcher1HistoryEntity*>* get_Duration() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C52D40))(0);
	}
	 static IMatcher1HistoryEntity*>* get_FishingStatistic() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C52EDC))(0);
	}
	 static IMatcher1HistoryEntity*>* get_HealResult() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4AF2C))(0);
	}
	 static IMatcher1HistoryEntity*>* get_Id() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4A1F0))(0);
	}
	 static IMatcher1HistoryEntity*>* get_Killed() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4AD90))(0);
	}
	 static IMatcher1HistoryEntity*>* get_Replicated() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C53078))(0);
	}
	 static IMatcher1HistoryEntity*>* get_Target() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4A50C))(0);
	}
	 static IMatcher1HistoryEntity*>* get_TargetPlayerId() {
		return ((IMatcher1HistoryEntity*>* (*)(void *))(Il2CppBase() + 0x1C4AA58))(0);
	}
	 static IAllOfMatcher1HistoryEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1HistoryEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C53214))(0, indices);
	}
	 static IAllOfMatcher1HistoryEntity*>* AllOf_1(Il2CppArray<IMatcher1HistoryEntity*>*>* matchers) {
		return ((IAllOfMatcher1HistoryEntity*>* (*)(void *, Il2CppArray<IMatcher1HistoryEntity*>*>*))(Il2CppBase() + 0x1C4A9E0))(0, matchers);
	}
	 static IAnyOfMatcher1HistoryEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1HistoryEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C5328C))(0, indices);
	}
	 static IAnyOfMatcher1HistoryEntity*>* AnyOf_1(Il2CppArray<IMatcher1HistoryEntity*>*>* matchers) {
		return ((IAnyOfMatcher1HistoryEntity*>* (*)(void *, Il2CppArray<IMatcher1HistoryEntity*>*>*))(Il2CppBase() + 0x1C53304))(0, matchers);
	}

};

