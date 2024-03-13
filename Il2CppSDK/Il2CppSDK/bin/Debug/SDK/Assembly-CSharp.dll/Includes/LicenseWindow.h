#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LicenseWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LicenseWindow"));
	}

	template <typename T = uintptr_t> T& _messageText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _rulesBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _acceptBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LicenseWindow*))(Il2CppBase() + 0x142C188))(this);
	}
	template <typename T = void> T OnAcceptClick() {
		return ((T (*)(LicenseWindow*))(Il2CppBase() + 0x142C378))(this);
	}
	template <typename T = void> T OnRulesClick() {
		return ((T (*)(LicenseWindow*))(Il2CppBase() + 0x142C3E0))(this);
	}

};

