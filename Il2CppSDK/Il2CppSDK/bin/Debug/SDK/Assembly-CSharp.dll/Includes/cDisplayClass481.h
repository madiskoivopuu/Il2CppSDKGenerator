#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass481
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass48_1"));
	}

	template <typename R = int32_t> R& i() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass480*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R LoadUsersb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass481*, uintptr_t))(Il2CppBase() + 0x113D9C0))(this, exception);
	}

};

