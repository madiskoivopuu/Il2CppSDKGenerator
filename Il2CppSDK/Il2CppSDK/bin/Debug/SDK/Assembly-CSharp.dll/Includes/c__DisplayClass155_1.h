#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1551
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass155_1"));
	}

	template <typename T = bool> T& isAvailable() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerOfferwallEventsb__9() {
		return ((T (*)(cDisplayClass1551*))(Il2CppBase() + 0x11533CC))(this);
	}

};

}
