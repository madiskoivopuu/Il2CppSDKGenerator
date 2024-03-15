#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass212
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_2"));
	}

	 Action1<Content1<Data*>*>*& action() {
		return *(Action1<Content1<Data*>*>**)((uintptr_t)this + 0x10);
	}
	 Content1<Data*>*& content() {
		return *(Content1<Data*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initb__8() {
		return ((R (*)(cDisplayClass212*))(Il2CppBase() + 0x1165F2C))(this);
	}

};

