#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LicenseWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LicenseWindow"));
	}

	template <typename R = uintptr_t> R& _messageText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _rulesBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _acceptBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LicenseWindow*))(Il2CppBase() + 0x142C188))(this);
	}
	template <typename R = void> R OnAcceptClick() {
		return ((R (*)(LicenseWindow*))(Il2CppBase() + 0x142C378))(this);
	}
	template <typename R = void> R OnRulesClick() {
		return ((R (*)(LicenseWindow*))(Il2CppBase() + 0x142C3E0))(this);
	}

};

