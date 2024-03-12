#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class CharacterCreationWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterCreationWindow"));
	}

	template <typename T = uintptr_t> T& ClassSelectionHolder() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CharacterCreationHolder() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ApplyClassBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BackToClassBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RenameBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ServerName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ChangeServerBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& HairImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NextHairBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& PrevHairBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BeardImage() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& NextBeardBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& PrevBeardBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& HairColorImage() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& NextHairColorBtn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& PrevHairColorBtn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BodyImage() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& NextGenderBtn() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& PrevGenderBtn() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SkinColorImage() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& NextSkinColorBtn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& PrevSkinColorBtn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& EpicShowToggle() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& puppetOffset() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& puppetAngle() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PuppetClassRendererControllers() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& Fader() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _currentGender() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _currentHair() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _currentBeard() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _currentHairColor() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _currentSkinColor() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _currentFace() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& _currentClassName() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _hairs() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _beards() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _hairColors() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skinColors() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _faces() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& _needToChangeQuality() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = void*> T& _wasSent() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EC414))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EC99C))(this);
	}
	template <typename T = void> T UpdateCurrent(uintptr_t current, Il2CppList<uintptr_t>* list, int32_t slotIndex) {
		return ((T (*)(CharacterCreationWindow*, uintptr_t, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x13ED50C))(this, current, list, slotIndex);
	}
	template <typename T = void> T SetupGender() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13ED654))(this);
	}
	template <typename T = void> T OnEpicToggleClick() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13ED9E4))(this);
	}
	template <typename T = void> T ShowClassPuppets() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13ED218))(this);
	}
	template <typename T = void> T HideClassPuppets() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EDB90))(this);
	}
	template <typename T = void> T OnClassClick(uintptr_t puppetController) {
		return ((T (*)(CharacterCreationWindow*, uintptr_t))(Il2CppBase() + 0x13EDC40))(this, puppetController);
	}
	template <typename T = void> T OnClassApply() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EDE2C))(this);
	}
	template <typename T = void> T OnBackToClass() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EDF38))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CharacterCreationWindow*, float))(Il2CppBase() + 0x13EE004))(this, deltaTime);
	}
	template <typename T = void> T OnRegionClick() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE168))(this);
	}
	template <typename T = void> T OnGenderChanged() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE2F8))(this);
	}
	template <typename T = void> T OnCancelClick() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE358))(this);
	}
	template <typename T = void> T OnApplyClick() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE3C4))(this);
	}
	template <typename T = void> T OnRenameClick() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE458))(this);
	}
	template <typename T = void> T OnNext(uintptr_t current, void* list, int32_t slotIndex) {
		return ((T (*)(CharacterCreationWindow*, uintptr_t, void*, int32_t))(Il2CppBase() + 0x13EE5A0))(this, current, list, slotIndex);
	}
	template <typename T = void> T OnPrev(uintptr_t current, Il2CppList<uintptr_t>* list, int32_t slotIndex) {
		return ((T (*)(CharacterCreationWindow*, uintptr_t, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x13EE85C))(this, current, list, slotIndex);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE9B8))(this);
	}
	template <typename T = void> T SendStat(uintptr_t windowEvent) {
		return ((T (*)(CharacterCreationWindow*, uintptr_t))(Il2CppBase() + 0x13ED42C))(this, windowEvent);
	}
	template <typename T = void> T Awakeb__44_0() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEB0))(this);
	}
	template <typename T = void> T Awakeb__44_1() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEC0))(this);
	}
	template <typename T = void> T Awakeb__44_2() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEED0))(this);
	}
	template <typename T = void> T Awakeb__44_3() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEE0))(this);
	}
	template <typename T = void> T Awakeb__44_4() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEF0))(this);
	}
	template <typename T = void> T Awakeb__44_5() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF00))(this);
	}
	template <typename T = void> T Awakeb__44_6() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF10))(this);
	}
	template <typename T = void> T Awakeb__44_7() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF20))(this);
	}
	template <typename T = void> T Awakeb__44_8() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF30))(this);
	}
	template <typename T = void> T Awakeb__44_9() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF34))(this);
	}
	template <typename T = void> T Awakeb__44_10(bool v) {
		return ((T (*)(CharacterCreationWindow*, bool))(Il2CppBase() + 0x13EEF38))(this, v);
	}
	template <typename T = void> T OnBackToClassb__53_0() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF3C))(this);
	}
	template <typename T = void> T OnApplyClickb__58_0() {
		return ((T (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EF064))(this);
	}

};

}
