#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIStackLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIStackLayer"));
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
	template <typename T = Stack1IUIWindowContext*>*> T& _stack() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _pivot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IUIWindow*>*> T& ShowWindowEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Action1IUIWindow*>*> T& CloseWindowEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = UIWindowsLayerType*> T get_Type() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530210))(this);
	}
	template <typename T = void> T set_Type(UIWindowsLayerType* value) {
		return ((T (*)(UIStackLayer*, UIWindowsLayerType*))(Il2CppBase() + 0x1530218))(this, value);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530220))(this);
	}
	template <typename T = void> T set_Manager(UIWindowsManager* value) {
		return ((T (*)(UIStackLayer*, UIWindowsManager*))(Il2CppBase() + 0x1530228))(this, value);
	}
	template <typename T = IUIWindow*> T get_Current() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530230))(this);
	}
	template <typename T = void> T set_Current(IUIWindow* value) {
		return ((T (*)(UIStackLayer*, IUIWindow*))(Il2CppBase() + 0x1530238))(this, value);
	}
	template <typename T = bool> T get_Visible() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530240))(this);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(UIStackLayer*, bool))(Il2CppBase() + 0x15302D8))(this, value);
	}
	template <typename T = void> T add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIStackLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x1530478))(this, value);
	}
	template <typename T = void> T remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIStackLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x1530518))(this, value);
	}
	template <typename T = void> T add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIStackLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x15305B8))(this, value);
	}
	template <typename T = void> T remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIStackLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x1530658))(this, value);
	}
	template <typename T = IUIWindow*> T ShowWindow(IUIWindowContext* context) {
		return ((T (*)(UIStackLayer*, IUIWindowContext*))(Il2CppBase() + 0x1530804))(this, context);
	}
	template <typename T = void> T OnWindowClosed(IUIWindow* window) {
		return ((T (*)(UIStackLayer*, IUIWindow*))(Il2CppBase() + 0x1530C1C))(this, window);
	}
	template <typename T = IUIWindow*> T Back() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530DD8))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1531160))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(UIStackLayer*, float))(Il2CppBase() + 0x1531218))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(UIStackLayer*, float))(Il2CppBase() + 0x15312E4))(this, deltaTime);
	}
	template <typename T = IUIWindow*> T FindWindow(UIWindowType* windowType) {
		return ((T (*)(UIStackLayer*, UIWindowType*))(Il2CppBase() + 0x15313B0))(this, windowType);
	}

};

