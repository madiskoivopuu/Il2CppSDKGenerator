#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass200
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_0"));
	}

	template <typename R = AccountEntity*> R& entity() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = uintptr_t> R SaveAccountb__1(int32_t index) {
		return ((R (*)(cDisplayClass200*, int32_t))(Il2CppBase() + 0x1135550))(this, index);
	}

};

