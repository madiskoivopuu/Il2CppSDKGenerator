#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1550
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass155_0"));
	}

	template <typename R = IronSourceError*> R& error() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerOfferwallEventsb__7() {
		return ((R (*)(cDisplayClass1550*))(Il2CppBase() + 0x1153350))(this);
	}

};

