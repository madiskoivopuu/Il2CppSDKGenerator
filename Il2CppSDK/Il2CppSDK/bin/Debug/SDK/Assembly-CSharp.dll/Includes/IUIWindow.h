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
	template <typename T = IUIWindowContext*> T get_Context() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IUIWindowsLayer*> T get_Layer() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_Showed(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_Showed(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_Closed(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_Closed(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInput(Action1float>* value) {
		return ((T (*)(IUIWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInput(Action1float>* value) {
		return ((T (*)(IUIWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnDraw(Action1float>* value) {
		return ((T (*)(IUIWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnDraw(Action1float>* value) {
		return ((T (*)(IUIWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_Shown() {
		return ((T (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Show(IUIWindowsLayer* layer, IUIWindowContext* context) {
		return ((T (*)(IUIWindow*, IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x0))(this, layer, context);
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

