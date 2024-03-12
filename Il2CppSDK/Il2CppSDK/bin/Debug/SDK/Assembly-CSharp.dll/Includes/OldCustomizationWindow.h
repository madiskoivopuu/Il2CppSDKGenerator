#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class OldCustomizationWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OldCustomizationWindow"));
	}

	template <typename T = uintptr_t> T& CancelBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RenameBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ApplyPricePanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ApplyPriceIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ApplyPriceText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& HairImage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NextHairBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PrevHairBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BeardImage() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NextBeardBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& PrevBeardBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& HairColorImage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& NextHairColorBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& PrevHairColorBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BodyImage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& NextGenderBtn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& PrevGenderBtn() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& SkinColorImage() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& NextSkinColorBtn() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& PrevSkinColorBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _currentGender() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _currentHair() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _currentBeard() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _currentHairColor() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _currentSkinColor() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _currentFace() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _hairs() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _beards() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _hairColors() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skinColors() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _faces() {
		return *(T*)((uintptr_t)this + 0x180);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DA484))(this);
	}
	template <typename T = void> T UpdateCurrent(uintptr_t current, Il2CppList<uintptr_t>* list, int32_t slotIndex) {
		return ((T (*)(OldCustomizationWindow*, uintptr_t, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x11DA8E0))(this, current, list, slotIndex);
	}
	template <typename T = void> T SetupGender() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DAA28))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DAE14))(this);
	}
	template <typename T = void> T OnGenderChanged() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB540))(this);
	}
	template <typename T = void> T ResetLook() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB594))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(OldCustomizationWindow*, float))(Il2CppBase() + 0x11DB5B0))(this, deltaTime);
	}
	template <typename T = void> T OnCancelClick() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB714))(this);
	}
	template <typename T = void> T OnApplyClick() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB780))(this);
	}
	template <typename T = void> T OnRenameClick() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DB914))(this);
	}
	template <typename T = void> T OnNext(uintptr_t current, void* list, int32_t slotIndex) {
		return ((T (*)(OldCustomizationWindow*, uintptr_t, void*, int32_t))(Il2CppBase() + 0x11DBA50))(this, current, list, slotIndex);
	}
	template <typename T = void> T OnPrev(uintptr_t current, Il2CppList<uintptr_t>* list, int32_t slotIndex) {
		return ((T (*)(OldCustomizationWindow*, uintptr_t, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x11DBD18))(this, current, list, slotIndex);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBE7C))(this);
	}
	template <typename T = void> T Awakeb__35_0() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF08))(this);
	}
	template <typename T = void> T Awakeb__35_1() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF18))(this);
	}
	template <typename T = void> T Awakeb__35_2() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF28))(this);
	}
	template <typename T = void> T Awakeb__35_3() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF38))(this);
	}
	template <typename T = void> T Awakeb__35_4() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF48))(this);
	}
	template <typename T = void> T Awakeb__35_5() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF58))(this);
	}
	template <typename T = void> T Awakeb__35_6() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF68))(this);
	}
	template <typename T = void> T Awakeb__35_7() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF78))(this);
	}
	template <typename T = void> T Awakeb__35_8() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF88))(this);
	}
	template <typename T = void> T Awakeb__35_9() {
		return ((T (*)(OldCustomizationWindow*))(Il2CppBase() + 0x11DBF8C))(this);
	}

};

}
