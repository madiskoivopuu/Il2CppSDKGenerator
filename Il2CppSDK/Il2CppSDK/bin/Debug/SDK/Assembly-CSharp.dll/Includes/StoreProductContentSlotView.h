#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductContentSlotView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductContentSlotView"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& MoreText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Lock() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Bonus() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TooltipTrigger*> R& TooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _commonRarity() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _rareRarity() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _epicRarity() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _legendaryRarity() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& IsDiscarded() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = UIFXRarityController*> R& _cyclicItemMark() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Resource*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Action1Il2CppString*>*& OnClick() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R add_OnClick(Action1Il2CppString*>* value) {
		return ((R (*)(StoreProductContentSlotView*, Action1Il2CppString*>*))(Il2CppBase() + 0x183127C))(this, value);
	}
	template <typename R = void> R remove_OnClick(Action1Il2CppString*>* value) {
		return ((R (*)(StoreProductContentSlotView*, Action1Il2CppString*>*))(Il2CppBase() + 0x183131C))(this, value);
	}
	template <typename R = uintptr_t> R get_Animator() {
		return ((R (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x18313BC))(this);
	}
	template <typename R = void> R set_ItemRarity(Rarity* value) {
		return ((R (*)(StoreProductContentSlotView*, Rarity*))(Il2CppBase() + 0x1831470))(this, value);
	}
	template <typename R = void> R ClearRarity() {
		return ((R (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x1831600))(this);
	}
	template <typename R = void> R set_IsLocked(bool value) {
		return ((R (*)(StoreProductContentSlotView*, bool))(Il2CppBase() + 0x183166C))(this, value);
	}
	template <typename R = void> R set_IsBonusItem(bool value) {
		return ((R (*)(StoreProductContentSlotView*, bool))(Il2CppBase() + 0x1831808))(this, value);
	}
	template <typename R = bool> R get_IsInterServerMarkEnabled() {
		return ((R (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x18318F4))(this);
	}
	template <typename R = void> R SetInterServerMark(bool value, Rarity* rarity) {
		return ((R (*)(StoreProductContentSlotView*, bool, Rarity*))(Il2CppBase() + 0x1831920))(this, value, rarity);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(StoreProductContentSlotView*, uintptr_t))(Il2CppBase() + 0x1831F5C))(this, eventData);
	}
	template <typename R = bool> R HideTooltip() {
		return ((R (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x1831FE8))(this);
	}

};

