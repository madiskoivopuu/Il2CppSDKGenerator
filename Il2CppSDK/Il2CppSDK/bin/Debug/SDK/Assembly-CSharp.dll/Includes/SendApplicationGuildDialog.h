#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class SendApplicationGuildDialog: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendApplicationGuildDialog"));
	}

	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& MassageField() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MessageFieldLimit() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SendButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ClearColor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ErrorColor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362638))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362754))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362818))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362840))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362A74))(this);
	}
	template <typename T = void> T OnSendButtonPressed() {
		return ((T (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362AD0))(this);
	}
	template <typename T = void> T OnMassageFieldEdit(Il2CppString* text) {
		return ((T (*)(SendApplicationGuildDialog*, Il2CppString*))(Il2CppBase() + 0x1363218))(this, text);
	}

};

}
