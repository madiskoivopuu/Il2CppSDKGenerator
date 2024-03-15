#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectMatcher"));
	}

	 static IMatcher1EffectEntity*>*& _matcherActivateNotify() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1EffectEntity*>*& _matcherAmbient() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1EffectEntity*>*& _matcherAnimatorArmed() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1EffectEntity*>*& _matcherAnimator() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1EffectEntity*>*& _matcherAnimatorSync() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1EffectEntity*>*& _matcherAttach() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1EffectEntity*>*& _matcherBlueprint() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1EffectEntity*>*& _matcherBubble() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1EffectEntity*>*& _matcherColor() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1EffectEntity*>*& _matcherCount() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1EffectEntity*>*& _matcherDuration() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1EffectEntity*>*& _matcherEffectByCount() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1EffectEntity*>*& _matcherEffectContainer() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1EffectEntity*>*& _matcherFollowCamera() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1EffectEntity*>*& _matcherGrabView() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1EffectEntity*>*& _matcherHideTool() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1EffectEntity*>*& _matcherId() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1EffectEntity*>*& _matcherInfinity() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1EffectEntity*>*& _matcherInvisible() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1EffectEntity*>*& _matcherLocalRotation() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1EffectEntity*>*& _matcherMinimapAlwaysVisible() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1EffectEntity*>*& _matcherMinimapArrow() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1EffectEntity*>*& _matcherMinimapArrowPing() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1EffectEntity*>*& _matcherMinimap() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1EffectEntity*>*& _matcherNaked() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1EffectEntity*>*& _matcherNotification() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1EffectEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1EffectEntity*>*& _matcherOnCollision() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1EffectEntity*>*& _matcherOnDeath() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1EffectEntity*>*& _matcherOther() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1EffectEntity*>*& _matcherParent() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1EffectEntity*>*& _matcherPersonal() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1EffectEntity*>*& _matcherPlayOut() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1EffectEntity*>*& _matcherPolymorph() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1EffectEntity*>*& _matcherPrefab() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1EffectEntity*>*& _matcherPrefabs() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1EffectEntity*>*& _matcherRadius() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1EffectEntity*>*& _matcherRotation() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1EffectEntity*>*& _matcherShake() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1EffectEntity*>*& _matcherShowCount() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1EffectEntity*>*& _matcherSingle() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1EffectEntity*>*& _matcherSocket() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1EffectEntity*>*& _matcherSound() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1EffectEntity*>*& _matcherSoundId() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1EffectEntity*>*& _matcherSources() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1EffectEntity*>*& _matcherSpawnTrigger() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1EffectEntity*>*& _matcherStartCondition() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1EffectEntity*>*& _matcherStartTime() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1EffectEntity*>*& _matcherTags() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1EffectEntity*>*& _matcherTarget() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1EffectEntity*>*& _matcherTargetMarker() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1EffectEntity*>*& _matcherToolFx() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1EffectEntity*>*& _matcherTrail() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1EffectEntity*>*& _matcherTransparency() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1EffectEntity*>*& _matcherUIPrefab() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1EffectEntity*>*& _matcherWarningArea() {
		return *(IMatcher1EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}

	 static IMatcher1EffectEntity*>* get_ActivateNotify() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AAFEB0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Ambient() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0030))(0);
	}
	 static IMatcher1EffectEntity*>* get_AnimatorArmed() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA02E4))(0);
	}
	 static IMatcher1EffectEntity*>* get_Animator() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB01CC))(0);
	}
	 static IMatcher1EffectEntity*>* get_AnimatorSync() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0368))(0);
	}
	 static IMatcher1EffectEntity*>* get_Attach() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0504))(0);
	}
	 static IMatcher1EffectEntity*>* get_Blueprint() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FD94))(0);
	}
	 static IMatcher1EffectEntity*>* get_Bubble() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB06A0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Color() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB083C))(0);
	}
	 static IMatcher1EffectEntity*>* get_Count() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB09D8))(0);
	}
	 static IMatcher1EffectEntity*>* get_Duration() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0B74))(0);
	}
	 static IMatcher1EffectEntity*>* get_EffectByCount() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0D10))(0);
	}
	 static IMatcher1EffectEntity*>* get_EffectContainer() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0EAC))(0);
	}
	 static IMatcher1EffectEntity*>* get_FollowCamera() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1048))(0);
	}
	 static IMatcher1EffectEntity*>* get_GrabView() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB11E4))(0);
	}
	 static IMatcher1EffectEntity*>* get_HideTool() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1380))(0);
	}
	 static IMatcher1EffectEntity*>* get_Id() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9F8B8))(0);
	}
	 static IMatcher1EffectEntity*>* get_Infinity() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB151C))(0);
	}
	 static IMatcher1EffectEntity*>* get_Invisible() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA07BC))(0);
	}
	 static IMatcher1EffectEntity*>* get_LocalRotation() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB16B8))(0);
	}
	 static IMatcher1EffectEntity*>* get_MinimapAlwaysVisible() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1854))(0);
	}
	 static IMatcher1EffectEntity*>* get_MinimapArrow() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA12BC))(0);
	}
	 static IMatcher1EffectEntity*>* get_MinimapArrowPing() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB19F0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Minimap() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1B8C))(0);
	}
	 static IMatcher1EffectEntity*>* get_Naked() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1D28))(0);
	}
	 static IMatcher1EffectEntity*>* get_Notification() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1EC4))(0);
	}
	 static IMatcher1EffectEntity*>* get_OldBlueprint() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2060))(0);
	}
	 static IMatcher1EffectEntity*>* get_OnCollision() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB21FC))(0);
	}
	 static IMatcher1EffectEntity*>* get_OnDeath() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FFA8))(0);
	}
	 static IMatcher1EffectEntity*>* get_Other() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2398))(0);
	}
	 static IMatcher1EffectEntity*>* get_Parent() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA0620))(0);
	}
	 static IMatcher1EffectEntity*>* get_Personal() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2534))(0);
	}
	 static IMatcher1EffectEntity*>* get_PlayOut() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB26D0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Polymorph() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2870))(0);
	}
	 static IMatcher1EffectEntity*>* get_Prefab() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2A10))(0);
	}
	 static IMatcher1EffectEntity*>* get_Prefabs() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2BB0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Radius() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2D50))(0);
	}
	 static IMatcher1EffectEntity*>* get_Rotation() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2EF0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Shake() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3090))(0);
	}
	 static IMatcher1EffectEntity*>* get_ShowCount() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3230))(0);
	}
	 static IMatcher1EffectEntity*>* get_Single() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FA54))(0);
	}
	 static IMatcher1EffectEntity*>* get_Socket() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB33D0))(0);
	}
	 static IMatcher1EffectEntity*>* get_Sound() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3570))(0);
	}
	 static IMatcher1EffectEntity*>* get_SoundId() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3710))(0);
	}
	 static IMatcher1EffectEntity*>* get_Sources() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB38B0))(0);
	}
	 static IMatcher1EffectEntity*>* get_SpawnTrigger() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3A50))(0);
	}
	 static IMatcher1EffectEntity*>* get_StartCondition() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3BF0))(0);
	}
	 static IMatcher1EffectEntity*>* get_StartTime() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3D90))(0);
	}
	 static IMatcher1EffectEntity*>* get_Tags() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3F30))(0);
	}
	 static IMatcher1EffectEntity*>* get_Target() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FBF4))(0);
	}
	 static IMatcher1EffectEntity*>* get_TargetMarker() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB40D0))(0);
	}
	 static IMatcher1EffectEntity*>* get_ToolFx() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA0480))(0);
	}
	 static IMatcher1EffectEntity*>* get_Trail() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA0144))(0);
	}
	 static IMatcher1EffectEntity*>* get_Transparency() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB4270))(0);
	}
	 static IMatcher1EffectEntity*>* get_UIPrefab() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB4410))(0);
	}
	 static IMatcher1EffectEntity*>* get_WarningArea() {
		return ((IMatcher1EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB45B0))(0);
	}
	 static IAllOfMatcher1EffectEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1EffectEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1AB4750))(0, indices);
	}
	 static IAllOfMatcher1EffectEntity*>* AllOf_1(Il2CppArray<IMatcher1EffectEntity*>*>* matchers) {
		return ((IAllOfMatcher1EffectEntity*>* (*)(void *, Il2CppArray<IMatcher1EffectEntity*>*>*))(Il2CppBase() + 0x1A9FF30))(0, matchers);
	}
	 static IAnyOfMatcher1EffectEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1EffectEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1AB47C8))(0, indices);
	}
	 static IAnyOfMatcher1EffectEntity*>* AnyOf_1(Il2CppArray<IMatcher1EffectEntity*>*>* matchers) {
		return ((IAnyOfMatcher1EffectEntity*>* (*)(void *, Il2CppArray<IMatcher1EffectEntity*>*>*))(Il2CppBase() + 0x1AB4840))(0, matchers);
	}

};

