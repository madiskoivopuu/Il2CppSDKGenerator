#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass351
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_1"));
	}

	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = cDisplayClass350*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadFriendsPaginatedb__2(bool resolutionRequired) {
		return ((T (*)(cDisplayClass351*, bool))(Il2CppBase() + 0x113BC5C))(this, resolutionRequired);
	}

};

