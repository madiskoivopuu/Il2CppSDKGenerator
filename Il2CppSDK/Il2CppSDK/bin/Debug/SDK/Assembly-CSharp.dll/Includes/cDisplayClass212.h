#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass212
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_2"));
	}

	template <typename T = Action1Content1Data*>*>*> T& action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Content1Data*>*> T& content() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initb__8() {
		return ((T (*)(cDisplayClass212*))(Il2CppBase() + 0x1165F2C))(this);
	}

};

