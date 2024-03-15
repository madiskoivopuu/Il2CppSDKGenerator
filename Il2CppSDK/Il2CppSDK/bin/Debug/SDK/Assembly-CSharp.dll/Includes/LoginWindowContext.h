#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginWindowContext"));
	}

	template <typename R = ILoginState*> R& State() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ClientSharedContexts*> R& SharedContexts() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& EmulatedLoginId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& ToLocalHost() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& ReferallId() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ClientAnalyticsManager*> R& Analytics() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x1162470))(this);
	}
	template <typename R = UIWindowsLayerType> R get_LayerType() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x1162478))(this);
	}
	template <typename R = ILoginState*> R get_State() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x1162480))(this);
	}
	template <typename R = ClientSharedContexts*> R get_SharedContexts() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x1162488))(this);
	}
	template <typename R = Il2CppString*> R get_EmulatedLoginId() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x1162490))(this);
	}
	template <typename R = bool> R get_ToLocalHost() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x1162498))(this);
	}
	template <typename R = Il2CppString*> R get_ReferallId() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x11624A0))(this);
	}
	template <typename R = void> R set_ReferallId(Il2CppString* value) {
		return ((R (*)(LoginWindowContext*, Il2CppString*))(Il2CppBase() + 0x11624A8))(this, value);
	}
	template <typename R = ClientAnalyticsManager*> R get_Analytics() {
		return ((R (*)(LoginWindowContext*))(Il2CppBase() + 0x11624B0))(this);
	}

};

