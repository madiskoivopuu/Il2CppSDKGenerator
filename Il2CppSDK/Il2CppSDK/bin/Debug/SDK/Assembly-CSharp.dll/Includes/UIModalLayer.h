#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIModalLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIModalLayer"));
	}

	template <typename R = UIWindowsLayerType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = UIWindowsManager*> R& Manager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IUIWindow*> R& TopMost() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<IUIWindow*>*& _windows() {
		return *(Il2CppList<IUIWindow*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _pivot() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& _name() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1IUIWindow*>*& ShowWindowEvent() {
		return *(Action1IUIWindow*>**)((uintptr_t)this + 0x40);
	}
	 Action1IUIWindow*>*& CloseWindowEvent() {
		return *(Action1IUIWindow*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = UIWindowsLayerType*> R get_Type() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152D664))(this);
	}
	template <typename R = void> R set_Type(UIWindowsLayerType* value) {
		return ((R (*)(UIModalLayer*, UIWindowsLayerType*))(Il2CppBase() + 0x152D66C))(this, value);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152D674))(this);
	}
	template <typename R = void> R set_Manager(UIWindowsManager* value) {
		return ((R (*)(UIModalLayer*, UIWindowsManager*))(Il2CppBase() + 0x152D67C))(this, value);
	}
	template <typename R = IUIWindow*> R get_Current() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152D684))(this);
	}
	template <typename R = IUIWindow*> R get_TopMost() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152D6F4))(this);
	}
	template <typename R = void> R set_TopMost(IUIWindow* value) {
		return ((R (*)(UIModalLayer*, IUIWindow*))(Il2CppBase() + 0x152D6FC))(this, value);
	}
	template <typename R = void> R add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D704))(this, value);
	}
	template <typename R = void> R remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D7A4))(this, value);
	}
	template <typename R = void> R add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D844))(this, value);
	}
	template <typename R = void> R remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D8E4))(this, value);
	}
	template <typename R = bool> R get_Visible() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152D984))(this);
	}
	template <typename R = void> R set_Visible(bool value) {
		return ((R (*)(UIModalLayer*, bool))(Il2CppBase() + 0x152DA1C))(this, value);
	}
	template <typename R = IUIWindow*> R ShowWindow(IUIWindowContext* context) {
		return ((R (*)(UIModalLayer*, IUIWindowContext*))(Il2CppBase() + 0x152DCC8))(this, context);
	}
	template <typename R = void> R RefreshWindows() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152E200))(this);
	}
	template <typename R = bool> R SetMopMost(IUIWindow* window) {
		return ((R (*)(UIModalLayer*, IUIWindow*))(Il2CppBase() + 0x152E3BC))(this, window);
	}
	template <typename R = void> R Close() {
		return ((R (*)(UIModalLayer*))(Il2CppBase() + 0x152E4FC))(this);
	}
	template <typename R = void> R OnWindowClosed(IUIWindow* window) {
		return ((R (*)(UIModalLayer*, IUIWindow*))(Il2CppBase() + 0x152E9C8))(this, window);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(UIModalLayer*, float))(Il2CppBase() + 0x152EBD4))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(UIModalLayer*, float))(Il2CppBase() + 0x152ECA8))(this, deltaTime);
	}
	template <typename R = IUIWindow*> R FindWindow(UIWindowType* windowType) {
		return ((R (*)(UIModalLayer*, UIWindowType*))(Il2CppBase() + 0x152EDE4))(this, windowType);
	}

};

