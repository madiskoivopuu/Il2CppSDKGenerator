#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIWindowsLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIWindowsLayer"));
	}


	template <typename R = UIWindowsLayerType*> R get_Type() {
		return ((R (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IUIWindow*> R get_Current() {
		return ((R (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IUIWindow*> R ShowWindow(IUIWindowContext* context) {
		return ((R (*)(IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x0))(this, context);
	}
	template <typename R = IUIWindow*> R FindWindow(UIWindowType* windowType) {
		return ((R (*)(IUIWindowsLayer*, UIWindowType*))(Il2CppBase() + 0x0))(this, windowType);
	}
	template <typename R = void> R Close() {
		return ((R (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(IUIWindowsLayer*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(IUIWindowsLayer*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = bool> R get_Visible() {
		return ((R (*)(IUIWindowsLayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Visible(bool value) {
		return ((R (*)(IUIWindowsLayer*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(IUIWindowsLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

