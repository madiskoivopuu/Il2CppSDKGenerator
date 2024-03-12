#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem" 

class HUDInventoryButton: InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInventoryButton"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& AddImage() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& LockedImage() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& ItemNotActive() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& Charged() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& _buttonName() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& InputButton() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& InputEntity() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> static T& _matchers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _skillShot() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = void*> T& _lastGameInputIsEnabled() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& _armingItemName() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = bool> T& _wasItem() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& _needShowSkillShot() {
		return *(T*)((uintptr_t)this + 0x199);
	}

	template <typename T = uintptr_t> T IButtonMonoBehaviour_get_Button() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x1458924))(this);
	}
	template <typename T = uintptr_t> T get_InputButton() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x145892C))(this);
	}
	template <typename T = void> T set_InputButton(uintptr_t value) {
		return ((T (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x1458934))(this, value);
	}
	template <typename T = uintptr_t> T get_InputEntity() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x1458944))(this);
	}
	template <typename T = void> T set_InputEntity(uintptr_t value) {
		return ((T (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145894C))(this, value);
	}
	template <typename T = void*> static T GetMatcher(int32_t componentIndex, Il2CppArray<uintptr_t>* componentNames) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x145895C))(0, componentIndex, componentNames);
	}
	template <typename T = void> T Bind(uintptr_t window, Il2CppString* buttonName, int32_t index, int32_t componentIndex, uintptr_t defaultItem) {
		return ((T (*)(HUDInventoryButton*, uintptr_t, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1458B90))(this, window, buttonName, index, componentIndex, defaultItem);
	}
	template <typename T = void> T Unbind(uintptr_t window) {
		return ((T (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x1459298))(this, window);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(HUDInventoryButton*, float))(Il2CppBase() + 0x14595F8))(this, deltaTime);
	}
	template <typename T = bool> T GameInputIsEnabled() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x1459C3C))(this);
	}
	template <typename T = void> T SetActive(void* active, bool hard) {
		return ((T (*)(HUDInventoryButton*, void*, bool))(Il2CppBase() + 0x145A69C))(this, active, hard);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDInventoryButton*, float))(Il2CppBase() + 0x145AC70))(this, deltaTime);
	}
	template <typename T = void*> T GetNeedShowSkillShot(bool showMsg) {
		return ((T (*)(HUDInventoryButton*, bool))(Il2CppBase() + 0x1459E64))(this, showMsg);
	}
	template <typename T = bool> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145AF68))(this, eventData);
	}
	template <typename T = void> T OnResourceChanged() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x145B43C))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145B614))(this, eventData);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x145BA44))(this);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(HUDInventoryButton*, uintptr_t))(Il2CppBase() + 0x145BB78))(this, eventData);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x145BBE4))(this);
	}
	template <typename T = void> T DestroySkillShotEntity() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x145A470))(this);
	}
	template <typename T = void> T ResetSkillShotEntity() {
		return ((T (*)(HUDInventoryButton*))(Il2CppBase() + 0x145B138))(this);
	}

};

}
