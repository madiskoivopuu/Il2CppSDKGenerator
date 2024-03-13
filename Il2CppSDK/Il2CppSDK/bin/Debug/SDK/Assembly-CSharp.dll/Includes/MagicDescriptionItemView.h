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
	template <typename T = TextMonoBehaviour*> T& _counter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TextImageMonoBehaviour*> T& _cooldown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TextMonoBehaviour*> T& _timer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = TooltipProxy*> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _cheatRemoveBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = ItemEntity*> T& _item() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Nullable1int32_t>*> T& _count() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Nullable1int32_t>*> T& _magicId() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC46C))(this);
	}
	template <typename T = void> T OnCheatRemoveClick() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC50C))(this);
	}
	template <typename T = void> T Init(TooltipView* tooltipView) {
		return ((T (*)(MagicDescriptionItemView*, TooltipView*))(Il2CppBase() + 0x1ACC510))(this, tooltipView);
	}
	template <typename T = void> T ShowNew() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACC624))(this);
	}
	template <typename T = void> T UpdateView(GameEntity* target, MagicEntity* magic) {
		return ((T (*)(MagicDescriptionItemView*, GameEntity*, MagicEntity*))(Il2CppBase() + 0x1ACC700))(this, target, magic);
	}
	template <typename T = int64_t> T GetMagicLeftTime(MagicEntity* magic, int64_t now) {
		return ((T (*)(MagicDescriptionItemView*, MagicEntity*, int64_t))(Il2CppBase() + 0x1ACD160))(this, magic, now);
	}
	template <typename T = CooldownEntity*> T GetMagicShowCooldown(GameEntity* target, MagicDataEntity* magicData, ItemEntity* item) {
		return ((T (*)(MagicDescriptionItemView*, GameEntity*, MagicDataEntity*, ItemEntity*))(Il2CppBase() + 0x1ACD48C))(this, target, magicData, item);
	}
	template <typename T = ItemEntity*> T Initb__13_0() {
		return ((T (*)(MagicDescriptionItemView*))(Il2CppBase() + 0x1ACD724))(this);
	}

};

