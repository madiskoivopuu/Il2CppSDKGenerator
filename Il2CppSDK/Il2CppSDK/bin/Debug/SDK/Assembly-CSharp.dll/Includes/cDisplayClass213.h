#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass213
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_3"));
	}

	template <typename R = uintptr_t> R& rectTransform() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1<Content1<Data*>*>*& action() {
		return *(Action1<Content1<Data*>*>**)((uintptr_t)this + 0x18);
	}
	 Content1<Data*>*& content() {
		return *(Content1<Data*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = float> R Initb__9() {
		return ((R (*)(cDisplayClass213*))(Il2CppBase() + 0x1165F8C))(this);
	}
	template <typename R = void> R Initb__10(float y) {
		return ((R (*)(cDisplayClass213*, float))(Il2CppBase() + 0x1165FB4))(this, y);
	}
	template <typename R = void> R Initb__11() {
		return ((R (*)(cDisplayClass213*))(Il2CppBase() + 0x1165FFC))(this);
	}

};

