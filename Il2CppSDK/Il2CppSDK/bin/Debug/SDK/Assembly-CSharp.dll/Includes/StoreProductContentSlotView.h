#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductContentSlotView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductContentSlotView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& MoreText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Lock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Bonus() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TooltipTrigger*> T& TooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _commonRarity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _rareRarity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _epicRarity() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _legendaryRarity() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsDiscarded() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = UIFXRarityController*> T& _cyclicItemMark() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Resource*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Action1Il2CppString*>*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T add_OnClick(Action1Il2CppString*>* value) {
		return ((T (*)(StoreProductContentSlotView*, Action1Il2CppString*>*))(Il2CppBase() + 0x183127C))(this, value);
	}
	template <typename T = void> T remove_OnClick(Action1Il2CppString*>* value) {
		return ((T (*)(StoreProductContentSlotView*, Action1Il2CppString*>*))(Il2CppBase() + 0x183131C))(this, value);
	}
	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x18313BC))(this);
	}
	template <typename T = void> T set_ItemRarity(Rarity* value) {
		return ((T (*)(StoreProductContentSlotView*, Rarity*))(Il2CppBase() + 0x1831470))(this, value);
	}
	template <typename T = void> T ClearRarity() {
		return ((T (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x1831600))(this);
	}
	template <typename T = void> T set_IsLocked(bool value) {
		return ((T (*)(StoreProductContentSlotView*, bool))(Il2CppBase() + 0x183166C))(this, value);
	}
	template <typename T = void> T set_IsBonusItem(bool value) {
		return ((T (*)(StoreProductContentSlotView*, bool))(Il2CppBase() + 0x1831808))(this, value);
	}
	template <typename T = bool> T get_IsInterServerMarkEnabled() {
		return ((T (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x18318F4))(this);
	}
	template <typename T = void> T SetInterServerMark(bool value, Rarity* rarity) {
		return ((T (*)(StoreProductContentSlotView*, bool, Rarity*))(Il2CppBase() + 0x1831920))(this, value, rarity);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(StoreProductContentSlotView*, uintptr_t))(Il2CppBase() + 0x1831F5C))(this, eventData);
	}
	template <typename T = bool> T HideTooltip() {
		return ((T (*)(StoreProductContentSlotView*))(Il2CppBase() + 0x1831FE8))(this);
	}

};

