#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectMatcher"));
	}

	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherActivateNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherAmbient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherAnimatorArmed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherAnimatorSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherEffectByCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherEffectContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherGrabView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherHideTool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherMinimapAlwaysVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherMinimapArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherMinimapArrowPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherMinimap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherNaked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherOnCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherPlayOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherPolymorph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherPrefabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherShowCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherSingle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherSoundId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherSources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherSpawnTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherStartCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherTargetMarker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherToolFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherTrail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherTransparency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherUIPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T& _matcherWarningArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}

	template <typename T = IMatcher1EffectEntity*>*> static T get_ActivateNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AAFEB0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Ambient() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB0030))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_AnimatorArmed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AA02E4))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Animator() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB01CC))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_AnimatorSync() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB0368))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Attach() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB0504))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A9FD94))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Bubble() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB06A0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Color() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB083C))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB09D8))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB0B74))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_EffectByCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB0D10))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_EffectContainer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB0EAC))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_FollowCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB1048))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_GrabView() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB11E4))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_HideTool() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB1380))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A9F8B8))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Infinity() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB151C))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Invisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AA07BC))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_LocalRotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB16B8))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_MinimapAlwaysVisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB1854))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_MinimapArrow() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AA12BC))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_MinimapArrowPing() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB19F0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Minimap() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB1B8C))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Naked() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB1D28))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Notification() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB1EC4))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2060))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_OnCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB21FC))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_OnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A9FFA8))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Other() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2398))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AA0620))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2534))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_PlayOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB26D0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Polymorph() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2870))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Prefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2A10))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Prefabs() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2BB0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Radius() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2D50))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Rotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB2EF0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Shake() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3090))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_ShowCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3230))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Single() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A9FA54))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Socket() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB33D0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Sound() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3570))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_SoundId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3710))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Sources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB38B0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_SpawnTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3A50))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_StartCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3BF0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3D90))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB3F30))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A9FBF4))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_TargetMarker() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB40D0))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_ToolFx() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AA0480))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Trail() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AA0144))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_Transparency() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB4270))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_UIPrefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB4410))(0);
	}
	template <typename T = IMatcher1EffectEntity*>*> static T get_WarningArea() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB45B0))(0);
	}
	template <typename T = IAllOfMatcher1EffectEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AB4750))(0, indices);
	}
	template <typename T = IAllOfMatcher1EffectEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A9FF30))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1EffectEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AB47C8))(0, indices);
	}
	template <typename T = IAnyOfMatcher1EffectEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AB4840))(0, matchers);
	}

};

