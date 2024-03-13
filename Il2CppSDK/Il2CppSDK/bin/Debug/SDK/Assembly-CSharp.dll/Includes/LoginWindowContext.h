#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginWindowContext"));
	}

	template <typename T = ILoginState*> T& State() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ClientSharedContexts*> T& SharedContexts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EmulatedLoginId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ToLocalHost() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ReferallId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ClientAnalyticsManager*> T& Analytics() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x1162470))(this);
	}
	template <typename T = UIWindowsLayerType*> T get_LayerType() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x1162478))(this);
	}
	template <typename T = ILoginState*> T get_State() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x1162480))(this);
	}
	template <typename T = ClientSharedContexts*> T get_SharedContexts() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x1162488))(this);
	}
	template <typename T = Il2CppString*> T get_EmulatedLoginId() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x1162490))(this);
	}
	template <typename T = bool> T get_ToLocalHost() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x1162498))(this);
	}
	template <typename T = Il2CppString*> T get_ReferallId() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x11624A0))(this);
	}
	template <typename T = void> T set_ReferallId(Il2CppString* value) {
		return ((T (*)(LoginWindowContext*, Il2CppString*))(Il2CppBase() + 0x11624A8))(this, value);
	}
	template <typename T = ClientAnalyticsManager*> T get_Analytics() {
		return ((T (*)(LoginWindowContext*))(Il2CppBase() + 0x11624B0))(this);
	}

};

