#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass202
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_2"));
	}

	template <typename T = Il2CppObject*> T& sender() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& args() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ChatManager*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Loginb__13() {
		return ((T (*)(cDisplayClass202*))(Il2CppBase() + 0x1119410))(this);
	}

};

