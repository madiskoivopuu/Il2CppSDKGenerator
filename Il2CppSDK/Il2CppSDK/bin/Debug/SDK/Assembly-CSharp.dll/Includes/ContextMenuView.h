#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContextMenuView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContextMenuView"));
	}

	template <typename R = uintptr_t> R& CanvasRectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Arrow() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Offset() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& NormalColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& ImportantColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<uintptr_t>*& _buttons() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _closeAction() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Show(uintptr_t screenPos, uintptr_t closeAction, Il2CppArray<ContextAction>* actions) {
		return ((R (*)(ContextMenuView*, uintptr_t, uintptr_t, Il2CppArray<ContextAction>*))(Il2CppBase() + 0x15F2954))(this, screenPos, closeAction, actions);
	}
	template <typename R = void> R Show_1(uintptr_t screenPos, Il2CppArray<ContextAction>* actions) {
		return ((R (*)(ContextMenuView*, uintptr_t, Il2CppArray<ContextAction>*))(Il2CppBase() + 0x15F2C7C))(this, screenPos, actions);
	}
	template <typename R = void> R Show_2(uintptr_t target, uintptr_t closeAction, Il2CppArray<ContextAction>* actions) {
		return ((R (*)(ContextMenuView*, uintptr_t, uintptr_t, Il2CppArray<ContextAction>*))(Il2CppBase() + 0x15F2C88))(this, target, closeAction, actions);
	}
	template <typename R = void> R Show_3(uintptr_t target, Il2CppArray<ContextAction>* actions) {
		return ((R (*)(ContextMenuView*, uintptr_t, Il2CppArray<ContextAction>*))(Il2CppBase() + 0x15F2CFC))(this, target, actions);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(ContextMenuView*))(Il2CppBase() + 0x15F2D08))(this);
	}
	template <typename R = void> R Show_4(uintptr_t closeAction, Il2CppArray<ContextAction>* actions) {
		return ((R (*)(ContextMenuView*, uintptr_t, Il2CppArray<ContextAction>*))(Il2CppBase() + 0x15F29D8))(this, closeAction, actions);
	}
	template <typename R = void> R RebuildContextMenu(Il2CppArray<ContextAction>* actions) {
		return ((R (*)(ContextMenuView*, Il2CppArray<ContextAction>*))(Il2CppBase() + 0x15F2ECC))(this, actions);
	}
	template <typename R = uintptr_t> R GetAdjustedPosition(uintptr_t position) {
		return ((R (*)(ContextMenuView*, uintptr_t))(Il2CppBase() + 0x15F2A80))(this, position);
	}
	template <typename R = void> R CloseAndCallAction(uintptr_t calledAction) {
		return ((R (*)(ContextMenuView*, uintptr_t))(Il2CppBase() + 0x15F3368))(this, calledAction);
	}

};

