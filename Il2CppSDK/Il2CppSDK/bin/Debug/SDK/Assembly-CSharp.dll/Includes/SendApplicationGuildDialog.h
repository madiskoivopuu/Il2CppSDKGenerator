#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SendApplicationGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendApplicationGuildDialog"));
	}

	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& MassageField() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& MessageFieldLimit() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& SendButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ClearColor() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ErrorColor() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362638))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362754))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362818))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362840))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362A74))(this);
	}
	template <typename R = void> R OnSendButtonPressed() {
		return ((R (*)(SendApplicationGuildDialog*))(Il2CppBase() + 0x1362AD0))(this);
	}
	template <typename R = void> R OnMassageFieldEdit(Il2CppString* text) {
		return ((R (*)(SendApplicationGuildDialog*, Il2CppString*))(Il2CppBase() + 0x1363218))(this, text);
	}

};

