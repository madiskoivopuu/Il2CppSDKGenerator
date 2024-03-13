#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1553
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass155_3"));
	}

	template <typename T = IronSourceError*> T& error() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerOfferwallEventsb__11() {
		return ((T (*)(cDisplayClass1553*))(Il2CppBase() + 0x11534C4))(this);
	}

};

