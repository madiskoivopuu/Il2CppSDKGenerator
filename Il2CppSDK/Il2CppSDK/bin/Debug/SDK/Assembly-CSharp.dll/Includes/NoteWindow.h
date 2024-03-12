#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class NoteWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoteWindow"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DeleteMessageBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B6740))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B684C))(this);
	}
	template <typename T = void> T OnDeleteMessage() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B6948))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B6B84))(this);
	}
	template <typename T = void> T ShowItem() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B779C))(this);
	}
	template <typename T = void> T ShowDialogue() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B6CD0))(this);
	}
	template <typename T = void> T ShowSupportMessage() {
		return ((T (*)(NoteWindow*))(Il2CppBase() + 0x13B71A8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(NoteWindow*, float))(Il2CppBase() + 0x13B7C1C))(this, deltaTime);
	}

};

}
