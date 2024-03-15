#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataMatcher"));
	}

	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherActionCondition() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherActiveEffect() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherActorTriggerConditions() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyActorCooldown() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyActorMagic() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyDurabilityDamage() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyLocationMagic() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyOnActorEffect() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyOnTargetEffect() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyOwnerMagic() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyPlace() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyResources() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyTargetMagic() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherApplyTrigger() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChance() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChangeActorCooldown() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChangeDamage() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChangeDurationByLostHp() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChangeHeal() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChangeMagic() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherChangeTargetCooldown() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherCooldown() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDamage() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDamageCondition() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDestroyParentOnEnd() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDispelFromActor() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDispelFromTarget() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDistributeDamage() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherDistributeMagic() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherExecuteGroup() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherGroupCooldown() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherItemCondition() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherMagicCondition() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherMagicTriggerType() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherNeedFilterTargets() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherPlayerStatType() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherResetSkipCooldown() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherSkipCount() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherSplash() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherSplashDamage() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherTags() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherTargetTags() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherTargetTriggerConditions() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherUseCount() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<MagicTriggerDataEntity*>*& _matcherUseSourceItem() {
		return *(IMatcher1<MagicTriggerDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}

	 static IMatcher1<MagicTriggerDataEntity*>* get_ActionCondition() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3F5DC))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ActiveCondition() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3F75C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ActiveEffect() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3F8F8))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ActorTriggerConditions() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3FA94))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyActorCooldown() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3FC30))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyActorMagic() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3FDCC))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyDurabilityDamage() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3FF68))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyLocationMagic() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40104))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyOnActorEffect() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A402A0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyOnTargetEffect() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A4043C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyOwnerMagic() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A405D8))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyPlace() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40774))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyResources() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40910))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyTargetMagic() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40AAC))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ApplyTrigger() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40C48))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_Blueprint() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40DE4))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_Chance() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A40F80))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ChangeActorCooldown() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A4111C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ChangeDamage() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A412B8))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ChangeDurationByLostHp() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A41454))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ChangeHeal() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A415F0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ChangeMagic() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A4178C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ChangeTargetCooldown() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A41928))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_Cooldown() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A41AC4))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_Damage() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A41C60))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_DamageCondition() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A41DFC))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_DestroyParentOnEnd() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A41F98))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_DispelFromActor() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42134))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_DispelFromTarget() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A422D0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_DistributeDamage() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A4246C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_DistributeMagic() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42608))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ExecuteGroup() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A427A4))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_GroupCooldown() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42940))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ItemCondition() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42AE0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_MagicCondition() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A35A3C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_MagicTriggerType() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42C80))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_NeedFilterTargets() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42E20))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_OldBlueprint() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A42FC0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_PlayerStatType() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43160))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_ResetSkipCooldown() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43300))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_SkipCount() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A434A0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_Splash() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43640))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_SplashDamage() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A437E0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_Tags() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A3589C))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_TargetTags() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43980))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_TargetTriggerConditions() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43B20))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_UseCount() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43CC0))(0);
	}
	 static IMatcher1<MagicTriggerDataEntity*>* get_UseSourceItem() {
		return ((IMatcher1<MagicTriggerDataEntity*>* (*)(void *))(Il2CppBase() + 0x1A43E60))(0);
	}
	 static IAllOfMatcher1<MagicTriggerDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<MagicTriggerDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1A44000))(0, indices);
	}
	 static IAllOfMatcher1<MagicTriggerDataEntity*>* AllOf_1(Il2CppArray<IMatcher1<MagicTriggerDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1<MagicTriggerDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<MagicTriggerDataEntity*>*>*))(Il2CppBase() + 0x1A44078))(0, matchers);
	}
	 static IAnyOfMatcher1<MagicTriggerDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<MagicTriggerDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1A440F0))(0, indices);
	}
	 static IAnyOfMatcher1<MagicTriggerDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1<MagicTriggerDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<MagicTriggerDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<MagicTriggerDataEntity*>*>*))(Il2CppBase() + 0x1A44168))(0, matchers);
	}

};

