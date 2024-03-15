#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintItem"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Toggle() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& AttentionImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& LockImage() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& lockedAlpha() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipTrigger*> R& tooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& rarityView() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = BlueprintEntity*> R& _entity() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = GameEntity*> R& _avatar() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = TrophyRoadEntity*> R& _currentStep() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _notSeen() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _hasItemEntity() {
		return *(R*)((uintptr_t)this + 0x79);
	}
	template <typename R = Il2CppString*> R& Category() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	 Action2<BlueprintItem*, BlueprintEntity*>*& _onClicked() {
		return *(Action2<BlueprintItem*, BlueprintEntity*>**)((uintptr_t)this + 0x90);
	}

	template <typename R = uintptr_t> R IImageMonoBehaviour_get_Image() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0048))(this);
	}
	template <typename R = uintptr_t> R ITextMonoBehaviour_get_Text() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0050))(this);
	}
	template <typename R = uintptr_t> R IToggleMonoBehaviour_get_Toggle() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0058))(this);
	}
	template <typename R = BlueprintEntity*> R get_BindedEntity() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0060))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0068))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0070))(this);
	}
	template <typename R = Il2CppString*> R get_Category() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0078))(this);
	}
	template <typename R = void> R set_Category(Il2CppString* value) {
		return ((R (*)(BlueprintItem*, Il2CppString*))(Il2CppBase() + 0x16C0080))(this, value);
	}
	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0088))(this);
	}
	template <typename R = void> R set_RectTransform(uintptr_t value) {
		return ((R (*)(BlueprintItem*, uintptr_t))(Il2CppBase() + 0x16C0090))(this, value);
	}
	template <typename R = void> R Bind(IUIWindow* window, BlueprintEntity* entity, Action2<BlueprintItem*, BlueprintEntity*>* onClicked, GameEntity* avatar, TrophyRoadEntity* currentStep, bool notSeen, TooltipView* tooltipView) {
		return ((R (*)(BlueprintItem*, IUIWindow*, BlueprintEntity*, Action2<BlueprintItem*, BlueprintEntity*>*, GameEntity*, TrophyRoadEntity*, bool, TooltipView*))(Il2CppBase() + 0x16C0098))(this, window, entity, onClicked, avatar, currentStep, notSeen, tooltipView);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0820))(this);
	}
	template <typename R = void> R UpdateItem() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C04E0))(this);
	}
	 ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* GetTitleAndText() {
		return ((ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(BlueprintItem*))(Il2CppBase() + 0x16C09B4))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0DA4))(this);
	}
	template <typename R = void> R OnToggleValueChanged(bool value) {
		return ((R (*)(BlueprintItem*, bool))(Il2CppBase() + 0x16C0DCC))(this, value);
	}
	template <typename R = void> R CleanUpEntity(uintptr_t e) {
		return ((R (*)(BlueprintItem*, uintptr_t))(Il2CppBase() + 0x16C0EF0))(this, e);
	}
	template <typename R = void> R InvokeOnClick() {
		return ((R (*)(BlueprintItem*))(Il2CppBase() + 0x16C0EFC))(this);
	}

};

