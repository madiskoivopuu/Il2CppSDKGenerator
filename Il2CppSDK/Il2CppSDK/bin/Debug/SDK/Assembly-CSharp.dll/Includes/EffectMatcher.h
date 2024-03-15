#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectMatcher"));
	}

	 static IMatcher1<EffectEntity*>*& _matcherActivateNotify() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherAmbient() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherAnimatorArmed() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<EffectEntity*>*& _matcherAnimator() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<EffectEntity*>*& _matcherAnimatorSync() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<EffectEntity*>*& _matcherAttach() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<EffectEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<EffectEntity*>*& _matcherBubble() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<EffectEntity*>*& _matcherColor() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<EffectEntity*>*& _matcherCount() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<EffectEntity*>*& _matcherDuration() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<EffectEntity*>*& _matcherEffectByCount() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<EffectEntity*>*& _matcherEffectContainer() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<EffectEntity*>*& _matcherFollowCamera() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<EffectEntity*>*& _matcherGrabView() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<EffectEntity*>*& _matcherHideTool() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<EffectEntity*>*& _matcherId() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<EffectEntity*>*& _matcherInfinity() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<EffectEntity*>*& _matcherInvisible() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<EffectEntity*>*& _matcherLocalRotation() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<EffectEntity*>*& _matcherMinimapAlwaysVisible() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherMinimapArrow() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherMinimapArrowPing() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherMinimap() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherNaked() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherNotification() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherOnCollision() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherOnDeath() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherOther() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherParent() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherPersonal() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherPlayOut() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<EffectEntity*>*& _matcherPolymorph() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<EffectEntity*>*& _matcherPrefab() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<EffectEntity*>*& _matcherPrefabs() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<EffectEntity*>*& _matcherRadius() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<EffectEntity*>*& _matcherRotation() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<EffectEntity*>*& _matcherShake() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<EffectEntity*>*& _matcherShowCount() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<EffectEntity*>*& _matcherSingle() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<EffectEntity*>*& _matcherSocket() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<EffectEntity*>*& _matcherSound() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<EffectEntity*>*& _matcherSoundId() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<EffectEntity*>*& _matcherSources() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<EffectEntity*>*& _matcherSpawnTrigger() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<EffectEntity*>*& _matcherStartCondition() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<EffectEntity*>*& _matcherStartTime() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<EffectEntity*>*& _matcherTags() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<EffectEntity*>*& _matcherTarget() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<EffectEntity*>*& _matcherTargetMarker() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<EffectEntity*>*& _matcherToolFx() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<EffectEntity*>*& _matcherTrail() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherTransparency() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<EffectEntity*>*& _matcherUIPrefab() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<EffectEntity*>*& _matcherWarningArea() {
		return *(IMatcher1<EffectEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}

	 static IMatcher1<EffectEntity*>* get_ActivateNotify() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AAFEB0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Ambient() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0030))(0);
	}
	 static IMatcher1<EffectEntity*>* get_AnimatorArmed() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA02E4))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Animator() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB01CC))(0);
	}
	 static IMatcher1<EffectEntity*>* get_AnimatorSync() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0368))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Attach() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0504))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Blueprint() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FD94))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Bubble() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB06A0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Color() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB083C))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Count() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB09D8))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Duration() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0B74))(0);
	}
	 static IMatcher1<EffectEntity*>* get_EffectByCount() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0D10))(0);
	}
	 static IMatcher1<EffectEntity*>* get_EffectContainer() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB0EAC))(0);
	}
	 static IMatcher1<EffectEntity*>* get_FollowCamera() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1048))(0);
	}
	 static IMatcher1<EffectEntity*>* get_GrabView() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB11E4))(0);
	}
	 static IMatcher1<EffectEntity*>* get_HideTool() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1380))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Id() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9F8B8))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Infinity() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB151C))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Invisible() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA07BC))(0);
	}
	 static IMatcher1<EffectEntity*>* get_LocalRotation() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB16B8))(0);
	}
	 static IMatcher1<EffectEntity*>* get_MinimapAlwaysVisible() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1854))(0);
	}
	 static IMatcher1<EffectEntity*>* get_MinimapArrow() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA12BC))(0);
	}
	 static IMatcher1<EffectEntity*>* get_MinimapArrowPing() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB19F0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Minimap() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1B8C))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Naked() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1D28))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Notification() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB1EC4))(0);
	}
	 static IMatcher1<EffectEntity*>* get_OldBlueprint() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2060))(0);
	}
	 static IMatcher1<EffectEntity*>* get_OnCollision() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB21FC))(0);
	}
	 static IMatcher1<EffectEntity*>* get_OnDeath() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FFA8))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Other() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2398))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Parent() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA0620))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Personal() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2534))(0);
	}
	 static IMatcher1<EffectEntity*>* get_PlayOut() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB26D0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Polymorph() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2870))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Prefab() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2A10))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Prefabs() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2BB0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Radius() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2D50))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Rotation() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB2EF0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Shake() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3090))(0);
	}
	 static IMatcher1<EffectEntity*>* get_ShowCount() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3230))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Single() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FA54))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Socket() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB33D0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Sound() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3570))(0);
	}
	 static IMatcher1<EffectEntity*>* get_SoundId() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3710))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Sources() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB38B0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_SpawnTrigger() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3A50))(0);
	}
	 static IMatcher1<EffectEntity*>* get_StartCondition() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3BF0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_StartTime() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3D90))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Tags() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB3F30))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Target() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1A9FBF4))(0);
	}
	 static IMatcher1<EffectEntity*>* get_TargetMarker() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB40D0))(0);
	}
	 static IMatcher1<EffectEntity*>* get_ToolFx() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA0480))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Trail() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AA0144))(0);
	}
	 static IMatcher1<EffectEntity*>* get_Transparency() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB4270))(0);
	}
	 static IMatcher1<EffectEntity*>* get_UIPrefab() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB4410))(0);
	}
	 static IMatcher1<EffectEntity*>* get_WarningArea() {
		return ((IMatcher1<EffectEntity*>* (*)(void *))(Il2CppBase() + 0x1AB45B0))(0);
	}
	 static IAllOfMatcher1<EffectEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<EffectEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1AB4750))(0, indices);
	}
	 static IAllOfMatcher1<EffectEntity*>* AllOf_1(Il2CppArray<IMatcher1<EffectEntity*>*>* matchers) {
		return ((IAllOfMatcher1<EffectEntity*>* (*)(void *, Il2CppArray<IMatcher1<EffectEntity*>*>*))(Il2CppBase() + 0x1A9FF30))(0, matchers);
	}
	 static IAnyOfMatcher1<EffectEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<EffectEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1AB47C8))(0, indices);
	}
	 static IAnyOfMatcher1<EffectEntity*>* AnyOf_1(Il2CppArray<IMatcher1<EffectEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<EffectEntity*>* (*)(void *, Il2CppArray<IMatcher1<EffectEntity*>*>*))(Il2CppBase() + 0x1AB4840))(0, matchers);
	}

};

