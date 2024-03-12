#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContextMenuView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContextMenuView"));
	}

	template <typename T = uintptr_t> T& CanvasRectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& Offset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NormalColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ImportantColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _closeAction() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Show(Il2CppVector3 screenPos, uintptr_t closeAction, Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ContextMenuView*, Il2CppVector3, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F2954))(this, screenPos, closeAction, actions);
	}
	template <typename T = void> T Show_1(Il2CppVector3 screenPos, Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ContextMenuView*, Il2CppVector3, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F2C7C))(this, screenPos, actions);
	}
	template <typename T = void> T Show_2(uintptr_t target, uintptr_t closeAction, Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ContextMenuView*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F2C88))(this, target, closeAction, actions);
	}
	template <typename T = void> T Show_3(uintptr_t target, Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ContextMenuView*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F2CFC))(this, target, actions);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ContextMenuView*))(Il2CppBase() + 0x15F2D08))(this);
	}
	template <typename T = void> T Show_4(uintptr_t closeAction, Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ContextMenuView*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F29D8))(this, closeAction, actions);
	}
	template <typename T = void> T RebuildContextMenu(Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ContextMenuView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F2ECC))(this, actions);
	}
	template <typename T = Il2CppVector2> T GetAdjustedPosition(Il2CppVector3 position) {
		return ((T (*)(ContextMenuView*, Il2CppVector3))(Il2CppBase() + 0x15F2A80))(this, position);
	}
	template <typename T = void> T CloseAndCallAction(uintptr_t calledAction) {
		return ((T (*)(ContextMenuView*, uintptr_t))(Il2CppBase() + 0x15F3368))(this, calledAction);
	}

};

}
