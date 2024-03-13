#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintItem"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AttentionImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LockImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& lockedAlpha() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = TooltipTrigger*> T& tooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& rarityView() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = BlueprintEntity*> T& _entity() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = GameEntity*> T& _avatar() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = TrophyRoadEntity*> T& _currentStep() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _notSeen() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _hasItemEntity() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = Il2CppString*> T& Category() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Action2BlueprintItem*, BlueprintEntity*>*> T& _onClicked() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = uintptr_t> T IImageMonoBehaviour_get_Image() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0048))(this);
	}
	template <typename T = uintptr_t> T ITextMonoBehaviour_get_Text() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0050))(this);
	}
	template <typename T = uintptr_t> T IToggleMonoBehaviour_get_Toggle() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0058))(this);
	}
	template <typename T = BlueprintEntity*> T get_BindedEntity() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0060))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0068))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0070))(this);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0078))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(BlueprintItem*, Il2CppString*))(Il2CppBase() + 0x16C0080))(this, value);
	}
	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0088))(this);
	}
	template <typename T = void> T set_RectTransform(uintptr_t value) {
		return ((T (*)(BlueprintItem*, uintptr_t))(Il2CppBase() + 0x16C0090))(this, value);
	}
	template <typename T = void> T Bind(IUIWindow* window, BlueprintEntity* entity, Action2BlueprintItem*, BlueprintEntity*>* onClicked, GameEntity* avatar, TrophyRoadEntity* currentStep, bool notSeen, TooltipView* tooltipView) {
		return ((T (*)(BlueprintItem*, IUIWindow*, BlueprintEntity*, Action2BlueprintItem*, BlueprintEntity*>*, GameEntity*, TrophyRoadEntity*, bool, TooltipView*))(Il2CppBase() + 0x16C0098))(this, window, entity, onClicked, avatar, currentStep, notSeen, tooltipView);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0820))(this);
	}
	template <typename T = void> T UpdateItem() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C04E0))(this);
	}
	template <typename T = ValueTuple2Il2CppString*, Il2CppArray<uintptr_t>*>*> T GetTitleAndText() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C09B4))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0DA4))(this);
	}
	template <typename T = void> T OnToggleValueChanged(bool value) {
		return ((T (*)(BlueprintItem*, bool))(Il2CppBase() + 0x16C0DCC))(this, value);
	}
	template <typename T = void> T CleanUpEntity(uintptr_t e) {
		return ((T (*)(BlueprintItem*, uintptr_t))(Il2CppBase() + 0x16C0EF0))(this, e);
	}
	template <typename T = void> T InvokeOnClick() {
		return ((T (*)(BlueprintItem*))(Il2CppBase() + 0x16C0EFC))(this);
	}

};

