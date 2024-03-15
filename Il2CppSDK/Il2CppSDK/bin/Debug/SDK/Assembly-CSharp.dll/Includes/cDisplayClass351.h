#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass351
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_1"));
	}

	template <typename R = uintptr_t> R& exception() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass350*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R LoadFriendsPaginatedb__2(bool resolutionRequired) {
		return ((R (*)(cDisplayClass351*, bool))(Il2CppBase() + 0x113BC5C))(this, resolutionRequired);
	}

};

