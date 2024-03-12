#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDescriptionItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDescriptionItemView"));
	}

	template <typename T = uintptr_t> T& _changeFxPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _cooldown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _cheatRemoveBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _item() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _count() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _magicId() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC46C))(this);
	}
	template <typename T = void> T OnCheatRemoveClick() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC50C))(this);
	}
	template <typename T = void> T Init(uintptr_t tooltipView) {
		return ((T (*)(MagicDescriptionItemView*, uintptr_t))(Il2CppBase() + 0x1ACC510))(this, tooltipView);
	}
	template <typename T = void> T ShowNew() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC624))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t target, uintptr_t magic) {
		return ((T (*)(MagicDescriptionItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ACC700))(this, target, magic);
	}
	template <typename T = int64_t> T GetMagicLeftTime(uintptr_t magic, int64_t now) {
		return ((T (*)(MagicDescriptionItemView*, uintptr_t, int64_t))(Il2CppBase() + 0x1ACD160))(this, magic, now);
	}
	template <typename T = uintptr_t> T GetMagicShowCooldown(uintptr_t target, uintptr_t magicData, uintptr_t item) {
		return ((T (*)(MagicDescriptionItemView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ACD48C))(this, target, magicData, item);
	}
	template <typename T = uintptr_t> T Initb__13_0() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACD724))(this);
	}

};

}
