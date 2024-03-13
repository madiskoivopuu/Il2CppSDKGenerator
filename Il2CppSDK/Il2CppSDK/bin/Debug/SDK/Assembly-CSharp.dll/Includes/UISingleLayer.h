#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISingleLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISingleLayer"));
	}

	template <typename T = UIWindowsLayerType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = UIWindowsManager*> T& Manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IUIWindow*> T& Current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pivot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Action1IUIWindow*>*> T& ShowWindowEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IUIWindow*>*> T& CloseWindowEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = UIWindowsLayerType*> T get_Type() {
		return ((T (*)(UISingleLayer*))(Il2CppBase() + 0x152F354))(this);
	}
	template <typename T = void> T set_Type(UIWindowsLayerType* value) {
		return ((T (*)(UISingleLayer*, UIWindowsLayerType*))(Il2CppBase() + 0x152F35C))(this, value);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(UISingleLayer*))(Il2CppBase() + 0x152F364))(this);
	}
	template <typename T = void> T set_Manager(UIWindowsManager* value) {
		return ((T (*)(UISingleLayer*, UIWindowsManager*))(Il2CppBase() + 0x152F36C))(this, value);
	}
	template <typename T = IUIWindow*> T get_Current() {
		return ((T (*)(UISingleLayer*))(Il2CppBase() + 0x152F374))(this);
	}
	template <typename T = void> T set_Current(IUIWindow* value) {
		return ((T (*)(UISingleLayer*, IUIWindow*))(Il2CppBase() + 0x152F37C))(this, value);
	}
	template <typename T = bool> T get_Visible() {
		return ((T (*)(UISingleLayer*))(Il2CppBase() + 0x152F384))(this);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(UISingleLayer*, bool))(Il2CppBase() + 0x152F41C))(this, value);
	}
	template <typename T = void> T add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UISingleLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152F5BC))(this, value);
	}
	template <typename T = void> T remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UISingleLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152F65C))(this, value);
	}
	template <typename T = void> T add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UISingleLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152F6FC))(this, value);
	}
	template <typename T = void> T remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UISingleLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152F79C))(this, value);
	}
	template <typename T = IUIWindow*> T ShowWindow(IUIWindowContext* context) {
		return ((T (*)(UISingleLayer*, IUIWindowContext*))(Il2CppBase() + 0x152F8E8))(this, context);
	}
	template <typename T = void> T OnWindowClosed(IUIWindow* window) {
		return ((T (*)(UISingleLayer*, IUIWindow*))(Il2CppBase() + 0x152FC68))(this, window);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UISingleLayer*))(Il2CppBase() + 0x152FE00))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(UISingleLayer*, float))(Il2CppBase() + 0x152FEB8))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(UISingleLayer*, float))(Il2CppBase() + 0x152FF84))(this, deltaTime);
	}
	template <typename T = IUIWindow*> T FindWindow(UIWindowType* windowType) {
		return ((T (*)(UISingleLayer*, UIWindowType*))(Il2CppBase() + 0x1530050))(this, windowType);
	}

};

