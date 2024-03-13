#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass290
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass29_0"));
	}

	template <typename T = AndroidTokenClient*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& reAuthenticateIfNeeded() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action1Il2CppString*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T GetAnotherServerAuthCodeb__0() {
		return ((T (*)(cDisplayClass290*))(Il2CppBase() + 0x1147BCC))(this);
	}

};

