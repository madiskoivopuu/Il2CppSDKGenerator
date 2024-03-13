#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataMatcher"));
	}

	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherActionCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherActorTriggerConditions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyActorCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyDurabilityDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyLocationMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyOnActorEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyOnTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyOwnerMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherApplyTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChangeActorCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChangeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChangeDurationByLostHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChangeHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChangeMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherChangeTargetCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDamageCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDestroyParentOnEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDispelFromActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDispelFromTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDistributeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherDistributeMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherExecuteGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherGroupCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherItemCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherMagicCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherMagicTriggerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherNeedFilterTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherPlayerStatType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherResetSkipCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherSkipCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherSplashDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherTargetTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherTargetTriggerConditions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherUseCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T& _matcherUseSourceItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}

	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ActionCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3F5DC))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3F75C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ActiveEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3F8F8))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ActorTriggerConditions() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3FA94))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyActorCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3FC30))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3FDCC))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyDurabilityDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3FF68))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyLocationMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40104))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyOnActorEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A402A0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyOnTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A4043C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyOwnerMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A405D8))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40774))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyResources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40910))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40AAC))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ApplyTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40C48))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40DE4))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_Chance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A40F80))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ChangeActorCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A4111C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ChangeDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A412B8))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ChangeDurationByLostHp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A41454))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ChangeHeal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A415F0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ChangeMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A4178C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ChangeTargetCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A41928))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_Cooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A41AC4))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_Damage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A41C60))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_DamageCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A41DFC))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_DestroyParentOnEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A41F98))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_DispelFromActor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42134))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_DispelFromTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A422D0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_DistributeDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A4246C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_DistributeMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42608))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ExecuteGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A427A4))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_GroupCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42940))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ItemCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42AE0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_MagicCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A35A3C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_MagicTriggerType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42C80))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_NeedFilterTargets() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42E20))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A42FC0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_PlayerStatType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43160))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_ResetSkipCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43300))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_SkipCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A434A0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_Splash() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43640))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_SplashDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A437E0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3589C))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_TargetTags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43980))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_TargetTriggerConditions() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43B20))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_UseCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43CC0))(0);
	}
	template <typename T = IMatcher1MagicTriggerDataEntity*>*> static T get_UseSourceItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A43E60))(0);
	}
	template <typename T = IAllOfMatcher1MagicTriggerDataEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A44000))(0, indices);
	}
	template <typename T = IAllOfMatcher1MagicTriggerDataEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A44078))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1MagicTriggerDataEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A440F0))(0, indices);
	}
	template <typename T = IAnyOfMatcher1MagicTriggerDataEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A44168))(0, matchers);
	}

};

