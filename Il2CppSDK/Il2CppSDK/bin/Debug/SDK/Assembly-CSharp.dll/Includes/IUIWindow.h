#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIWindow"));
	}


	template <typename R = int32_t> R get_WindowId() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_FullScreen() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_ContextType() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IUIWindowContext*> R get_Context() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IUIWindowsLayer*> R get_Layer() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_Showed(Action1<IUIWindow*>* value) {
		return ((R (*)(IUIWindow*, Action1<IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_Showed(Action1<IUIWindow*>* value) {
		return ((R (*)(IUIWindow*, Action1<IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_Closed(Action1<IUIWindow*>* value) {
		return ((R (*)(IUIWindow*, Action1<IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_Closed(Action1<IUIWindow*>* value) {
		return ((R (*)(IUIWindow*, Action1<IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInput(Action1<float>* value) {
		return ((R (*)(IUIWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInput(Action1<float>* value) {
		return ((R (*)(IUIWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnDraw(Action1<float>* value) {
		return ((R (*)(IUIWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnDraw(Action1<float>* value) {
		return ((R (*)(IUIWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_Shown() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Show(IUIWindowsLayer* layer, IUIWindowContext* context) {
		return ((R (*)(IUIWindow*, IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x0))(this, layer, context);
	}
	template <typename R = void> R Close() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R BackOrClose() {
		return ((R (*)(IUIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(IUIWindow*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(IUIWindow*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}

};

