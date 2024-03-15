#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass204
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_4"));
	}

	template <typename R = Il2CppObject*> R& sender() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& args() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ChatManager*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Loginb__15() {
		return ((R (*)(cDisplayClass204*))(Il2CppBase() + 0x1119468))(this);
	}

};

