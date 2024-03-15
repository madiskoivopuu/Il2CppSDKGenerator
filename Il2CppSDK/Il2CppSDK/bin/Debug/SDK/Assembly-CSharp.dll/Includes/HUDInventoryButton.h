#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem.h" 

class HUDInventoryButton : public InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInventoryButton"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& AddImage() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& LockedImage() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& ItemNotActive() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& Charged() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = Il2CppString*> R& _buttonName() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = InputButton*> R& InputButton() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = InputEntity*> R& InputEntity() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	 static Il2CppDictionary<int32_t, Matcher1InputEntity*>*>*& _matchers() {
		return *(Il2CppDictionary<int32_t, Matcher1InputEntity*>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = SimpleJoystick*> R& _skillShot() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	 Nullable1bool>*& _lastGameInputIsEnabled() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x188);
	}
	template <typename R = Il2CppString*> R& _armingItemName() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = bool> R& _wasItem() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = bool> R& _needShowSkillShot() {
		return *(R*)((uintptr_t)this + 0x199);
	}

	template <typename R = uintptr_t> R IButtonMonoBehaviour_get_Button() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x1458924))(this);
	}
	template <typename R = InputButton*> R get_InputButton() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x145892C))(this);
	}
	template <typename R = void> R set_InputButton(InputButton* value) {
		return ((R (*)(HUDInventoryButton*, InputButton*))(Il2CppBase() + 0x1458934))(this, value);
	}
	template <typename R = InputEntity*> R get_InputEntity() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x1458944))(this);
	}
	template <typename R = void> R set_InputEntity(InputEntity* value) {
		return ((R (*)(HUDInventoryButton*, InputEntity*))(Il2CppBase() + 0x145894C))(this, value);
	}
	 static Matcher1InputEntity*>* GetMatcher(int32_t componentIndex, Il2CppArray<Il2CppString*>* componentNames) {
		return ((Matcher1InputEntity*>* (*)(void *, int32_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x145895C))(0, componentIndex, componentNames);
	}
	template <typename R = void> R Bind(IUIWindow* window, Il2CppString* buttonName, int32_t index, int32_t componentIndex, ItemEntity* defaultItem) {
		return ((R (*)(HUDInventoryButton*, IUIWindow*, Il2CppString*, int32_t, int32_t, ItemEntity*))(Il2CppBase() + 0x1458B90))(this, window, buttonName, index, componentIndex, defaultItem);
	}
	template <typename R = void> R Unbind(IUIWindow* window) {
		return ((R (*)(HUDInventoryButton*, IUIWindow*))(Il2CppBase() + 0x1459298))(this, window);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(HUDInventoryButton*, float))(Il2CppBase() + 0x14595F8))(this, deltaTime);
	}
	template <typename R = bool> R GameInputIsEnabled() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x1459C3C))(this);
	}
	template <typename R = void> R SetActive(Nullable1bool>* active, bool hard) {
		return ((R (*)(HUDInventoryButton*, Nullable1bool>*, bool))(Il2CppBase() + 0x145A69C))(this, active, hard);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDInventoryButton*, float))(Il2CppBase() + 0x145AC70))(this, deltaTime);
	}
	 ValueTuple3bool, int32_t, bool>* GetNeedShowSkillShot(bool showMsg) {
		return ((ValueTuple3bool, int32_t, bool>* (*)(HUDInventoryButton*, bool))(Il2CppBase() + 0x1459E64))(this, showMsg);
	}
	template <typename R = bool> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145AF68))(this, eventData);
	}
	template <typename R = void> R OnResourceChanged() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x145B43C))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145B614))(this, eventData);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x145BA44))(this);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145BB78))(this, eventData);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x145BBE4))(this);
	}
	template <typename R = void> R DestroySkillShotEntity() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x145A470))(this);
	}
	template <typename R = void> R ResetSkillShotEntity() {
		return ((R (*)(HUDInventoryButton*))(Il2CppBase() + 0x145B138))(this);
	}

};

