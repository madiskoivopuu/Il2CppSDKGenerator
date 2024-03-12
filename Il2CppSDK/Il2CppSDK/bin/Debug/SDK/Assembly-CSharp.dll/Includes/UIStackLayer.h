#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIStackLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIStackLayer"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _stack() {
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
	template <typename T = void*> T& ShowWindowEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& CloseWindowEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530210))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(UIStackLayer*, uintptr_t))(Il2CppBase() + 0x1530218))(this, value);
	}
	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530220))(this);
	}
	template <typename T = void> T set_Manager(uintptr_t value) {
		return ((T (*)(UIStackLayer*, uintptr_t))(Il2CppBase() + 0x1530228))(this, value);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530230))(this);
	}
	template <typename T = void> T set_Current(uintptr_t value) {
		return ((T (*)(UIStackLayer*, uintptr_t))(Il2CppBase() + 0x1530238))(this, value);
	}
	template <typename T = bool> T get_Visible() {
		return ((T (*)(UIStackLayer*))(Il2CppBase() + 0x1530240))(this);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(UIStackLayer*, bool))(Il2CppBase() + 0x15302D8))(this, value);
	}
	template <typename T = void> T add_ShowWindowEvent(void* value) {
		return ((T (*)(UIStackLayer*, void*))(Il2CppBase() + 0x1530478))(this, value);
	}
	template <typename T = void> T remove_ShowWindowEvent(void* value) {
		return ((T (*)(UIStackLayer*, void*))(Il2CppBase() + 0x1530518))(this, value);
	}
	template <typename T = void> T add_CloseWindowEvent(void* value) {
		return ((T (*)(UIStackLayer*, void*))(Il2CppBase() + 0x15305B8))(this, value);
	}
	template <typename T = void> T remove_CloseWindowEvent(void* value) {
		return ((T (*)(UIStackLayer*, void*))(Il2CppBase() + 0x1530658))(this, value);
	}
	template <typename T = uintptr_t> T ShowWindow(uintptr_t context) {
		return ((T (*)(UIStackLayer*, uintptr_t))(Il2CppBase() + 0x1530804))(this, context);
	}
	template <typename T = void> T OnWindowClosed(uintptr_t window) {
		return ((T (*)(UIStackLayer*, uintptr_t))(Il2CppBase() + 0x1530C1C))(this, window);
	}
	template <typename T = uintptr_t> T Back() {
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
	template <typename T = uintptr_t> T FindWindow(uintptr_t windowType) {
		return ((T (*)(UIStackLayer*, uintptr_t))(Il2CppBase() + 0x15313B0))(this, windowType);
	}

};

}
