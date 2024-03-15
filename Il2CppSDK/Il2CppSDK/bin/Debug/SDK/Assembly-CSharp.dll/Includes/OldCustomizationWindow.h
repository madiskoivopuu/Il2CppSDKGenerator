#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OldCustomizationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OldCustomizationWindow"));
	}

	template <typename R = uintptr_t> R& CancelBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RenameBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ApplyPricePanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ApplyPriceIcon() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ApplyPriceText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& HairImage() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& NextHairBtn() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& PrevHairBtn() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& BeardImage() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& NextBeardBtn() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& PrevBeardBtn() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& HairColorImage() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& NextHairColorBtn() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& PrevHairColorBtn() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& BodyImage() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& NextGenderBtn() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& PrevGenderBtn() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& SkinColorImage() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& NextSkinColorBtn() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& PrevSkinColorBtn() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Gender*> R& _currentGender() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = ItemEntity*> R& _currentHair() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = ItemEntity*> R& _currentBeard() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = ItemEntity*> R& _currentHairColor() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = ItemEntity*> R& _currentSkinColor() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = ItemEntity*> R& _currentFace() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	 Il2CppList<ItemEntity*>*& _hairs() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x160);
	}
	 Il2CppList<ItemEntity*>*& _beards() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x168);
	}
	 Il2CppList<ItemEntity*>*& _hairColors() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x170);
	}
	 Il2CppList<ItemEntity*>*& _skinColors() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x178);
	}
	 Il2CppList<ItemEntity*>*& _faces() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x180);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DA484))(this);
	}
	template <typename R = void> R UpdateCurrent(uintptr_t current, Il2CppList<ItemEntity*>* list, int32_t slotIndex) {
		return ((R (*)(OldCustomizationWindow*, uintptr_t, Il2CppList<ItemEntity*>*, int32_t))(Il2CppBase() + 0x11DA8E0))(this, current, list, slotIndex);
	}
	template <typename R = void> R SetupGender() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DAA28))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DAE14))(this);
	}
	template <typename R = void> R OnGenderChanged() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB540))(this);
	}
	template <typename R = void> R ResetLook() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB594))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(OldCustomizationWindow*, float))(Il2CppBase() + 0x11DB5B0))(this, deltaTime);
	}
	template <typename R = void> R OnCancelClick() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB714))(this);
	}
	template <typename R = void> R OnApplyClick() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB780))(this);
	}
	template <typename R = void> R OnRenameClick() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB914))(this);
	}
	template <typename R = void> R OnNext(uintptr_t current, IList1ItemEntity*>* list, int32_t slotIndex) {
		return ((R (*)(OldCustomizationWindow*, uintptr_t, IList1ItemEntity*>*, int32_t))(Il2CppBase() + 0x11DBA50))(this, current, list, slotIndex);
	}
	template <typename R = void> R OnPrev(uintptr_t current, Il2CppList<ItemEntity*>* list, int32_t slotIndex) {
		return ((R (*)(OldCustomizationWindow*, uintptr_t, Il2CppList<ItemEntity*>*, int32_t))(Il2CppBase() + 0x11DBD18))(this, current, list, slotIndex);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBE7C))(this);
	}
	template <typename R = void> R Awakeb__35_0() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF08))(this);
	}
	template <typename R = void> R Awakeb__35_1() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF18))(this);
	}
	template <typename R = void> R Awakeb__35_2() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF28))(this);
	}
	template <typename R = void> R Awakeb__35_3() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF38))(this);
	}
	template <typename R = void> R Awakeb__35_4() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF48))(this);
	}
	template <typename R = void> R Awakeb__35_5() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF58))(this);
	}
	template <typename R = void> R Awakeb__35_6() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF68))(this);
	}
	template <typename R = void> R Awakeb__35_7() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF78))(this);
	}
	template <typename R = void> R Awakeb__35_8() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF88))(this);
	}
	template <typename R = void> R Awakeb__35_9() {
		return ((R (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF8C))(this);
	}

};

