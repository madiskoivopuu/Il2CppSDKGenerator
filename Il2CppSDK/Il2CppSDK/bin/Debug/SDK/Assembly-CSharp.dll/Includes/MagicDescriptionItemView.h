#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDescriptionItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDescriptionItemView"));
	}

	template <typename R = uintptr_t> R& _changeFxPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TextMonoBehaviour*> R& _counter() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TextImageMonoBehaviour*> R& _cooldown() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TextMonoBehaviour*> R& _timer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _cheatRemoveBtn() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = ItemEntity*> R& _item() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Nullable1<int32_t>*& _count() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x60);
	}
	 Nullable1<int32_t>*& _magicId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC46C))(this);
	}
	template <typename R = void> R OnCheatRemoveClick() {
		return ((R (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC50C))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(MagicDescriptionItemView*, TooltipView*))(Il2CppBase() + 0x1ACC510))(this, tooltipView);
	}
	template <typename R = void> R ShowNew() {
		return ((R (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC624))(this);
	}
	template <typename R = void> R UpdateView(GameEntity* target, MagicEntity* magic) {
		return ((R (*)(MagicDescriptionItemView*, GameEntity*, MagicEntity*))(Il2CppBase() + 0x1ACC700))(this, target, magic);
	}
	template <typename R = int64_t> R GetMagicLeftTime(MagicEntity* magic, int64_t now) {
		return ((R (*)(MagicDescriptionItemView*, MagicEntity*, int64_t))(Il2CppBase() + 0x1ACD160))(this, magic, now);
	}
	template <typename R = CooldownEntity*> R GetMagicShowCooldown(GameEntity* target, MagicDataEntity* magicData, ItemEntity* item) {
		return ((R (*)(MagicDescriptionItemView*, GameEntity*, MagicDataEntity*, ItemEntity*))(Il2CppBase() + 0x1ACD48C))(this, target, magicData, item);
	}
	template <typename R = ItemEntity*> R Initb__13_0() {
		return ((R (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACD724))(this);
	}

};

