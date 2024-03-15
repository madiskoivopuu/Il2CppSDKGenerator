#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CharacterCreationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterCreationWindow"));
	}

	template <typename R = ClassInfoBase*> R& ClassSelectionHolder() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ClassInfoBase*> R& CharacterCreationHolder() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ApplyClassBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& BackToClassBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& RenameBtn() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& ServerName() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& ChangeServerBtn() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& HairImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& NextHairBtn() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& PrevHairBtn() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& BeardImage() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& NextBeardBtn() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& PrevBeardBtn() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& HairColorImage() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& NextHairColorBtn() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& PrevHairColorBtn() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& BodyImage() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& NextGenderBtn() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& PrevGenderBtn() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& SkinColorImage() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& NextSkinColorBtn() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& PrevSkinColorBtn() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& EpicShowToggle() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = float> R& puppetOffset() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = float> R& puppetAngle() {
		return *(R*)((uintptr_t)this + 0x14C);
	}
	template <typename R = Il2CppArray<PuppetClassRendererController*>*> R& PuppetClassRendererControllers() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = FaderBase*> R& Fader() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = Gender*> R& _currentGender() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = ItemEntity*> R& _currentHair() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = ItemEntity*> R& _currentBeard() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = ItemEntity*> R& _currentHairColor() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = ItemEntity*> R& _currentSkinColor() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = ItemEntity*> R& _currentFace() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = Il2CppString*> R& _currentClassName() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	 Il2CppList<ItemEntity*>*& _hairs() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x198);
	}
	 Il2CppList<ItemEntity*>*& _beards() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x1A0);
	}
	 Il2CppList<ItemEntity*>*& _hairColors() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x1A8);
	}
	 Il2CppList<ItemEntity*>*& _skinColors() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x1B0);
	}
	 Il2CppList<ItemEntity*>*& _faces() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x1B8);
	}
	template <typename R = bool> R& _needToChangeQuality() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	 HashSet1ClientStartWindowEvent*>*& _wasSent() {
		return *(HashSet1ClientStartWindowEvent*>**)((uintptr_t)this + 0x1C8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EC414))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EC99C))(this);
	}
	template <typename R = void> R UpdateCurrent(uintptr_t current, Il2CppList<ItemEntity*>* list, int32_t slotIndex) {
		return ((R (*)(CharacterCreationWindow*, uintptr_t, Il2CppList<ItemEntity*>*, int32_t))(Il2CppBase() + 0x13ED50C))(this, current, list, slotIndex);
	}
	template <typename R = void> R SetupGender() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13ED654))(this);
	}
	template <typename R = void> R OnEpicToggleClick() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13ED9E4))(this);
	}
	template <typename R = void> R ShowClassPuppets() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13ED218))(this);
	}
	template <typename R = void> R HideClassPuppets() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EDB90))(this);
	}
	template <typename R = void> R OnClassClick(PuppetClassRendererController* puppetController) {
		return ((R (*)(CharacterCreationWindow*, PuppetClassRendererController*))(Il2CppBase() + 0x13EDC40))(this, puppetController);
	}
	template <typename R = void> R OnClassApply() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EDE2C))(this);
	}
	template <typename R = void> R OnBackToClass() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EDF38))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CharacterCreationWindow*, float))(Il2CppBase() + 0x13EE004))(this, deltaTime);
	}
	template <typename R = void> R OnRegionClick() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE168))(this);
	}
	template <typename R = void> R OnGenderChanged() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE2F8))(this);
	}
	template <typename R = void> R OnCancelClick() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE358))(this);
	}
	template <typename R = void> R OnApplyClick() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE3C4))(this);
	}
	template <typename R = void> R OnRenameClick() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE458))(this);
	}
	template <typename R = void> R OnNext(uintptr_t current, IList1ItemEntity*>* list, int32_t slotIndex) {
		return ((R (*)(CharacterCreationWindow*, uintptr_t, IList1ItemEntity*>*, int32_t))(Il2CppBase() + 0x13EE5A0))(this, current, list, slotIndex);
	}
	template <typename R = void> R OnPrev(uintptr_t current, Il2CppList<ItemEntity*>* list, int32_t slotIndex) {
		return ((R (*)(CharacterCreationWindow*, uintptr_t, Il2CppList<ItemEntity*>*, int32_t))(Il2CppBase() + 0x13EE85C))(this, current, list, slotIndex);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EE9B8))(this);
	}
	template <typename R = void> R SendStat(ClientStartWindowEvent* windowEvent) {
		return ((R (*)(CharacterCreationWindow*, ClientStartWindowEvent*))(Il2CppBase() + 0x13ED42C))(this, windowEvent);
	}
	template <typename R = void> R Awakeb__44_0() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEB0))(this);
	}
	template <typename R = void> R Awakeb__44_1() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEC0))(this);
	}
	template <typename R = void> R Awakeb__44_2() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEED0))(this);
	}
	template <typename R = void> R Awakeb__44_3() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEE0))(this);
	}
	template <typename R = void> R Awakeb__44_4() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEEF0))(this);
	}
	template <typename R = void> R Awakeb__44_5() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF00))(this);
	}
	template <typename R = void> R Awakeb__44_6() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF10))(this);
	}
	template <typename R = void> R Awakeb__44_7() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF20))(this);
	}
	template <typename R = void> R Awakeb__44_8() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF30))(this);
	}
	template <typename R = void> R Awakeb__44_9() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF34))(this);
	}
	template <typename R = void> R Awakeb__44_10(bool v) {
		return ((R (*)(CharacterCreationWindow*, bool))(Il2CppBase() + 0x13EEF38))(this, v);
	}
	template <typename R = void> R OnBackToClassb__53_0() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EEF3C))(this);
	}
	template <typename R = void> R OnApplyClickb__58_0() {
		return ((R (*)(CharacterCreationWindow*))(Il2CppBase() + 0x13EF064))(this);
	}

};

