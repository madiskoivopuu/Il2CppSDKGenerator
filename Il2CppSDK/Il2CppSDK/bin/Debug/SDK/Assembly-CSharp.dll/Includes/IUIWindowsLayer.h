#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIWindowsLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIWindowsLayer"));
	}


	template <typename T = UIWindowsLayerType*> T get_Type() {
		return ((T (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IUIWindow*> T get_Current() {
		return ((T (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IUIWindow*> T ShowWindow(IUIWindowContext* context) {
		return ((T (*)(IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x0))(this, context);
	}
	template <typename T = IUIWindow*> T FindWindow(UIWindowType* windowType) {
		return ((T (*)(IUIWindowsLayer*, UIWindowType*))(Il2CppBase() + 0x0))(this, windowType);
	}
	template <typename T = void> T Close() {
		return ((T (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(IUIWindowsLayer*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(IUIWindowsLayer*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = bool> T get_Visible() {
		return ((T (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(IUIWindowsLayer*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

