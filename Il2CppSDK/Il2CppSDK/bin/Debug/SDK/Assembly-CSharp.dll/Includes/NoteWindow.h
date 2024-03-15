#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NoteWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoteWindow"));
	}

	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& DeleteMessageBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B6740))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B684C))(this);
	}
	template <typename R = void> R OnDeleteMessage() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B6948))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B6B84))(this);
	}
	template <typename R = void> R ShowItem() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B779C))(this);
	}
	template <typename R = void> R ShowDialogue() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B6CD0))(this);
	}
	template <typename R = void> R ShowSupportMessage() {
		return ((R (*)(NoteWindow*))(Il2CppBase() + 0x13B71A8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(NoteWindow*, float))(Il2CppBase() + 0x13B7C1C))(this, deltaTime);
	}

};

