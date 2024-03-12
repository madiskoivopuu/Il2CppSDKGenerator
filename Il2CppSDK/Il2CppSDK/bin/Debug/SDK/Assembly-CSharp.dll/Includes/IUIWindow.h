#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIWindow"));
	}


	template <typename T = int32_t> T get_WindowId() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_FullScreen() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ContextType() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Layer() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_Showed(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_Showed(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_Closed(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_Closed(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInput(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInput(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnDraw(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnDraw(void* value) {
		return ((T (*)(IUIWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_Shown() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Show(uintptr_t layer, uintptr_t context) {
		return ((T (*)(IUIWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, layer, context);
	}
	template <typename T = void> T Close() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BackOrClose() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(IUIWindow*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(IUIWindow*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}

};

}
