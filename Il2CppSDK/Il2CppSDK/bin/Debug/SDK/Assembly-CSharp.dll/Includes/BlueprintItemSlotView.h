#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class BlueprintItemSlotView : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintItemSlotView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Resource*> T& _resource() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isShown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Bind(IUIWindow* window, TooltipView* tooltip, Resource* resource) {
		return ((T (*)(BlueprintItemSlotView*, IUIWindow*, TooltipView*, Resource*))(Il2CppBase() + 0x16C0F2C))(this, window, tooltip, resource);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BlueprintItemSlotView*, float))(Il2CppBase() + 0x16C125C))(this, deltaTime);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1678))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1864))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1870))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(BlueprintItemSlotView*, uintptr_t))(Il2CppBase() + 0x16C1880))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BlueprintItemSlotView*))(Il2CppBase() + 0x16C1890))(this);
	}
	template <typename T = void> T OnClickHoldedHandler(bool isPressed, float duration) {
		return ((T (*)(BlueprintItemSlotView*, bool, float))(Il2CppBase() + 0x16C1688))(this, isPressed, duration);
	}

};

