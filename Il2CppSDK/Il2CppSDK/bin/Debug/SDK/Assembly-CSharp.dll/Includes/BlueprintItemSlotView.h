#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class BlueprintItemSlotView : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintItemSlotView"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Resource> R& _resource() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _isShown() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Bind(IUIWindow* window, TooltipView* tooltip, Resource resource) {
		return ((R (*)(BlueprintItemSlotView*, IUIWindow*, TooltipView*, Resource))(Il2CppBase() + 0x16C0F2C))(this, window, tooltip, resource);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BlueprintItemSlotView*, float))(Il2CppBase() + 0x16C125C))(this, deltaTime);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1678))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1864))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1870))(this, eventData);
	}
	template <typename R = void> R OnPointerExit(uintptr_t eventData) {
		return ((R (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1880))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(BlueprintItemSlotView*))(Il2CppBase() + 0x16C1890))(this);
	}
	template <typename R = void> R OnClickHoldedHandler(bool isPressed, float duration) {
		return ((R (*)(BlueprintItemSlotView*, bool, float))(Il2CppBase() + 0x16C1688))(this, isPressed, duration);
	}

};

