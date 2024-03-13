#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1552
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass155_2"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppObject*>*> T& dic() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerOfferwallEventsb__10() {
		return ((T (*)(cDisplayClass1552*))(Il2CppBase() + 0x1153448))(this);
	}

};

