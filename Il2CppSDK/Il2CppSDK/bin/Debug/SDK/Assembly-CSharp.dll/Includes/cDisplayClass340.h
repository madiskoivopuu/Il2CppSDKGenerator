#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass340
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass34_0"));
	}

	template <typename T = Action1SignInStatus*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = PlayGamesPlatform*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action1SignInStatus*>*> T& 9__5() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Authenticateb__1(SignInStatus* code) {
		return ((T (*)(cDisplayClass340*, SignInStatus*))(Il2CppBase() + 0x10B084C))(this, code);
	}
	template <typename T = void> T Authenticateb__2(SignInStatus* code) {
		return ((T (*)(cDisplayClass340*, SignInStatus*))(Il2CppBase() + 0x10B08DC))(this, code);
	}
	template <typename T = void> T Authenticateb__3(SignInStatus* silentSignInResultCode) {
		return ((T (*)(cDisplayClass340*, SignInStatus*))(Il2CppBase() + 0x10B096C))(this, silentSignInResultCode);
	}
	template <typename T = void> T Authenticateb__5(SignInStatus* interactiveSignInResultCode) {
		return ((T (*)(cDisplayClass340*, SignInStatus*))(Il2CppBase() + 0x10B0C20))(this, interactiveSignInResultCode);
	}
	template <typename T = void> T Authenticateb__4() {
		return ((T (*)(cDisplayClass340*))(Il2CppBase() + 0x10B0D10))(this);
	}

};

