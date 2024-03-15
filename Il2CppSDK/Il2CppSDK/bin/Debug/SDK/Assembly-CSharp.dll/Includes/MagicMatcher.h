#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicMatcher"));
	}

	 static IMatcher1<MagicEntity*>*& _matcherAIBattleState() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherActionId() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherActivationState() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<MagicEntity*>*& _matcherActive() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<MagicEntity*>*& _matcherActor() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<MagicEntity*>*& _matcherActorParent() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<MagicEntity*>*& _matcherAlive() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<MagicEntity*>*& _matcherAttractorState() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<MagicEntity*>*& _matcherAutoRotationState() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<MagicEntity*>*& _matcherChance() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<MagicEntity*>*& _matcherChangeDurationByLostHp() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<MagicEntity*>*& _matcherChildren() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<MagicEntity*>*& _matcherClan() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<MagicEntity*>*& _matcherCollisionMagicState() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<MagicEntity*>*& _matcherCount() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDamage() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDamageShield() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDamageStat() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDamageType() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDelay() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDestroying() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDot() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDuration() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherDurationPrediction() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherGuild() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherHeal() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherHot() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherId() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherInventoryIndex() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherItem() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherMagicData() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherMagicTriggerId() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<MagicEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<MagicEntity*>*& _matcherOnDurationEndCount() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<MagicEntity*>*& _matcherOwner() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<MagicEntity*>*& _matcherParent() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<MagicEntity*>*& _matcherPermanent() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<MagicEntity*>*& _matcherPersonal() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<MagicEntity*>*& _matcherProcessing() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<MagicEntity*>*& _matcherRemoveOnMove() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<MagicEntity*>*& _matcherRepeatMagicState() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<MagicEntity*>*& _matcherReplicated() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<MagicEntity*>*& _matcherSequenceIndex() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<MagicEntity*>*& _matcherSneak() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<MagicEntity*>*& _matcherSource() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<MagicEntity*>*& _matcherSourceDamage() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<MagicEntity*>*& _matcherStartTime() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<MagicEntity*>*& _matcherTarget() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<MagicEntity*>*& _matcherTicksCount() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<MagicEntity*>*& _matcherTot() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<MagicEntity*>*& _matcherUpdateTime() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<MagicEntity*>*& _matcherUseCount() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<MagicEntity*>*& _matcherVipMagic() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<MagicEntity*>*& _matcherWeaponDot() {
		return *(IMatcher1<MagicEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}

	 static IMatcher1<MagicEntity*>* get_AIBattleState() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1AD9FB4))(0);
	}
	 static IMatcher1<MagicEntity*>* get_ActionId() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADA150))(0);
	}
	 static IMatcher1<MagicEntity*>* get_ActivationState() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADA2D0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Active() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADA46C))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Actor() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADA608))(0);
	}
	 static IMatcher1<MagicEntity*>* get_ActorParent() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADA7A4))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Alive() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADA940))(0);
	}
	 static IMatcher1<MagicEntity*>* get_AttractorState() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADAADC))(0);
	}
	 static IMatcher1<MagicEntity*>* get_AutoRotationState() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADAC78))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Chance() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADAE14))(0);
	}
	 static IMatcher1<MagicEntity*>* get_ChangeDurationByLostHp() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADAFB0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Children() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADB14C))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Clan() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADB2E8))(0);
	}
	 static IMatcher1<MagicEntity*>* get_CollisionMagicState() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADB484))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Count() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADB620))(0);
	}
	 static IMatcher1<MagicEntity*>* get_DamageCoef() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADB7BC))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Damage() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADB958))(0);
	}
	 static IMatcher1<MagicEntity*>* get_DamageShield() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADBAF4))(0);
	}
	 static IMatcher1<MagicEntity*>* get_DamageStat() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADBC90))(0);
	}
	 static IMatcher1<MagicEntity*>* get_DamageType() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADBE2C))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Delay() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADBFC8))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Destroying() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ACD9C0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Dot() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADC164))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Duration() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADC300))(0);
	}
	 static IMatcher1<MagicEntity*>* get_DurationPrediction() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ACE290))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Guild() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADC49C))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Heal() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADC638))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Hot() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADC7D4))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Id() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADC970))(0);
	}
	 static IMatcher1<MagicEntity*>* get_InventoryIndex() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADCB0C))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Item() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADCCA8))(0);
	}
	 static IMatcher1<MagicEntity*>* get_MagicData() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADCE44))(0);
	}
	 static IMatcher1<MagicEntity*>* get_MagicTriggerId() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADCFE0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADD180))(0);
	}
	 static IMatcher1<MagicEntity*>* get_OnDurationEndCount() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADD320))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Owner() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADD4C0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Parent() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADD660))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Permanent() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADD800))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Personal() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADD9A0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Processing() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADDB40))(0);
	}
	 static IMatcher1<MagicEntity*>* get_RemoveOnMove() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADDCE0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_RepeatMagicState() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADDE80))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Replicated() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ACDBD4))(0);
	}
	 static IMatcher1<MagicEntity*>* get_SequenceIndex() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE020))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Sneak() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE1C0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Source() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE360))(0);
	}
	 static IMatcher1<MagicEntity*>* get_SourceDamage() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE500))(0);
	}
	 static IMatcher1<MagicEntity*>* get_StartTime() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE6A0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Target() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE840))(0);
	}
	 static IMatcher1<MagicEntity*>* get_TicksCount() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADE9E0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_Tot() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADEB80))(0);
	}
	 static IMatcher1<MagicEntity*>* get_UpdateTime() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADED20))(0);
	}
	 static IMatcher1<MagicEntity*>* get_UseCount() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADEEC0))(0);
	}
	 static IMatcher1<MagicEntity*>* get_VipMagic() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADF060))(0);
	}
	 static IMatcher1<MagicEntity*>* get_WeaponDot() {
		return ((IMatcher1<MagicEntity*>* (*)(void *))(Il2CppBase() + 0x1ADF200))(0);
	}
	 static IAllOfMatcher1<MagicEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<MagicEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1ADF3A0))(0, indices);
	}
	 static IAllOfMatcher1<MagicEntity*>* AllOf_1(Il2CppArray<IMatcher1<MagicEntity*>*>* matchers) {
		return ((IAllOfMatcher1<MagicEntity*>* (*)(void *, Il2CppArray<IMatcher1<MagicEntity*>*>*))(Il2CppBase() + 0x1ACDB5C))(0, matchers);
	}
	 static IAnyOfMatcher1<MagicEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<MagicEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1ADF418))(0, indices);
	}
	 static IAnyOfMatcher1<MagicEntity*>* AnyOf_1(Il2CppArray<IMatcher1<MagicEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<MagicEntity*>* (*)(void *, Il2CppArray<IMatcher1<MagicEntity*>*>*))(Il2CppBase() + 0x1ADF490))(0, matchers);
	}

};

