#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1551
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass155_1"));
	}

	template <typename R = bool> R& isAvailable() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerOfferwallEventsb__9() {
		return ((R (*)(cDisplayClass1551*))(Il2CppBase() + 0x11533CC))(this);
	}

};

