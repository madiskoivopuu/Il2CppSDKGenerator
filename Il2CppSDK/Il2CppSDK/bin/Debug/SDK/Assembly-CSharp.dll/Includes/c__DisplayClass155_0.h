#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1550
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass155_0"));
	}

	template <typename T = uintptr_t> T& error() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerOfferwallEventsb__7() {
		return ((T (*)(cDisplayClass1550*))(Il2CppBase() + 0x1153350))(this);
	}

};

}
