#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicMatcher"));
	}

	template <typename T = void*> static T& _matcherAIBattleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherActionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherActivationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherActorParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherAlive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherAttractorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherAutoRotationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherChangeDurationByLostHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherCollisionMagicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherDamageCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherDamageShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherDestroying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherDurationPrediction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherHot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherInventoryIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherMagicData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherMagicTriggerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherMaxHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherOnDurationEndCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherPermanent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherRemoveOnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherRepeatMagicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherReplicated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherSequenceIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherSneak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& _matcherSourceDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _matcherTicksCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _matcherTot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _matcherUpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& _matcherUseCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& _matcherVipMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& _matcherWeaponDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}

	template <typename T = void*> static T get_AIBattleState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AD9FB4))(0);
	}
	template <typename T = void*> static T get_ActionId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADA150))(0);
	}
	template <typename T = void*> static T get_ActivationState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADA2D0))(0);
	}
	template <typename T = void*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADA46C))(0);
	}
	template <typename T = void*> static T get_Actor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADA608))(0);
	}
	template <typename T = void*> static T get_ActorParent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADA7A4))(0);
	}
	template <typename T = void*> static T get_Alive() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADA940))(0);
	}
	template <typename T = void*> static T get_AttractorState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADAADC))(0);
	}
	template <typename T = void*> static T get_AutoRotationState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADAC78))(0);
	}
	template <typename T = void*> static T get_Chance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADAE14))(0);
	}
	template <typename T = void*> static T get_ChangeDurationByLostHp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADAFB0))(0);
	}
	template <typename T = void*> static T get_Children() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADB14C))(0);
	}
	template <typename T = void*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADB2E8))(0);
	}
	template <typename T = void*> static T get_CollisionMagicState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADB484))(0);
	}
	template <typename T = void*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADB620))(0);
	}
	template <typename T = void*> static T get_DamageCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADB7BC))(0);
	}
	template <typename T = void*> static T get_Damage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADB958))(0);
	}
	template <typename T = void*> static T get_DamageShield() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADBAF4))(0);
	}
	template <typename T = void*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADBC90))(0);
	}
	template <typename T = void*> static T get_DamageType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADBE2C))(0);
	}
	template <typename T = void*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADBFC8))(0);
	}
	template <typename T = void*> static T get_Destroying() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACD9C0))(0);
	}
	template <typename T = void*> static T get_Dot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADC164))(0);
	}
	template <typename T = void*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADC300))(0);
	}
	template <typename T = void*> static T get_DurationPrediction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACE290))(0);
	}
	template <typename T = void*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADC49C))(0);
	}
	template <typename T = void*> static T get_Heal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADC638))(0);
	}
	template <typename T = void*> static T get_Hot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADC7D4))(0);
	}
	template <typename T = void*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADC970))(0);
	}
	template <typename T = void*> static T get_InventoryIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADCB0C))(0);
	}
	template <typename T = void*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADCCA8))(0);
	}
	template <typename T = void*> static T get_MagicData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADCE44))(0);
	}
	template <typename T = void*> static T get_MagicTriggerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADCFE0))(0);
	}
	template <typename T = void*> static T get_MaxHealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADD180))(0);
	}
	template <typename T = void*> static T get_OnDurationEndCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADD320))(0);
	}
	template <typename T = void*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADD4C0))(0);
	}
	template <typename T = void*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADD660))(0);
	}
	template <typename T = void*> static T get_Permanent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADD800))(0);
	}
	template <typename T = void*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADD9A0))(0);
	}
	template <typename T = void*> static T get_Processing() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADDB40))(0);
	}
	template <typename T = void*> static T get_RemoveOnMove() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADDCE0))(0);
	}
	template <typename T = void*> static T get_RepeatMagicState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADDE80))(0);
	}
	template <typename T = void*> static T get_Replicated() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACDBD4))(0);
	}
	template <typename T = void*> static T get_SequenceIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE020))(0);
	}
	template <typename T = void*> static T get_Sneak() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE1C0))(0);
	}
	template <typename T = void*> static T get_Source() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE360))(0);
	}
	template <typename T = void*> static T get_SourceDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE500))(0);
	}
	template <typename T = void*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE6A0))(0);
	}
	template <typename T = void*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE840))(0);
	}
	template <typename T = void*> static T get_TicksCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADE9E0))(0);
	}
	template <typename T = void*> static T get_Tot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADEB80))(0);
	}
	template <typename T = void*> static T get_UpdateTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADED20))(0);
	}
	template <typename T = void*> static T get_UseCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADEEC0))(0);
	}
	template <typename T = void*> static T get_VipMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADF060))(0);
	}
	template <typename T = void*> static T get_WeaponDot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ADF200))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ADF3A0))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ACDB5C))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ADF418))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ADF490))(0, matchers);
	}

};

}
