#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISingleLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISingleLayer"));
	}

	template <typename R = UIWindowsLayerType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = UIWindowsManager*> R& Manager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IUIWindow*> R& Current() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _pivot() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _name() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1<IUIWindow*>*& ShowWindowEvent() {
		return *(Action1<IUIWindow*>**)((uintptr_t)this + 0x40);
	}
	 Action1<IUIWindow*>*& CloseWindowEvent() {
		return *(Action1<IUIWindow*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = UIWindowsLayerType> R get_Type() {
		return ((R (*)(UISingleLayer*))(Il2CppBase() + 0x152F354))(this);
	}
	template <typename R = void> R set_Type(UIWindowsLayerType value) {
		return ((R (*)(UISingleLayer*, UIWindowsLayerType))(Il2CppBase() + 0x152F35C))(this, value);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(UISingleLayer*))(Il2CppBase() + 0x152F364))(this);
	}
	template <typename R = void> R set_Manager(UIWindowsManager* value) {
		return ((R (*)(UISingleLayer*, UIWindowsManager*))(Il2CppBase() + 0x152F36C))(this, value);
	}
	template <typename R = IUIWindow*> R get_Current() {
		return ((R (*)(UISingleLayer*))(Il2CppBase() + 0x152F374))(this);
	}
	template <typename R = void> R set_Current(IUIWindow* value) {
		return ((R (*)(UISingleLayer*, IUIWindow*))(Il2CppBase() + 0x152F37C))(this, value);
	}
	template <typename R = bool> R get_Visible() {
		return ((R (*)(UISingleLayer*))(Il2CppBase() + 0x152F384))(this);
	}
	template <typename R = void> R set_Visible(bool value) {
		return ((R (*)(UISingleLayer*, bool))(Il2CppBase() + 0x152F41C))(this, value);
	}
	template <typename R = void> R add_ShowWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UISingleLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x152F5BC))(this, value);
	}
	template <typename R = void> R remove_ShowWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UISingleLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x152F65C))(this, value);
	}
	template <typename R = void> R add_CloseWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UISingleLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x152F6FC))(this, value);
	}
	template <typename R = void> R remove_CloseWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UISingleLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x152F79C))(this, value);
	}
	template <typename R = IUIWindow*> R ShowWindow(IUIWindowContext* context) {
		return ((R (*)(UISingleLayer*, IUIWindowContext*))(Il2CppBase() + 0x152F8E8))(this, context);
	}
	template <typename R = void> R OnWindowClosed(IUIWindow* window) {
		return ((R (*)(UISingleLayer*, IUIWindow*))(Il2CppBase() + 0x152FC68))(this, window);
	}
	template <typename R = void> R Close() {
		return ((R (*)(UISingleLayer*))(Il2CppBase() + 0x152FE00))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(UISingleLayer*, float))(Il2CppBase() + 0x152FEB8))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(UISingleLayer*, float))(Il2CppBase() + 0x152FF84))(this, deltaTime);
	}
	template <typename R = IUIWindow*> R FindWindow(UIWindowType windowType) {
		return ((R (*)(UISingleLayer*, UIWindowType))(Il2CppBase() + 0x1530050))(this, windowType);
	}

};

