#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIModalLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIModalLayer"));
	}

	template <typename T = UIWindowsLayerType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = UIWindowsManager*> T& Manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IUIWindow*> T& TopMost() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<IUIWindow*>*> T& _windows() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _pivot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Action1IUIWindow*>*> T& ShowWindowEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IUIWindow*>*> T& CloseWindowEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = UIWindowsLayerType*> T get_Type() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152D664))(this);
	}
	template <typename T = void> T set_Type(UIWindowsLayerType* value) {
		return ((T (*)(UIModalLayer*, UIWindowsLayerType*))(Il2CppBase() + 0x152D66C))(this, value);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152D674))(this);
	}
	template <typename T = void> T set_Manager(UIWindowsManager* value) {
		return ((T (*)(UIModalLayer*, UIWindowsManager*))(Il2CppBase() + 0x152D67C))(this, value);
	}
	template <typename T = IUIWindow*> T get_Current() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152D684))(this);
	}
	template <typename T = IUIWindow*> T get_TopMost() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152D6F4))(this);
	}
	template <typename T = void> T set_TopMost(IUIWindow* value) {
		return ((T (*)(UIModalLayer*, IUIWindow*))(Il2CppBase() + 0x152D6FC))(this, value);
	}
	template <typename T = void> T add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D704))(this, value);
	}
	template <typename T = void> T remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D7A4))(this, value);
	}
	template <typename T = void> T add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D844))(this, value);
	}
	template <typename T = void> T remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIModalLayer*, Action1IUIWindow*>*))(Il2CppBase() + 0x152D8E4))(this, value);
	}
	template <typename T = bool> T get_Visible() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152D984))(this);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(UIModalLayer*, bool))(Il2CppBase() + 0x152DA1C))(this, value);
	}
	template <typename T = IUIWindow*> T ShowWindow(IUIWindowContext* context) {
		return ((T (*)(UIModalLayer*, IUIWindowContext*))(Il2CppBase() + 0x152DCC8))(this, context);
	}
	template <typename T = void> T RefreshWindows() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152E200))(this);
	}
	template <typename T = bool> T SetMopMost(IUIWindow* window) {
		return ((T (*)(UIModalLayer*, IUIWindow*))(Il2CppBase() + 0x152E3BC))(this, window);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UIModalLayer*))(Il2CppBase() + 0x152E4FC))(this);
	}
	template <typename T = void> T OnWindowClosed(IUIWindow* window) {
		return ((T (*)(UIModalLayer*, IUIWindow*))(Il2CppBase() + 0x152E9C8))(this, window);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(UIModalLayer*, float))(Il2CppBase() + 0x152EBD4))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(UIModalLayer*, float))(Il2CppBase() + 0x152ECA8))(this, deltaTime);
	}
	template <typename T = IUIWindow*> T FindWindow(UIWindowType* windowType) {
		return ((T (*)(UIModalLayer*, UIWindowType*))(Il2CppBase() + 0x152EDE4))(this, windowType);
	}

};

