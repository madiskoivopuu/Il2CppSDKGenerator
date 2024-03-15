#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIStackLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIStackLayer"));
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
	 Stack1<IUIWindowContext*>*& _stack() {
		return *(Stack1<IUIWindowContext*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _pivot() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& _name() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1<IUIWindow*>*& ShowWindowEvent() {
		return *(Action1<IUIWindow*>**)((uintptr_t)this + 0x48);
	}
	 Action1<IUIWindow*>*& CloseWindowEvent() {
		return *(Action1<IUIWindow*>**)((uintptr_t)this + 0x50);
	}

	template <typename R = UIWindowsLayerType> R get_Type() {
		return ((R (*)(UIStackLayer*))(Il2CppBase() + 0x1530210))(this);
	}
	template <typename R = void> R set_Type(UIWindowsLayerType value) {
		return ((R (*)(UIStackLayer*, UIWindowsLayerType))(Il2CppBase() + 0x1530218))(this, value);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(UIStackLayer*))(Il2CppBase() + 0x1530220))(this);
	}
	template <typename R = void> R set_Manager(UIWindowsManager* value) {
		return ((R (*)(UIStackLayer*, UIWindowsManager*))(Il2CppBase() + 0x1530228))(this, value);
	}
	template <typename R = IUIWindow*> R get_Current() {
		return ((R (*)(UIStackLayer*))(Il2CppBase() + 0x1530230))(this);
	}
	template <typename R = void> R set_Current(IUIWindow* value) {
		return ((R (*)(UIStackLayer*, IUIWindow*))(Il2CppBase() + 0x1530238))(this, value);
	}
	template <typename R = bool> R get_Visible() {
		return ((R (*)(UIStackLayer*))(Il2CppBase() + 0x1530240))(this);
	}
	template <typename R = void> R set_Visible(bool value) {
		return ((R (*)(UIStackLayer*, bool))(Il2CppBase() + 0x15302D8))(this, value);
	}
	template <typename R = void> R add_ShowWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UIStackLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x1530478))(this, value);
	}
	template <typename R = void> R remove_ShowWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UIStackLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x1530518))(this, value);
	}
	template <typename R = void> R add_CloseWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UIStackLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x15305B8))(this, value);
	}
	template <typename R = void> R remove_CloseWindowEvent(Action1<IUIWindow*>* value) {
		return ((R (*)(UIStackLayer*, Action1<IUIWindow*>*))(Il2CppBase() + 0x1530658))(this, value);
	}
	template <typename R = IUIWindow*> R ShowWindow(IUIWindowContext* context) {
		return ((R (*)(UIStackLayer*, IUIWindowContext*))(Il2CppBase() + 0x1530804))(this, context);
	}
	template <typename R = void> R OnWindowClosed(IUIWindow* window) {
		return ((R (*)(UIStackLayer*, IUIWindow*))(Il2CppBase() + 0x1530C1C))(this, window);
	}
	template <typename R = IUIWindow*> R Back() {
		return ((R (*)(UIStackLayer*))(Il2CppBase() + 0x1530DD8))(this);
	}
	template <typename R = void> R Close() {
		return ((R (*)(UIStackLayer*))(Il2CppBase() + 0x1531160))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(UIStackLayer*, float))(Il2CppBase() + 0x1531218))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(UIStackLayer*, float))(Il2CppBase() + 0x15312E4))(this, deltaTime);
	}
	template <typename R = IUIWindow*> R FindWindow(UIWindowType windowType) {
		return ((R (*)(UIStackLayer*, UIWindowType))(Il2CppBase() + 0x15313B0))(this, windowType);
	}

};

